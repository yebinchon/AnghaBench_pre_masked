
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int rq_disk; int q; struct request* next_rq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct request*,int,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(struct request *VAR_0, int VAR_1,
        unsigned int VAR_2,
        unsigned int VAR_3)
{
 if (FUNC_3(VAR_0, VAR_1, VAR_2))
  return 1;


 if (FUNC_4(FUNC_1(VAR_0)) &&
     FUNC_3(VAR_0->next_rq, VAR_1, VAR_3))
  return 1;

 if (FUNC_2(VAR_0->q))
  FUNC_0(VAR_0->rq_disk);

 return 0;
}
