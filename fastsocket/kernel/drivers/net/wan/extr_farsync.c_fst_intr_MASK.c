
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fst_port_info {int index; int run; } ;
struct fst_card_info {scalar_t__ state; scalar_t__ family; int card_no; struct fst_port_info* ports; scalar_t__ dmatx_in_progress; int dma_txpos; int dma_len_tx; int dma_port_tx; scalar_t__ pci_conf; scalar_t__ dmarx_in_progress; int dma_rxpos; int dma_skb_rx; int dma_len_rx; int dma_port_rx; int irq; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int rdindex; int * evntbuff; int wrindex; } ;
struct TYPE_4__ {int tx_fifo_errors; int tx_errors; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct fst_card_info*,int ) ;
 unsigned int FUNC_1 (struct fst_card_info*,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (struct fst_card_info*,int ,int) ;
 int FUNC_3 (struct fst_card_info*,int ,int ) ;


 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;





 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct fst_card_info*) ;
 int VAR_16 ;
 int FUNC_6 (struct fst_card_info*,struct fst_port_info*) ;
 int FUNC_7 (struct fst_card_info*,struct fst_port_info*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct fst_card_info*,int ,int ,int ,int ) ;
 int FUNC_10 (struct fst_card_info*,int ,int ,int ) ;
 int VAR_17 ;
 unsigned int FUNC_11 (scalar_t__) ;
 TYPE_3__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_12 (int,scalar_t__) ;
 TYPE_2__* FUNC_13 (struct fst_port_info*) ;
 int FUNC_14 (char*,int,...) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_16(int VAR_21, void *VAR_22)
{
 struct fst_card_info *VAR_23 = VAR_22;
 struct fst_port_info *VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 unsigned int VAR_28 = 0;
 unsigned int VAR_29;
 unsigned int VAR_30;






 FUNC_4(VAR_2, "intr: %d %p\n", VAR_23->irq, VAR_23);
 if (VAR_23->state != VAR_10) {
  FUNC_14
      ("Interrupt received for card %d in a non running state (%d)\n",
       VAR_23->card_no, VAR_23->state);






  FUNC_5(VAR_23);
  return VAR_14;
 }


 FUNC_5(VAR_23);




 VAR_29 = 0;
 if (FUNC_0(VAR_23, VAR_19) == 1) {
  VAR_29 += VAR_7;

  FUNC_2(VAR_23, VAR_19, 0xEE);
 }
 if (VAR_23->family == VAR_8) {



  VAR_28 = FUNC_11(VAR_23->pci_conf + VAR_13);
  if (VAR_28 & 0x00200000) {



   FUNC_4(VAR_3, "DMA Rx xfer complete\n");
   FUNC_12(0x8, VAR_23->pci_conf + VAR_5);
   FUNC_9(VAR_23, VAR_23->dma_port_rx,
         VAR_23->dma_len_rx, VAR_23->dma_skb_rx,
         VAR_23->dma_rxpos);
   VAR_23->dmarx_in_progress = 0;
   VAR_29 += VAR_11;
  }
  if (VAR_28 & 0x00400000) {



   FUNC_4(VAR_4, "DMA Tx xfer complete\n");
   FUNC_12(0x8, VAR_23->pci_conf + VAR_6);
   FUNC_10(VAR_23, VAR_23->dma_port_tx,
         VAR_23->dma_len_tx, VAR_23->dma_txpos);
   VAR_23->dmatx_in_progress = 0;
   VAR_29 += VAR_12;
  }
 }




 VAR_30 = FUNC_1(VAR_23, VAR_20);
 if (VAR_30) {
  FUNC_4(VAR_0, "Card %d int_retry_count is  %d\n",
      VAR_23->card_no, VAR_30);
  FUNC_3(VAR_23, VAR_20, 0);
 }

 if (!VAR_29) {
  return VAR_14;
 }


 FUNC_8(&VAR_17, VAR_23->card_no);
 FUNC_15(&VAR_16);


 VAR_25 = FUNC_0(VAR_23, VAR_18.rdindex) & 0x1f;
 VAR_26 = FUNC_0(VAR_23, VAR_18.wrindex) & 0x1f;
 while (VAR_25 != VAR_26) {
  VAR_27 = FUNC_0(VAR_23, VAR_18.evntbuff[VAR_25]);
  VAR_24 = &VAR_23->ports[VAR_27 & 0x03];

  FUNC_4(VAR_2, "Processing Interrupt event: %x\n", VAR_27);

  switch (VAR_27) {
  case 132:
   FUNC_4(VAR_2, "TE1 Alarm intr\n");
   if (VAR_24->run)
    FUNC_7(VAR_23, VAR_24);
   break;

  case 138:
  case 137:
  case 136:
  case 135:
   if (VAR_24->run)
    FUNC_6(VAR_23, VAR_24);
   break;

  case 142:
  case 141:
  case 140:
  case 139:
   FUNC_4(VAR_4, "Abort complete port %d\n", VAR_24->index);
   break;

  case 131:
  case 130:
  case 129:
  case 128:



   FUNC_4(VAR_4, "Tx underflow port %d\n", VAR_24->index);
   FUNC_13(VAR_24)->stats.tx_errors++;
   FUNC_13(VAR_24)->stats.tx_fifo_errors++;
   FUNC_4(VAR_0, "Tx underflow on card %d port %d\n",
       VAR_23->card_no, VAR_24->index);
   break;

  case 134:
   FUNC_4(VAR_1, "Card init OK intr\n");
   break;

  case 133:
   FUNC_4(VAR_1, "Card init FAILED intr\n");
   VAR_23->state = VAR_9;
   break;

  default:
   FUNC_14("intr: unknown card event %d. ignored\n",
       VAR_27);
   break;
  }


  if (++VAR_25 >= VAR_15)
   VAR_25 = 0;
 }
 FUNC_2(VAR_23, VAR_18.rdindex, VAR_25);
        return VAR_14;
}
