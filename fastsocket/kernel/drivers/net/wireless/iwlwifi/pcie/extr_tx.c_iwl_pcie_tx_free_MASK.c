
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans_pcie {int scd_bc_tbls; int kw; int * txq; } ;
struct iwl_trans {TYPE_2__* cfg; } ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {int num_of_queues; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (struct iwl_trans*,int *) ;
 int FUNC_2 (struct iwl_trans*,int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct iwl_trans *VAR_0)
{
 int VAR_1;
 struct iwl_trans_pcie *VAR_2 = FUNC_0(VAR_0);


 if (VAR_2->txq) {
  for (VAR_1 = 0;
       VAR_1 < VAR_0->cfg->base_params->num_of_queues; VAR_1++)
   FUNC_2(VAR_0, VAR_1);
 }

 FUNC_3(VAR_2->txq);
 VAR_2->txq = ((void*)0);

 FUNC_1(VAR_0, &VAR_2->kw);

 FUNC_1(VAR_0, &VAR_2->scd_bc_tbls);
}
