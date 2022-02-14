
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct elevator_queue* elevator; int queue_lock; } ;
struct elevator_type {int dummy; } ;
struct elevator_queue {TYPE_1__* elevator_type; scalar_t__ registered; int kobj; } ;
struct TYPE_2__ {int elevator_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct elevator_queue*) ;
 int FUNC_1 (struct request_queue*,char*,int ) ;
 struct elevator_queue* FUNC_2 (struct request_queue*,struct elevator_type*) ;
 int FUNC_3 (struct request_queue*,struct elevator_queue*,void*) ;
 int FUNC_4 (struct elevator_queue*) ;
 void* FUNC_5 (struct request_queue*,struct elevator_queue*) ;
 int FUNC_6 (struct request_queue*) ;
 int FUNC_7 (struct request_queue*) ;
 int FUNC_8 (struct request_queue*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct request_queue *VAR_1, struct elevator_type *VAR_2)
{
 struct elevator_queue *VAR_3, *VAR_4;
 void *VAR_5;
 int VAR_6;




 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_5(VAR_1, VAR_4);
 if (!VAR_5) {
  FUNC_9(&VAR_4->kobj);
  return -VAR_0;
 }




 FUNC_7(VAR_1);




 VAR_3 = VAR_1->elevator;




 FUNC_10(VAR_1->queue_lock);
 FUNC_3(VAR_1, VAR_4, VAR_5);
 FUNC_11(VAR_1->queue_lock);

 if (VAR_3->registered) {
  FUNC_0(VAR_3);

  VAR_6 = FUNC_8(VAR_1);
  if (VAR_6)
   goto fail_register;
 }




 FUNC_4(VAR_3);
 FUNC_6(VAR_1);

 FUNC_1(VAR_1, "elv switch: %s", VAR_4->elevator_type->elevator_name);

 return 0;

fail_register:




 FUNC_4(VAR_4);
 VAR_1->elevator = VAR_3;
 FUNC_8(VAR_1);
 FUNC_6(VAR_1);

 return VAR_6;
}
