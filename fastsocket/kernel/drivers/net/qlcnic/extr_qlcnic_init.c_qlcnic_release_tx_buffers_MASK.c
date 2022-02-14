
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_skb_frag {long long dma; int length; } ;
struct qlcnic_host_tx_ring {int num_desc; struct qlcnic_cmd_buffer* cmd_buf_arr; } ;
struct qlcnic_cmd_buffer {int frag_count; int * skb; struct qlcnic_skb_frag* frag_array; } ;
struct qlcnic_adapter {int pdev; struct qlcnic_host_tx_ring* tx_ring; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,long long,int ,int ) ;
 int FUNC_2 (int ,long long,int ,int ) ;

void FUNC_3(struct qlcnic_adapter *VAR_1)
{
 struct qlcnic_cmd_buffer *VAR_2;
 struct qlcnic_skb_frag *VAR_3;
 int VAR_4, VAR_5;
 struct qlcnic_host_tx_ring *VAR_6 = VAR_1->tx_ring;

 VAR_2 = VAR_6->cmd_buf_arr;
 for (VAR_4 = 0; VAR_4 < VAR_6->num_desc; VAR_4++) {
  VAR_3 = VAR_2->frag_array;
  if (VAR_3->dma) {
   FUNC_2(VAR_1->pdev, VAR_3->dma,
      VAR_3->length, VAR_0);
   VAR_3->dma = 0ULL;
  }
  for (VAR_5 = 0; VAR_5 < VAR_2->frag_count; VAR_5++) {
   VAR_3++;
   if (VAR_3->dma) {
    FUNC_1(VAR_1->pdev, VAR_3->dma,
            VAR_3->length,
            VAR_0);
    VAR_3->dma = 0ULL;
   }
  }
  if (VAR_2->skb) {
   FUNC_0(VAR_2->skb);
   VAR_2->skb = ((void*)0);
  }
  VAR_2++;
 }
}
