
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2_tx_ring_info {int * tx_desc_ring; int tx_desc_mapping; int * tx_buf_ring; } ;
struct bnx2_napi {struct bnx2_tx_ring_info tx_ring; } ;
struct bnx2 {int num_tx_rings; TYPE_1__* pdev; struct bnx2_napi* bnx2_napi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,int ,int *,int ) ;
 int * FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct bnx2 *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_tx_rings; VAR_5++) {
  struct bnx2_napi *VAR_6 = &VAR_4->bnx2_napi[VAR_5];
  struct bnx2_tx_ring_info *VAR_7 = &VAR_6->tx_ring;

  VAR_7->tx_buf_ring = FUNC_1(VAR_2, VAR_1);
  if (VAR_7->tx_buf_ring == ((void*)0))
   return -VAR_0;

  VAR_7->tx_desc_ring =
   FUNC_0(&VAR_4->pdev->dev, VAR_3,
        &VAR_7->tx_desc_mapping, VAR_1);
  if (VAR_7->tx_desc_ring == ((void*)0))
   return -VAR_0;
 }
 return 0;
}
