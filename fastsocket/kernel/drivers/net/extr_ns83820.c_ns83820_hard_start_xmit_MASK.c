
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ ip_summed; unsigned int len; int data; scalar_t__ data_len; } ;
struct ns83820 {int CFG_cache; int tx_free_idx; unsigned int tx_done_idx; int tx_intr_idx; int tx_phy_descs; int tx_lock; int nr_tx_skbs; struct sk_buff** tx_skbs; int pci_dev; int * tx_descs; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {unsigned int size; int page_offset; int page; } ;
typedef TYPE_1__ skb_frag_t ;
typedef int netdev_tx_t ;
typedef scalar_t__ dma_addr_t ;
typedef int __le32 ;
struct TYPE_6__ {scalar_t__ protocol; } ;
struct TYPE_5__ {int nr_frags; TYPE_1__* frags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 struct ns83820* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int volatile FUNC_2 (int) ;
 int FUNC_3 (int volatile*,scalar_t__) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (short) ;
 TYPE_3__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct ns83820*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_12 (int ,int ,unsigned int,int ) ;
 TYPE_2__* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (struct ns83820*) ;
 scalar_t__ FUNC_17 (int) ;
 short FUNC_18 (struct sk_buff*) ;
 scalar_t__ FUNC_19 (struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_20(struct sk_buff *VAR_21,
        struct net_device *VAR_22)
{
 struct ns83820 *VAR_23 = FUNC_0(VAR_22);
 u32 VAR_24, VAR_25, VAR_26;
 int VAR_27, VAR_28;
 unsigned VAR_29, VAR_30;
 dma_addr_t VAR_31;
 unsigned VAR_32;
 skb_frag_t *VAR_33;
 int VAR_34 = 0;
 int VAR_35 = 0;
 volatile __le32 *VAR_36;

 FUNC_4("ns83820_hard_start_xmit\n");

 VAR_28 = FUNC_13(VAR_21)->nr_frags;
again:
 if (FUNC_17(VAR_23->CFG_cache & VAR_0)) {
  FUNC_9(VAR_22);
  if (FUNC_17(VAR_23->CFG_cache & VAR_0))
   return VAR_17;
  FUNC_8(VAR_22);
 }

 VAR_30 = VAR_24 = VAR_23->tx_free_idx;
 VAR_29 = VAR_23->tx_done_idx;
 VAR_27 = (VAR_29 + VAR_19-2 - VAR_24) % VAR_19;
 VAR_27 -= 1;
 if (VAR_27 <= VAR_28) {
  FUNC_4("stop_queue - not enough(%p)\n", VAR_22);
  FUNC_9(VAR_22);


  if (VAR_23->tx_done_idx != VAR_29) {
   FUNC_4("restart queue(%p)\n", VAR_22);
   FUNC_8(VAR_22);
   goto again;
  }
  return VAR_17;
 }

 if (VAR_24 == VAR_23->tx_intr_idx) {
  VAR_35 = 1;
  VAR_23->tx_intr_idx = (VAR_23->tx_intr_idx + VAR_19/4) % VAR_19;
 }

 VAR_27 -= VAR_28;
 if (VAR_27 < VAR_16) {
  FUNC_4("stop_queue - last entry(%p)\n", VAR_22);
  FUNC_9(VAR_22);
  VAR_34 = 1;
 }

 VAR_33 = FUNC_13(VAR_21)->frags;
 if (!VAR_28)
  VAR_33 = ((void*)0);
 VAR_26 = 0;
 if (VAR_21->ip_summed == VAR_1) {
  VAR_26 |= VAR_10;
  if (VAR_14 == FUNC_6(VAR_21)->protocol)
   VAR_26 |= VAR_11;
  else if (VAR_15 == FUNC_6(VAR_21)->protocol)
   VAR_26 |= VAR_12;
 }
 VAR_32 = VAR_21->len;
 if (VAR_28)
  VAR_32 -= VAR_21->data_len;
 VAR_31 = FUNC_12(VAR_23->pci_dev, VAR_21->data, VAR_32, VAR_20);

 VAR_36 = VAR_23->tx_descs + (VAR_24 * VAR_9);

 for (;;) {
  volatile __le32 *VAR_37 = VAR_23->tx_descs + (VAR_24 * VAR_9);

  FUNC_4("frag[%3u]: %4u @ 0x%08Lx\n", VAR_24, VAR_32,
   (unsigned long long)VAR_31);
  VAR_30 = VAR_24;
  VAR_24 = (VAR_24 + 1) % VAR_19;
  VAR_37[VAR_8] = FUNC_2(VAR_23->tx_phy_descs + (VAR_24 * VAR_9 * 4));
  FUNC_3(VAR_37 + VAR_5, VAR_31);
  VAR_37[VAR_7] = FUNC_2(VAR_26);

  VAR_25 = ((VAR_28) ? VAR_3 : VAR_35 ? VAR_2 : 0);
  VAR_25 |= (VAR_37 == VAR_36) ? 0 : VAR_4;
  VAR_25 |= VAR_32;
  VAR_37[VAR_6] = FUNC_2(VAR_25);

  if (!VAR_28)
   break;

  VAR_31 = FUNC_11(VAR_23->pci_dev, VAR_33->page,
       VAR_33->page_offset,
       VAR_33->size, VAR_20);
  FUNC_4("frag: buf=%08Lx  page=%08lx offset=%08lx\n",
   (long long)VAR_31, (long) FUNC_10(VAR_33->page),
   VAR_33->page_offset);
  VAR_32 = VAR_33->size;
  VAR_33++;
  VAR_28--;
 }
 FUNC_4("done pkt\n");

 FUNC_14(&VAR_23->tx_lock);
 VAR_23->tx_skbs[VAR_30] = VAR_21;
 VAR_36[VAR_6] |= FUNC_2(VAR_4);
 VAR_23->tx_free_idx = VAR_24;
 FUNC_1(&VAR_23->nr_tx_skbs);
 FUNC_15(&VAR_23->tx_lock);

 FUNC_7(VAR_23);


 if (VAR_34 && (VAR_23->tx_done_idx != VAR_29) && FUNC_16(VAR_23))
  FUNC_8(VAR_22);

 return VAR_18;
}
