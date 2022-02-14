
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct fcoe_hash_table_entry {int dummy; } ;
struct bnx2fc_hba {int hash_tbl_segment_count; int hash_tbl_pbl_dma; int * hash_tbl_pbl; TYPE_1__* pcidev; int ** hash_tbl_segments; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct bnx2fc_hba *VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 u32 *VAR_8;

 VAR_6 = VAR_4->hash_tbl_segment_count;
 VAR_7 = VAR_2 * VAR_1 *
  sizeof(struct fcoe_hash_table_entry);

 VAR_8 = VAR_4->hash_tbl_pbl;
 for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5) {
  dma_addr_t VAR_9;

  VAR_9 = FUNC_1(*VAR_8);
  ++VAR_8;
  VAR_9 += ((u64)FUNC_1(*VAR_8)) << 32;
  ++VAR_8;
  FUNC_0(&VAR_4->pcidev->dev,
      VAR_0,
      VAR_4->hash_tbl_segments[VAR_5],
      VAR_9);

 }

 if (VAR_4->hash_tbl_pbl) {
  FUNC_0(&VAR_4->pcidev->dev, VAR_3,
        VAR_4->hash_tbl_pbl,
        VAR_4->hash_tbl_pbl_dma);
  VAR_4->hash_tbl_pbl = ((void*)0);
 }
}
