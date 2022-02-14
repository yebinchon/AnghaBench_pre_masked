
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmcraid_sglist {int num_sg; int scatterlist; } ;
struct pmcraid_cmd {struct pmcraid_sglist* sglist; TYPE_1__* drv_inst; } ;
struct TYPE_2__ {int pdev; } ;


 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (struct pmcraid_sglist*) ;

__attribute__((used)) static void FUNC_2(
 struct pmcraid_cmd *VAR_0,
 int VAR_1,
 int VAR_2
)
{
 struct pmcraid_sglist *VAR_3 = VAR_0->sglist;

 if (VAR_1 > 0) {
  FUNC_0(VAR_0->drv_inst->pdev,
        VAR_3->scatterlist,
        VAR_3->num_sg,
        VAR_2);
  FUNC_1(VAR_3);
  VAR_0->sglist = ((void*)0);
 }
}
