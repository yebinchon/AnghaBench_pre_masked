
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int dma_addr; scalar_t__ write_ptr; scalar_t__ read_ptr; } ;
struct iwl_txq {TYPE_3__ q; } ;
struct TYPE_8__ {int dma; } ;
struct iwl_trans_pcie {int scd_base_addr; TYPE_4__ kw; struct iwl_txq* txq; } ;
struct iwl_trans {TYPE_2__* cfg; } ;
struct TYPE_6__ {TYPE_1__* base_params; } ;
struct TYPE_5__ {int num_of_queues; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*,int ) ;
 int FUNC_3 (struct iwl_trans*,int) ;
 int FUNC_4 (struct iwl_trans*,int ,int) ;

void FUNC_5(struct iwl_trans *VAR_1)
{
 struct iwl_trans_pcie *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->cfg->base_params->num_of_queues;
      VAR_3++) {
  struct iwl_txq *VAR_4 = &VAR_2->txq[VAR_3];

  FUNC_4(VAR_1, FUNC_0(VAR_3),
       VAR_4->q.dma_addr >> 8);
  FUNC_3(VAR_1, VAR_3);
  VAR_4->q.read_ptr = 0;
  VAR_4->q.write_ptr = 0;
 }


 FUNC_4(VAR_1, VAR_0,
      VAR_2->kw.dma >> 4);

 FUNC_2(VAR_1, VAR_2->scd_base_addr);
}
