
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_rx_buffer {int * skb; int dma; } ;
struct qlcnic_recv_context {struct qlcnic_host_rds_ring* rds_rings; } ;
struct qlcnic_host_rds_ring {int num_desc; int dma_size; struct qlcnic_rx_buffer* rx_buf_arr; } ;
struct qlcnic_adapter {int max_rds_rings; int pdev; struct qlcnic_recv_context* recv_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;

void FUNC_2(struct qlcnic_adapter *VAR_1)
{
 struct qlcnic_recv_context *VAR_2;
 struct qlcnic_host_rds_ring *VAR_3;
 struct qlcnic_rx_buffer *VAR_4;
 int VAR_5, VAR_6;

 VAR_2 = VAR_1->recv_ctx;
 for (VAR_6 = 0; VAR_6 < VAR_1->max_rds_rings; VAR_6++) {
  VAR_3 = &VAR_2->rds_rings[VAR_6];
  for (VAR_5 = 0; VAR_5 < VAR_3->num_desc; ++VAR_5) {
   VAR_4 = &(VAR_3->rx_buf_arr[VAR_5]);
   if (VAR_4->skb == ((void*)0))
    continue;

   FUNC_1(VAR_1->pdev,
     VAR_4->dma,
     VAR_3->dma_size,
     VAR_0);

   FUNC_0(VAR_4->skb);
  }
 }
}
