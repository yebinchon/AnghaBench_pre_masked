
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {int ip_summed; } ;
struct nx_host_rds_ring {int dma_size; struct netxen_rx_buffer* rx_buf_arr; } ;
struct netxen_rx_buffer {int state; struct sk_buff* skb; int dma; } ;
struct TYPE_2__ {int csummed; } ;
struct netxen_adapter {TYPE_1__ stats; scalar_t__ rx_csum; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct netxen_adapter *VAR_5,
  struct nx_host_rds_ring *VAR_6, u16 VAR_7, u16 VAR_8)
{
 struct netxen_rx_buffer *VAR_9;
 struct sk_buff *VAR_10;

 VAR_9 = &VAR_6->rx_buf_arr[VAR_7];

 FUNC_1(VAR_5->pdev, VAR_9->dma, VAR_6->dma_size,
   VAR_3);

 VAR_10 = VAR_9->skb;
 if (!VAR_10)
  goto no_skb;

 if (FUNC_0(VAR_5->rx_csum && VAR_8 == VAR_4)) {
  VAR_5->stats.csummed++;
  VAR_10->ip_summed = VAR_1;
 } else
  VAR_10->ip_summed = VAR_0;

 VAR_9->skb = ((void*)0);
no_skb:
 VAR_9->state = VAR_2;
 return VAR_10;
}
