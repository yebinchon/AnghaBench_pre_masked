
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {struct request* next_rq; void* resid_len; } ;


 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 void* FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(struct request *VAR_0)
{
 FUNC_2(VAR_0);





 VAR_0->resid_len = FUNC_3(VAR_0);
 if (FUNC_4(FUNC_1(VAR_0)))
  VAR_0->next_rq->resid_len = FUNC_3(VAR_0->next_rq);

 FUNC_0(VAR_0);
}
