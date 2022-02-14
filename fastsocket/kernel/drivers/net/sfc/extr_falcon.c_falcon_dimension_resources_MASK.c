
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int rx_dc_base; int tx_dc_base; } ;



__attribute__((used)) static void FUNC_0(struct efx_nic *VAR_0)
{
 VAR_0->rx_dc_base = 0x20000;
 VAR_0->tx_dc_base = 0x26000;
}
