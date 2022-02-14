
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_rspq {size_t cidx; int * desc; } ;
struct sge_qset {int napi; struct sge_rspq rspq; } ;


 scalar_t__ FUNC_0 (int *,struct sge_rspq*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct sge_qset *VAR_0)
{
 struct sge_rspq *VAR_1 = &VAR_0->rspq;

 if (!FUNC_1(&VAR_0->napi) &&
     FUNC_0(&VAR_1->desc[VAR_1->cidx], VAR_1)) {
  FUNC_2(&VAR_0->napi);
  return 1;
 }
 return 0;
}
