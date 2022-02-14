
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct sw_rx_page {struct page* page; } ;
struct page {int dummy; } ;
struct eth_rx_sge {void* addr_lo; void* addr_hi; } ;
struct bnx2x_fastpath {struct eth_rx_sge* rx_sge_ring; struct sw_rx_page* rx_page_ring; } ;
struct bnx2x {TYPE_1__* pdev; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct page*,int ) ;
 struct page* FUNC_4 (int ,int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int *,struct page*,int ,int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct sw_rx_page*,int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct bnx2x *VAR_4, struct bnx2x_fastpath *VAR_5,
         u16 VAR_6, gfp_t VAR_7)
{
 struct page *VAR_8 = FUNC_4(VAR_7, VAR_2);
 struct sw_rx_page *VAR_9 = &VAR_5->rx_page_ring[VAR_6];
 struct eth_rx_sge *VAR_10 = &VAR_5->rx_sge_ring[VAR_6];
 dma_addr_t VAR_11;

 if (FUNC_9(VAR_8 == ((void*)0))) {
  FUNC_0("Can't alloc sge\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_6(&VAR_4->pdev->dev, VAR_8, 0,
          VAR_3, VAR_0);
 if (FUNC_9(FUNC_7(&VAR_4->pdev->dev, VAR_11))) {
  FUNC_3(VAR_8, VAR_2);
  FUNC_0("Can't map sge\n");
  return -VAR_1;
 }

 VAR_9->page = VAR_8;
 FUNC_8(VAR_9, VAR_11, VAR_11);

 VAR_10->addr_hi = FUNC_5(FUNC_1(VAR_11));
 VAR_10->addr_lo = FUNC_5(FUNC_2(VAR_11));

 return 0;
}
