
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int queue_lock; } ;
struct request {TYPE_2__* rq_disk; } ;
struct TYPE_3__ {scalar_t__ make_it_fail; } ;
struct TYPE_4__ {TYPE_1__ part0; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct request_queue*,struct request*,int ,int ) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 scalar_t__ FUNC_5 (struct request_queue*,struct request*) ;
 int FUNC_6 (struct request*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (int ,unsigned long) ;
 scalar_t__ FUNC_10 (int ) ;

int FUNC_11(struct request_queue *VAR_4, struct request *VAR_5)
{
 unsigned long VAR_6;

 if (FUNC_5(VAR_4, VAR_5))
  return -VAR_0;







 FUNC_8(VAR_4->queue_lock, VAR_6);
 if (FUNC_10(FUNC_2(VAR_4))) {
  FUNC_9(VAR_4->queue_lock, VAR_6);
  return -VAR_2;
 }





 FUNC_0(FUNC_3(VAR_5));

 FUNC_6(VAR_5, 1);
 FUNC_1(VAR_4, VAR_5, VAR_1, 0);

 FUNC_9(VAR_4->queue_lock, VAR_6);

 return 0;
}
