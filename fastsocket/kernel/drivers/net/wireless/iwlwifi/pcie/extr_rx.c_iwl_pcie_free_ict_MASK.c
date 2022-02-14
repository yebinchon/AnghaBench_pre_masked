
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {scalar_t__ ict_tbl_dma; int * ict_tbl; } ;
struct iwl_trans {int dev; } ;


 int VAR_0 ;
 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (int ,int ,int *,scalar_t__) ;

void FUNC_2(struct iwl_trans *VAR_1)
{
 struct iwl_trans_pcie *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->ict_tbl) {
  FUNC_1(VAR_1->dev, VAR_0,
      VAR_2->ict_tbl,
      VAR_2->ict_tbl_dma);
  VAR_2->ict_tbl = ((void*)0);
  VAR_2->ict_tbl_dma = 0;
 }
}
