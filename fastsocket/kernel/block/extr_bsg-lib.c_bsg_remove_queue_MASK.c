
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* count; int* starved; } ;
struct request_queue {int queue_lock; TYPE_1__ rq; } ;
struct request {int errors; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*,int ) ;
 struct request* FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct request_queue *VAR_1)
{
 struct request *VAR_2;
 int VAR_3;

 if (!VAR_1)
  return;


 FUNC_5(VAR_1->queue_lock);
 FUNC_2(VAR_1);


 while (1) {



  VAR_2 = FUNC_1(VAR_1);

  VAR_3 = VAR_1->rq.count[0] + VAR_1->rq.count[1] +
    VAR_1->rq.starved[0] + VAR_1->rq.starved[1];
  FUNC_6(VAR_1->queue_lock);

  if (VAR_3 == 0)
   break;






  if (VAR_2) {



   VAR_2->errors = -VAR_0;
   FUNC_0(VAR_2, -VAR_0);
  }

  FUNC_4(200);
  FUNC_5(VAR_1->queue_lock);
 }
 FUNC_3(VAR_1);
}
