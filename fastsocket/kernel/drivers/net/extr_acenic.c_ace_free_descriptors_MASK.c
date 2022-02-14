
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tx_desc {int dummy; } ;
struct rx_desc {int dummy; } ;
struct net_device {int dummy; } ;
struct event {int dummy; } ;
struct ace_private {void* rx_std_ring; void* evt_ring; void* tx_ring; int * tx_csm; int tx_csm_dma; int pdev; int * rx_ret_prd; int rx_ret_prd_dma; int * evt_prd; int evt_prd_dma; int tx_ring_dma; int evt_ring_dma; int * rx_return_ring; int * rx_mini_ring; int * rx_jumbo_ring; int rx_ring_base_dma; } ;


 int FUNC_0 (struct ace_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ace_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int,void*,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_6)
{
 struct ace_private *VAR_7 = FUNC_1(VAR_6);
 int VAR_8;

 if (VAR_7->rx_std_ring != ((void*)0)) {
  VAR_8 = (sizeof(struct rx_desc) *
   (VAR_5 +
    VAR_2 +
    VAR_3 +
    VAR_4));
  FUNC_2(VAR_7->pdev, VAR_8, VAR_7->rx_std_ring,
        VAR_7->rx_ring_base_dma);
  VAR_7->rx_std_ring = ((void*)0);
  VAR_7->rx_jumbo_ring = ((void*)0);
  VAR_7->rx_mini_ring = ((void*)0);
  VAR_7->rx_return_ring = ((void*)0);
 }
 if (VAR_7->evt_ring != ((void*)0)) {
  VAR_8 = (sizeof(struct event) * VAR_0);
  FUNC_2(VAR_7->pdev, VAR_8, VAR_7->evt_ring,
        VAR_7->evt_ring_dma);
  VAR_7->evt_ring = ((void*)0);
 }
 if (VAR_7->tx_ring != ((void*)0) && !FUNC_0(VAR_7)) {
  VAR_8 = (sizeof(struct tx_desc) * VAR_1);
  FUNC_2(VAR_7->pdev, VAR_8, VAR_7->tx_ring,
        VAR_7->tx_ring_dma);
 }
 VAR_7->tx_ring = ((void*)0);

 if (VAR_7->evt_prd != ((void*)0)) {
  FUNC_2(VAR_7->pdev, sizeof(u32),
        (void *)VAR_7->evt_prd, VAR_7->evt_prd_dma);
  VAR_7->evt_prd = ((void*)0);
 }
 if (VAR_7->rx_ret_prd != ((void*)0)) {
  FUNC_2(VAR_7->pdev, sizeof(u32),
        (void *)VAR_7->rx_ret_prd,
        VAR_7->rx_ret_prd_dma);
  VAR_7->rx_ret_prd = ((void*)0);
 }
 if (VAR_7->tx_csm != ((void*)0)) {
  FUNC_2(VAR_7->pdev, sizeof(u32),
        (void *)VAR_7->tx_csm, VAR_7->tx_csm_dma);
  VAR_7->tx_csm = ((void*)0);
 }
}
