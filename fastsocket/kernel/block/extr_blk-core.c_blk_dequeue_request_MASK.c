
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int * in_flight; } ;
struct request {int queuelist; struct request_queue* q; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (struct request*) ;
 int FUNC_6 (struct request*) ;

void FUNC_7(struct request *VAR_0)
{
 struct request_queue *VAR_1 = VAR_0->q;

 FUNC_0(FUNC_4(&VAR_0->queuelist));
 FUNC_0(FUNC_1(VAR_0));

 FUNC_3(&VAR_0->queuelist);






 if (FUNC_2(VAR_0)) {
  VAR_1->in_flight[FUNC_5(VAR_0)]++;
  FUNC_6(VAR_0);
 }
}
