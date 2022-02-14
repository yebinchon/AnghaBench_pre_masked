
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {int ip_summed; } ;
struct qlcnic_rx_buffer {struct sk_buff* skb; int dma; } ;
struct qlcnic_host_rds_ring {int dma_size; struct qlcnic_rx_buffer* rx_buf_arr; } ;
struct TYPE_2__ {int csummed; } ;
struct qlcnic_adapter {TYPE_1__ stats; scalar_t__ rx_csum; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ) ;

struct sk_buff * FUNC_5(struct qlcnic_adapter *VAR_4,
           struct qlcnic_host_rds_ring *VAR_5,
           u16 VAR_6, u16 VAR_7)
{
 struct qlcnic_rx_buffer *VAR_8;
 struct sk_buff *VAR_9;

 VAR_8 = &VAR_5->rx_buf_arr[VAR_6];

 if (FUNC_4(VAR_8->skb == ((void*)0))) {
  FUNC_0(1);
  return ((void*)0);
 }

 FUNC_2(VAR_4->pdev, VAR_8->dma, VAR_5->dma_size,
    VAR_1);

 VAR_9 = VAR_8->skb;
 if (FUNC_1(VAR_4->rx_csum &&
     (VAR_7 == VAR_3 || VAR_7 == VAR_2))) {
  VAR_4->stats.csummed++;
  VAR_9->ip_summed = VAR_0;
 } else {
  FUNC_3(VAR_9);
 }

 VAR_8->skb = ((void*)0);

 return VAR_9;
}
