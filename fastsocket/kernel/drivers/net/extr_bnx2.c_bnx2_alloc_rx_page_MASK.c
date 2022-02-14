
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u16 ;
struct page {int dummy; } ;
struct bnx2_sw_pg {struct page* page; } ;
struct bnx2_rx_ring_info {struct bnx2_rx_bd** rx_pg_desc_ring; struct bnx2_sw_pg* rx_pg_ring; } ;
struct bnx2_rx_bd {int rx_bd_haddr_hi; int rx_bd_haddr_lo; } ;
struct bnx2 {TYPE_1__* pdev; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,struct page*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (struct bnx2_sw_pg*,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline int
FUNC_7(struct bnx2 *VAR_4, struct bnx2_rx_ring_info *VAR_5, u16 VAR_6, gfp_t VAR_7)
{
 dma_addr_t VAR_8;
 struct bnx2_sw_pg *VAR_9 = &VAR_5->rx_pg_ring[VAR_6];
 struct bnx2_rx_bd *VAR_10 =
  &VAR_5->rx_pg_desc_ring[FUNC_1(VAR_6)][FUNC_0(VAR_6)];
 struct page *VAR_11 = FUNC_3(VAR_7);

 if (!VAR_11)
  return -VAR_1;
 VAR_8 = FUNC_4(&VAR_4->pdev->dev, VAR_11, 0, VAR_2,
          VAR_3);
 if (FUNC_5(&VAR_4->pdev->dev, VAR_8)) {
  FUNC_2(VAR_11);
  return -VAR_0;
 }

 VAR_9->page = VAR_11;
 FUNC_6(VAR_9, VAR_8, VAR_8);
 VAR_10->rx_bd_haddr_hi = (u64) VAR_8 >> 32;
 VAR_10->rx_bd_haddr_lo = (u64) VAR_8 & 0xffffffff;
 return 0;
}
