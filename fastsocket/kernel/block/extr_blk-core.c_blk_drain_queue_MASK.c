
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int elvpriv; int* count; int * wait; } ;
struct request_queue {int* in_flight; int queue_lock; TYPE_1__ rq; scalar_t__ request_fn; int * flush_queue; int queue_head; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct request_queue *VAR_0, bool VAR_1)
{
 int VAR_2;

 while (1) {
  bool VAR_3 = 0;

  FUNC_6(VAR_0->queue_lock);

  FUNC_3(VAR_0);
  if (VAR_1)
   FUNC_2(VAR_0);

  FUNC_1(VAR_0);

  VAR_3 |= VAR_0->rq.elvpriv;






  if (VAR_1) {
   VAR_3 |= !FUNC_4(&VAR_0->queue_head);
   for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
    VAR_3 |= VAR_0->rq.count[VAR_2];
    VAR_3 |= VAR_0->in_flight[VAR_2];
    VAR_3 |= !FUNC_4(&VAR_0->flush_queue[VAR_2]);
   }
  }

  FUNC_7(VAR_0->queue_lock);

  if (!VAR_3)
   break;
  FUNC_5(10);
 }






 if (VAR_0->request_fn) {
  FUNC_6(VAR_0->queue_lock);
  for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->rq.wait); VAR_2++)
   FUNC_8(&VAR_0->rq.wait[VAR_2]);
  FUNC_7(VAR_0->queue_lock);
 }

}
