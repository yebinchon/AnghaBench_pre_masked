
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_rx_page_state {int dummy; } ;
struct efx_nic {int rx_page_buf_step; int rx_bufs_per_page; int rx_buffer_order; int rx_buffer_truesize; int rx_pages_per_batch; scalar_t__ rx_dma_len; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2(struct efx_nic *VAR_4)
{
 VAR_4->rx_page_buf_step = FUNC_0(VAR_4->rx_dma_len + VAR_0,
          VAR_1);
 VAR_4->rx_bufs_per_page = VAR_4->rx_buffer_order ? 1 :
  ((VAR_3 - sizeof(struct efx_rx_page_state)) /
   VAR_4->rx_page_buf_step);
 VAR_4->rx_buffer_truesize = (VAR_3 << VAR_4->rx_buffer_order) /
  VAR_4->rx_bufs_per_page;
 VAR_4->rx_pages_per_batch = FUNC_1(VAR_2,
            VAR_4->rx_bufs_per_page);
}
