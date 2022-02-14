
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_rx_buffer {int list; } ;
struct qlcnic_recv_context {struct qlcnic_host_rds_ring* rds_rings; } ;
struct qlcnic_host_rds_ring {int num_desc; int free_list; struct qlcnic_rx_buffer* rx_buf_arr; } ;
struct qlcnic_adapter {int max_rds_rings; struct qlcnic_recv_context* recv_ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct qlcnic_adapter *VAR_0)
{
 struct qlcnic_recv_context *VAR_1;
 struct qlcnic_host_rds_ring *VAR_2;
 struct qlcnic_rx_buffer *VAR_3;
 int VAR_4, VAR_5;

 VAR_1 = VAR_0->recv_ctx;
 for (VAR_5 = 0; VAR_5 < VAR_0->max_rds_rings; VAR_5++) {
  VAR_2 = &VAR_1->rds_rings[VAR_5];

  FUNC_0(&VAR_2->free_list);

  VAR_3 = VAR_2->rx_buf_arr;
  for (VAR_4 = 0; VAR_4 < VAR_2->num_desc; VAR_4++) {
   FUNC_1(&VAR_3->list,
     &VAR_2->free_list);
   VAR_3++;
  }
 }
}
