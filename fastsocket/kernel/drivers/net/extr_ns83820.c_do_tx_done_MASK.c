
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; int tx_errors; } ;
struct ns83820 {int tx_done_idx; int tx_free_idx; int * tx_descs; int pci_dev; int nr_tx_skbs; struct sk_buff** tx_skbs; TYPE_1__ stats; } ;
typedef struct sk_buff net_device ;
typedef int dma_addr_t ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ns83820* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int ,int ,unsigned int,int ) ;
 int FUNC_12 (int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_13 (struct ns83820*) ;

__attribute__((used)) static void FUNC_14(struct net_device *VAR_9)
{
 struct ns83820 *VAR_10 = FUNC_0(VAR_9);
 u32 VAR_11, VAR_12;
 __le32 *VAR_13;

 FUNC_5("do_tx_done(%p)\n", VAR_9);
 VAR_12 = VAR_10->tx_done_idx;
 VAR_13 = VAR_10->tx_descs + (VAR_12 * VAR_6);

 FUNC_5("tx_done_idx=%d free_idx=%d cmdsts=%08x\n",
  VAR_12, VAR_10->tx_free_idx, FUNC_6(VAR_13[VAR_5]));
 while ((VAR_12 != VAR_10->tx_free_idx) &&
        !(VAR_3 & (VAR_11 = FUNC_6(VAR_13[VAR_5]))) ) {
  struct sk_buff *VAR_14;
  unsigned VAR_15;
  dma_addr_t VAR_16;

  if (VAR_11 & VAR_0)
   VAR_10->stats.tx_errors ++;
  if (VAR_11 & VAR_2)
   VAR_10->stats.tx_packets ++;
  if (VAR_11 & VAR_2)
   VAR_10->stats.tx_bytes += VAR_11 & 0xffff;

  FUNC_5("tx_done_idx=%d free_idx=%d cmdsts=%08x\n",
   VAR_12, VAR_10->tx_free_idx, VAR_11);
  VAR_14 = VAR_10->tx_skbs[VAR_12];
  VAR_10->tx_skbs[VAR_12] = ((void*)0);
  FUNC_5("done(%p)\n", VAR_14);

  VAR_15 = VAR_11 & VAR_1;
  VAR_16 = FUNC_3(VAR_13 + VAR_4);
  if (VAR_14) {
   FUNC_12(VAR_10->pci_dev,
     VAR_16,
     VAR_15,
     VAR_8);
   FUNC_4(VAR_14);
   FUNC_1(&VAR_10->nr_tx_skbs);
  } else
   FUNC_11(VAR_10->pci_dev,
     VAR_16,
     VAR_15,
     VAR_8);

  VAR_12 = (VAR_12 + 1) % VAR_7;
  VAR_10->tx_done_idx = VAR_12;
  VAR_13[VAR_5] = FUNC_2(0);
  FUNC_7();
  VAR_13 = VAR_10->tx_descs + (VAR_12 * VAR_6);
 }




 if (FUNC_8(VAR_9) && FUNC_13(VAR_10)) {
  FUNC_5("start_queue(%p)\n", VAR_9);
  FUNC_9(VAR_9);
  FUNC_10(VAR_9);
 }
}
