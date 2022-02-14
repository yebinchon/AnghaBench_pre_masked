
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl8k_rxd_ap {scalar_t__ rx_ctrl; int pkt_phys_addr; int pkt_len; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void *VAR_0, dma_addr_t VAR_1, int VAR_2)
{
 struct mwl8k_rxd_ap *VAR_3 = VAR_0;

 VAR_3->pkt_len = FUNC_0(VAR_2);
 VAR_3->pkt_phys_addr = FUNC_1(VAR_1);
 FUNC_2();
 VAR_3->rx_ctrl = 0;
}
