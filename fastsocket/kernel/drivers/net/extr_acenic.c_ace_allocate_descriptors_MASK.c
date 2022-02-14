
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tx_desc {int dummy; } ;
struct rx_desc {int dummy; } ;
struct net_device {int dummy; } ;
struct event {int dummy; } ;
struct ace_private {int * tx_csm; int tx_csm_dma; int pdev; int * rx_ret_prd; int rx_ret_prd_dma; int * evt_prd; int evt_prd_dma; int * tx_ring; int tx_ring_dma; int * evt_ring; int evt_ring_dma; int * rx_mini_ring; int * rx_return_ring; int * rx_jumbo_ring; int * rx_std_ring; int rx_ring_base_dma; } ;


 int FUNC_0 (struct ace_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct net_device*) ;
 struct ace_private* FUNC_2 (struct net_device*) ;
 void* FUNC_3 (int ,int,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_6)
{
 struct ace_private *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;

 VAR_8 = (sizeof(struct rx_desc) *
  (VAR_5 +
   VAR_2 +
   VAR_3 +
   VAR_4));

 VAR_7->rx_std_ring = FUNC_3(VAR_7->pdev, VAR_8,
            &VAR_7->rx_ring_base_dma);
 if (VAR_7->rx_std_ring == ((void*)0))
  goto fail;

 VAR_7->rx_jumbo_ring = VAR_7->rx_std_ring + VAR_5;
 VAR_7->rx_mini_ring = VAR_7->rx_jumbo_ring + VAR_2;
 VAR_7->rx_return_ring = VAR_7->rx_mini_ring + VAR_3;

 VAR_8 = (sizeof(struct event) * VAR_0);

 VAR_7->evt_ring = FUNC_3(VAR_7->pdev, VAR_8, &VAR_7->evt_ring_dma);

 if (VAR_7->evt_ring == ((void*)0))
  goto fail;





 if (!FUNC_0(VAR_7)) {
  VAR_8 = (sizeof(struct tx_desc) * VAR_1);

  VAR_7->tx_ring = FUNC_3(VAR_7->pdev, VAR_8,
         &VAR_7->tx_ring_dma);

  if (VAR_7->tx_ring == ((void*)0))
   goto fail;
 }

 VAR_7->evt_prd = FUNC_3(VAR_7->pdev, sizeof(u32),
        &VAR_7->evt_prd_dma);
 if (VAR_7->evt_prd == ((void*)0))
  goto fail;

 VAR_7->rx_ret_prd = FUNC_3(VAR_7->pdev, sizeof(u32),
           &VAR_7->rx_ret_prd_dma);
 if (VAR_7->rx_ret_prd == ((void*)0))
  goto fail;

 VAR_7->tx_csm = FUNC_3(VAR_7->pdev, sizeof(u32),
       &VAR_7->tx_csm_dma);
 if (VAR_7->tx_csm == ((void*)0))
  goto fail;

 return 0;

fail:

 FUNC_1(VAR_6);
 return 1;
}
