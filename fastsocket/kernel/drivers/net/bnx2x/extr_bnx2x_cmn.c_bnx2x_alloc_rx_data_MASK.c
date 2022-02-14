
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct sw_rx_bd {int * data; } ;
struct eth_rx_bd {void* addr_lo; void* addr_hi; } ;
struct bnx2x_fastpath {int rx_buf_size; struct eth_rx_bd* rx_desc_ring; struct sw_rx_bd* rx_buf_ring; } ;
struct bnx2x {TYPE_1__* pdev; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (struct bnx2x_fastpath*,int ) ;
 int FUNC_4 (struct bnx2x_fastpath*,int *) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct sw_rx_bd*,int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct bnx2x *VAR_3, struct bnx2x_fastpath *VAR_4,
          u16 VAR_5, gfp_t VAR_6)
{
 u8 *VAR_7;
 struct sw_rx_bd *VAR_8 = &VAR_4->rx_buf_ring[VAR_5];
 struct eth_rx_bd *VAR_9 = &VAR_4->rx_desc_ring[VAR_5];
 dma_addr_t VAR_10;

 VAR_7 = FUNC_3(VAR_4, VAR_6);
 if (FUNC_9(VAR_7 == ((void*)0)))
  return -VAR_1;

 VAR_10 = FUNC_6(&VAR_3->pdev->dev, VAR_7 + VAR_2,
     VAR_4->rx_buf_size,
     VAR_0);
 if (FUNC_9(FUNC_7(&VAR_3->pdev->dev, VAR_10))) {
  FUNC_4(VAR_4, VAR_7);
  FUNC_0("Can't map rx data\n");
  return -VAR_1;
 }

 VAR_8->data = VAR_7;
 FUNC_8(VAR_8, VAR_10, VAR_10);

 VAR_9->addr_hi = FUNC_5(FUNC_1(VAR_10));
 VAR_9->addr_lo = FUNC_5(FUNC_2(VAR_10));

 return 0;
}
