
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int n_rx_channels; int n_tx_channels; int n_channels; unsigned int vf_buftbl_base; unsigned int vi_scale; unsigned int vf_count; unsigned int tx_dc_base; unsigned int rx_dc_base; int net_dev; } ;
typedef int efx_qword_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_0 (struct efx_nic*) ;
 unsigned int FUNC_1 (struct efx_nic*) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (struct efx_nic*,int ,int ,char*,unsigned int,unsigned int) ;
 int VAR_8 ;

void FUNC_5(struct efx_nic *VAR_9, unsigned VAR_10)
{
 unsigned VAR_11, VAR_12;




 VAR_12 = ((VAR_9->n_rx_channels * VAR_1 +
         VAR_9->n_tx_channels * VAR_3 * VAR_1 +
         VAR_9->n_channels * VAR_2)
        * sizeof(efx_qword_t) / VAR_0);
 VAR_11 = FUNC_2(VAR_9->n_channels, VAR_9->n_tx_channels * VAR_3);
 VAR_9->tx_dc_base = VAR_10 - VAR_11 * VAR_7;
 VAR_9->rx_dc_base = VAR_9->tx_dc_base - VAR_11 * VAR_6;
}
