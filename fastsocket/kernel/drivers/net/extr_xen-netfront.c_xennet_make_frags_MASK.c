
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xen_netif_tx_request {unsigned int size; unsigned int id; unsigned int offset; int flags; void* gref; } ;
struct sk_buff {char* data; } ;
struct TYPE_10__ {scalar_t__ req_prod_pvt; } ;
struct netfront_info {TYPE_5__ tx; void** grant_tx_ref; TYPE_1__* xbdev; int gref_tx_head; TYPE_4__* tx_skbs; int tx_skb_freelist; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {unsigned int page_offset; unsigned int size; int page; } ;
typedef TYPE_2__ skb_frag_t ;
typedef void* grant_ref_t ;
struct TYPE_9__ {void* skb; } ;
struct TYPE_8__ {int nr_frags; TYPE_2__* frags; } ;
struct TYPE_6__ {int otherend_id; } ;
typedef scalar_t__ RING_IDX ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct xen_netif_tx_request* FUNC_1 (TYPE_5__*,int ) ;
 unsigned int FUNC_2 (int *,TYPE_4__*) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (void*,int ,unsigned long,int ) ;
 struct netfront_info* FUNC_5 (struct net_device*) ;
 unsigned int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 unsigned long FUNC_8 (int ) ;
 void* FUNC_9 (struct sk_buff*) ;
 unsigned int FUNC_10 (struct sk_buff*) ;
 TYPE_3__* FUNC_11 (struct sk_buff*) ;
 unsigned long FUNC_12 (char*) ;

__attribute__((used)) static void FUNC_13(struct sk_buff *VAR_3, struct net_device *VAR_4,
         struct xen_netif_tx_request *VAR_5)
{
 struct netfront_info *VAR_6 = FUNC_5(VAR_4);
 char *VAR_7 = VAR_3->data;
 unsigned long VAR_8;
 RING_IDX VAR_9 = VAR_6->tx.req_prod_pvt;
 int VAR_10 = FUNC_11(VAR_3)->nr_frags;
 unsigned int VAR_11 = FUNC_6(VAR_7);
 unsigned int VAR_12 = FUNC_10(VAR_3);
 unsigned int VAR_13;
 grant_ref_t VAR_14;
 int VAR_15;



 while (VAR_12 > VAR_2 - VAR_11) {
  VAR_5->size = VAR_2 - VAR_11;
  VAR_5->flags |= VAR_1;
  VAR_12 -= VAR_5->size;
  VAR_7 += VAR_5->size;
  VAR_11 = 0;

  VAR_13 = FUNC_2(&VAR_6->tx_skb_freelist, VAR_6->tx_skbs);
  VAR_6->tx_skbs[VAR_13].skb = FUNC_9(VAR_3);
  VAR_5 = FUNC_1(&VAR_6->tx, VAR_9++);
  VAR_5->id = VAR_13;
  VAR_14 = FUNC_3(&VAR_6->gref_tx_head);
  FUNC_0((signed short)VAR_14 < 0);

  VAR_8 = FUNC_12(VAR_7);
  FUNC_4(VAR_14, VAR_6->xbdev->otherend_id,
      VAR_8, VAR_0);

  VAR_5->gref = VAR_6->grant_tx_ref[VAR_13] = VAR_14;
  VAR_5->offset = VAR_11;
  VAR_5->size = VAR_12;
  VAR_5->flags = 0;
 }


 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
  skb_frag_t *VAR_16 = FUNC_11(VAR_3)->frags + VAR_15;

  VAR_5->flags |= VAR_1;

  VAR_13 = FUNC_2(&VAR_6->tx_skb_freelist, VAR_6->tx_skbs);
  VAR_6->tx_skbs[VAR_13].skb = FUNC_9(VAR_3);
  VAR_5 = FUNC_1(&VAR_6->tx, VAR_9++);
  VAR_5->id = VAR_13;
  VAR_14 = FUNC_3(&VAR_6->gref_tx_head);
  FUNC_0((signed short)VAR_14 < 0);

  VAR_8 = FUNC_8(FUNC_7(VAR_16->page));
  FUNC_4(VAR_14, VAR_6->xbdev->otherend_id,
      VAR_8, VAR_0);

  VAR_5->gref = VAR_6->grant_tx_ref[VAR_13] = VAR_14;
  VAR_5->offset = VAR_16->page_offset;
  VAR_5->size = VAR_16->size;
  VAR_5->flags = 0;
 }

 VAR_6->tx.req_prod_pvt = VAR_9;
}
