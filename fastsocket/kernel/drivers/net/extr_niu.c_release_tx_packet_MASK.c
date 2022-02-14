
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct tx_ring_info {struct tx_buff_info* tx_buffs; int mark_pending; int * descr; int tx_bytes; int tx_packets; } ;
struct tx_pkt_hdr {int flags; } ;
struct tx_buff_info {int mapping; struct sk_buff* skb; } ;
struct sk_buff {scalar_t__ data; } ;
struct niu {int device; TYPE_1__* ops; } ;
struct TYPE_6__ {int nr_frags; TYPE_2__* frags; } ;
struct TYPE_5__ {int size; } ;
struct TYPE_4__ {int (* unmap_page ) (int ,int ,int ,int ) ;int (* unmap_single ) (int ,int ,int,int ) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct tx_ring_info*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*) ;
 TYPE_3__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int ,int,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct niu *VAR_6, struct tx_ring_info *VAR_7, int VAR_8)
{
 struct tx_buff_info *VAR_9 = &VAR_7->tx_buffs[VAR_8];
 struct sk_buff *VAR_10 = VAR_9->skb;
 struct tx_pkt_hdr *VAR_11;
 u64 VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = (struct tx_pkt_hdr *) VAR_10->data;
 VAR_12 = FUNC_4(&VAR_11->flags);

 VAR_7->tx_packets++;
 VAR_7->tx_bytes += (((VAR_12 & VAR_2) >> VAR_3) -
    ((VAR_12 & VAR_4) / 2));

 VAR_14 = FUNC_5(VAR_10);
 VAR_6->ops->unmap_single(VAR_6->device, VAR_9->mapping,
         VAR_14, VAR_0);

 if (FUNC_3(VAR_7->descr[VAR_8]) & VAR_5)
  VAR_7->mark_pending--;

 VAR_9->skb = ((void*)0);
 do {
  VAR_8 = FUNC_1(VAR_7, VAR_8);
  VAR_14 -= VAR_1;
 } while (VAR_14 > 0);

 for (VAR_13 = 0; VAR_13 < FUNC_6(VAR_10)->nr_frags; VAR_13++) {
  VAR_9 = &VAR_7->tx_buffs[VAR_8];
  FUNC_0(VAR_9->skb != ((void*)0));
  VAR_6->ops->unmap_page(VAR_6->device, VAR_9->mapping,
        FUNC_6(VAR_10)->frags[VAR_13].size,
        VAR_0);
  VAR_8 = FUNC_1(VAR_7, VAR_8);
 }

 FUNC_2(VAR_10);

 return VAR_8;
}
