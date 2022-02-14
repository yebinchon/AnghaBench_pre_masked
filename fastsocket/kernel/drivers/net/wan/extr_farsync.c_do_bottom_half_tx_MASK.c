
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_3__ {int tx_bytes; int tx_packets; } ;
struct net_device {int trans_start; TYPE_1__ stats; } ;
struct fst_port_info {size_t txpos; int txqe; size_t txqs; scalar_t__ start; struct sk_buff** txq; int run; } ;
struct fst_card_info {int nports; scalar_t__ family; scalar_t__ dma_len_tx; size_t dma_txpos; scalar_t__ tx_dma_handle_card; struct fst_port_info* dma_port_tx; int tx_dma_handle_host; scalar_t__ mem; int card_lock; int dmatx_in_progress; struct fst_port_info* ports; } ;
struct TYPE_4__ {int bits; int bcnt; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct fst_card_info*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct fst_card_info*,int ,int) ;
 int FUNC_3 (struct fst_card_info*,int ,int ) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct fst_card_info*,char*,char*,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (scalar_t__,int ,scalar_t__) ;
 int FUNC_10 (struct net_device*) ;
 struct net_device* FUNC_11 (struct fst_port_info*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int *** VAR_10 ;
 TYPE_2__** VAR_11 ;

__attribute__((used)) static void
FUNC_14(struct fst_card_info *VAR_12)
{
 struct fst_port_info *VAR_13;
 int VAR_14;
 int VAR_15;
 struct sk_buff *VAR_16;
 unsigned long VAR_17;
 struct net_device *VAR_18;






 FUNC_5(VAR_0, "do_bottom_half_tx\n");
 for (VAR_14 = 0, VAR_13 = VAR_12->ports; VAR_14 < VAR_12->nports; VAR_14++, VAR_13++) {
  if (!VAR_13->run)
   continue;

  VAR_18 = FUNC_11(VAR_13);
  while (!(FUNC_1(VAR_12, VAR_11[VAR_14][VAR_13->txpos].bits) &
    VAR_1)
         && !(VAR_12->dmatx_in_progress)) {





   FUNC_12(&VAR_12->card_lock, VAR_17);
   if ((VAR_15 = VAR_13->txqe - VAR_13->txqs) < 0) {




    VAR_15 = VAR_15 + VAR_4;
   }
   FUNC_13(&VAR_12->card_lock, VAR_17);
   if (VAR_15 > 0) {



    FUNC_12(&VAR_12->card_lock, VAR_17);
    VAR_16 = VAR_13->txq[VAR_13->txqs];
    VAR_13->txqs++;
    if (VAR_13->txqs == VAR_4) {
     VAR_13->txqs = 0;
    }
    FUNC_13(&VAR_12->card_lock, VAR_17);




    FUNC_3(VAR_12, VAR_11[VAR_14][VAR_13->txpos].bcnt,
     FUNC_4(VAR_16->len));
    if ((VAR_16->len < VAR_3)
        || (VAR_12->family == VAR_2)) {

     FUNC_9(VAR_12->mem +
          FUNC_0(VAR_10[VAR_14]
              [VAR_13->
        txpos][0]),
          VAR_16->data, VAR_16->len);
     FUNC_2(VAR_12,
      VAR_11[VAR_14][VAR_13->txpos].
      bits,
      VAR_1 | VAR_7 | VAR_6);
     VAR_18->stats.tx_packets++;
     VAR_18->stats.tx_bytes += VAR_16->len;
     VAR_18->trans_start = VAR_9;
    } else {

     FUNC_8(VAR_12->tx_dma_handle_host,
            VAR_16->data, VAR_16->len);
     VAR_12->dma_port_tx = VAR_13;
     VAR_12->dma_len_tx = VAR_16->len;
     VAR_12->dma_txpos = VAR_13->txpos;
     FUNC_7(VAR_12,
         (char *) VAR_12->
         tx_dma_handle_card,
         (char *)
         FUNC_0(VAR_10[VAR_14]
             [VAR_13->txpos][0]),
         VAR_16->len);
    }
    if (++VAR_13->txpos >= VAR_5)
     VAR_13->txpos = 0;



    if (VAR_13->start) {
     if (VAR_15 < VAR_8) {
      FUNC_10(FUNC_11
         (VAR_13));
      VAR_13->start = 0;
     }
    }
    FUNC_6(VAR_16);
   } else {



    break;
   }
  }
 }
}
