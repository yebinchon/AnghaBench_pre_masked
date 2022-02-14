
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xen_netif_rx_response {scalar_t__ status; int offset; } ;
struct skb_shared_info {int nr_frags; TYPE_1__* frags; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int data_len; } ;
struct TYPE_4__ {int rsp_cons; } ;
struct netfront_info {TYPE_2__ rx; } ;
struct TYPE_3__ {scalar_t__ size; int page_offset; int page; } ;
typedef TYPE_1__ skb_frag_t ;
typedef int RING_IDX ;


 struct xen_netif_rx_response* FUNC_0 (TYPE_2__*,int ) ;
 struct sk_buff* FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct skb_shared_info* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static RING_IDX FUNC_4(struct netfront_info *VAR_0,
      struct sk_buff *VAR_1,
      struct sk_buff_head *VAR_2)
{
 struct skb_shared_info *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = VAR_3->nr_frags;
 RING_IDX VAR_5 = VAR_0->rx.rsp_cons;
 skb_frag_t *VAR_6 = VAR_3->frags + VAR_4;
 struct sk_buff *VAR_7;

 while ((VAR_7 = FUNC_1(VAR_2))) {
  struct xen_netif_rx_response *VAR_8 =
   FUNC_0(&VAR_0->rx, ++VAR_5);

  VAR_6->page = FUNC_3(VAR_7)->frags[0].page;
  VAR_6->page_offset = VAR_8->offset;
  VAR_6->size = VAR_8->status;

  VAR_1->data_len += VAR_8->status;

  FUNC_3(VAR_7)->nr_frags = 0;
  FUNC_2(VAR_7);

  VAR_6++;
  VAR_4++;
 }

 VAR_3->nr_frags = VAR_4;
 return VAR_5;
}
