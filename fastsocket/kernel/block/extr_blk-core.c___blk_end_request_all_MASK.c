
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {struct request* next_rq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct request*,int,unsigned int,unsigned int) ;
 int FUNC_2 (struct request*) ;
 unsigned int FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(struct request *VAR_0, int VAR_1)
{
 bool VAR_2;
 unsigned int VAR_3 = 0;

 if (FUNC_4(FUNC_2(VAR_0)))
  VAR_3 = FUNC_3(VAR_0->next_rq);

 VAR_2 = FUNC_1(VAR_0, VAR_1, FUNC_3(VAR_0), VAR_3);
 FUNC_0(VAR_2);
}
