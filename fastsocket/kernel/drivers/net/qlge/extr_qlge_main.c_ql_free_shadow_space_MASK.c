
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int * tx_ring_shadow_reg_area; int tx_ring_shadow_reg_dma; int pdev; int * rx_ring_shadow_reg_area; int rx_ring_shadow_reg_dma; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct ql_adapter *VAR_1)
{
 if (VAR_1->rx_ring_shadow_reg_area) {
  FUNC_0(VAR_1->pdev,
        VAR_0,
        VAR_1->rx_ring_shadow_reg_area,
        VAR_1->rx_ring_shadow_reg_dma);
  VAR_1->rx_ring_shadow_reg_area = ((void*)0);
 }
 if (VAR_1->tx_ring_shadow_reg_area) {
  FUNC_0(VAR_1->pdev,
        VAR_0,
        VAR_1->tx_ring_shadow_reg_area,
        VAR_1->tx_ring_shadow_reg_dma);
  VAR_1->tx_ring_shadow_reg_area = ((void*)0);
 }
}
