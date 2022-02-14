
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_rspq {int napi; scalar_t__ handler; } ;
struct TYPE_2__ {struct sge_rspq** ingr_map; } ;
struct adapter {TYPE_1__ sge; } ;


 int FUNC_0 (struct sge_rspq**) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->sge.ingr_map); VAR_1++) {
  struct sge_rspq *VAR_2 = VAR_0->sge.ingr_map[VAR_1];

  if (VAR_2 && VAR_2->handler)
   FUNC_1(&VAR_2->napi);
 }
}
