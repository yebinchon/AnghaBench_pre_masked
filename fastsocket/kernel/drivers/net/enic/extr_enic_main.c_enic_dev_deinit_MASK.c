
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enic {unsigned int rq_count; int * napi; } ;


 int FUNC_0 (struct enic*) ;
 int FUNC_1 (struct enic*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct enic *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->rq_count; VAR_1++)
  FUNC_2(&VAR_0->napi[VAR_1]);

 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
}
