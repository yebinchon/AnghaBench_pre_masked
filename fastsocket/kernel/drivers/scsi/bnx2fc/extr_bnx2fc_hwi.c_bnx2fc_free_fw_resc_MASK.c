
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regpair {int dummy; } ;
struct fcoe_t2_hash_table_entry {int dummy; } ;
struct bnx2fc_hba {int * t2_hash_tbl; int t2_hash_tbl_dma; TYPE_1__* pcidev; int * t2_hash_tbl_ptr; int t2_hash_tbl_ptr_dma; int * dummy_buffer; int dummy_buf_dma; int * stats_buffer; int stats_buf_dma; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2fc_hba*) ;
 int FUNC_1 (int *,int,int *,int ) ;

void FUNC_2(struct bnx2fc_hba *VAR_2)
{
 u32 VAR_3;

 if (VAR_2->stats_buffer) {
  FUNC_1(&VAR_2->pcidev->dev, VAR_1,
      VAR_2->stats_buffer, VAR_2->stats_buf_dma);
  VAR_2->stats_buffer = ((void*)0);
 }

 if (VAR_2->dummy_buffer) {
  FUNC_1(&VAR_2->pcidev->dev, VAR_1,
      VAR_2->dummy_buffer, VAR_2->dummy_buf_dma);
  VAR_2->dummy_buffer = ((void*)0);
 }

 if (VAR_2->t2_hash_tbl_ptr) {
  VAR_3 = VAR_0 * sizeof(struct regpair);
  FUNC_1(&VAR_2->pcidev->dev, VAR_3,
        VAR_2->t2_hash_tbl_ptr,
        VAR_2->t2_hash_tbl_ptr_dma);
  VAR_2->t2_hash_tbl_ptr = ((void*)0);
 }

 if (VAR_2->t2_hash_tbl) {
  VAR_3 = VAR_0 *
       sizeof(struct fcoe_t2_hash_table_entry);
  FUNC_1(&VAR_2->pcidev->dev, VAR_3,
        VAR_2->t2_hash_tbl, VAR_2->t2_hash_tbl_dma);
  VAR_2->t2_hash_tbl = ((void*)0);
 }
 FUNC_0(VAR_2);
}
