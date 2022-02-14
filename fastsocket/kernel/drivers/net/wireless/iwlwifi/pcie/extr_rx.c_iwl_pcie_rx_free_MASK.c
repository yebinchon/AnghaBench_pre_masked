
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rxq {int * rb_stts; scalar_t__ rb_stts_dma; int * bd; scalar_t__ bd_dma; int lock; } ;
struct iwl_trans_pcie {int rx_replenish; struct iwl_rxq rxq; } ;
struct iwl_trans {int dev; } ;
struct iwl_rb_status {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int *,scalar_t__) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct iwl_trans *VAR_1)
{
 struct iwl_trans_pcie *VAR_2 = FUNC_1(VAR_1);
 struct iwl_rxq *VAR_3 = &VAR_2->rxq;
 unsigned long VAR_4;



 if (!VAR_3->bd) {
  FUNC_0(VAR_1, "Free NULL rx context\n");
  return;
 }

 FUNC_2(&VAR_2->rx_replenish);

 FUNC_5(&VAR_3->lock, VAR_4);
 FUNC_4(VAR_1);
 FUNC_6(&VAR_3->lock, VAR_4);

 FUNC_3(VAR_1->dev, sizeof(__le32) * VAR_0,
     VAR_3->bd, VAR_3->bd_dma);
 VAR_3->bd_dma = 0;
 VAR_3->bd = ((void*)0);

 if (VAR_3->rb_stts)
  FUNC_3(VAR_1->dev,
      sizeof(struct iwl_rb_status),
      VAR_3->rb_stts, VAR_3->rb_stts_dma);
 else
  FUNC_0(VAR_1, "Free rxq->rb_stts which is NULL\n");
 VAR_3->rb_stts_dma = 0;
 VAR_3->rb_stts = ((void*)0);
}
