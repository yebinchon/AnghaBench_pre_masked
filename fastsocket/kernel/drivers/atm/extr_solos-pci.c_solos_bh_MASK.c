
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct solos_card {int nr_ports; int buffer_size; scalar_t__ config_regs; int tlet; TYPE_2__* dev; struct sk_buff** rx_skb; scalar_t__* atmdev; scalar_t__ using_dma; int cli_queue_lock; int * cli_queue; } ;
struct sk_buff {scalar_t__ data; int len; int truesize; } ;
struct pkt_hdr {int vpi; int vci; int type; int size; } ;
struct atm_vcc {TYPE_1__* stats; int (* push ) (struct atm_vcc*,struct sk_buff*) ;} ;
struct TYPE_7__ {int dma_addr; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int rx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ FUNC_0 (struct solos_card*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 TYPE_4__* FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int,int ) ;
 int FUNC_4 (struct atm_vcc*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int,...) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *,char*,...) ;
 struct atm_vcc* FUNC_9 (scalar_t__,int,int) ;
 int FUNC_10 (struct solos_card*) ;
 int FUNC_11 (int,scalar_t__) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct pkt_hdr*,scalar_t__,int) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (TYPE_2__*,scalar_t__,int,int ) ;
 int FUNC_16 (TYPE_2__*,int,int,int ) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct solos_card*,int,struct sk_buff*) ;
 int FUNC_19 (struct solos_card*,int,struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*,int) ;
 struct pkt_hdr* FUNC_21 (struct sk_buff*,int) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,struct sk_buff*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_27 (int *) ;

void FUNC_28(unsigned long VAR_5)
{
 struct solos_card *VAR_6 = (void *)VAR_5;
 uint32_t VAR_7;
 uint32_t VAR_8 = 0;
 int VAR_9;






 VAR_7 = FUNC_10(VAR_6);

 for (VAR_9 = 0; VAR_9 < VAR_6->nr_ports; VAR_9++) {
  if (VAR_7 & (0x10 << VAR_9)) {
   struct pkt_hdr VAR_10, *VAR_11;
   struct sk_buff *VAR_12;
   struct atm_vcc *VAR_13;
   int VAR_14;

   if (VAR_6->using_dma) {
    VAR_12 = VAR_6->rx_skb[VAR_9];
    VAR_6->rx_skb[VAR_9] = ((void*)0);

    FUNC_16(VAR_6->dev, FUNC_2(VAR_12)->dma_addr,
       VAR_3, VAR_2);

    VAR_11 = (void *)VAR_12->data;
    VAR_14 = FUNC_12(VAR_11->size);
    FUNC_21(VAR_12, VAR_14 + sizeof(*VAR_11));
    FUNC_20(VAR_12, sizeof(*VAR_11));
   } else {
    VAR_11 = &VAR_10;

    VAR_8 |= 0x10 << VAR_9;

    FUNC_13(VAR_11, FUNC_0(VAR_6, VAR_9), sizeof(*VAR_11));

    VAR_14 = FUNC_12(VAR_11->size);
    if (VAR_14 > (VAR_6->buffer_size - sizeof(*VAR_11))){
     FUNC_8(&VAR_6->dev->dev, "Invalid buffer size\n");
     continue;
    }

    VAR_12 = FUNC_3(VAR_14 + 1, VAR_1);
    if (!VAR_12) {
     if (FUNC_14())
      FUNC_8(&VAR_6->dev->dev, "Failed to allocate sk_buff for RX\n");
     continue;
    }

    FUNC_13(FUNC_21(VAR_12, VAR_14),
           FUNC_0(VAR_6, VAR_9) + sizeof(*VAR_11),
           VAR_14);
   }
   if (VAR_4) {
    FUNC_6(&VAR_6->dev->dev, "Received: device %d\n", VAR_9);
    FUNC_6(&VAR_6->dev->dev, "size: %d VPI: %d VCI: %d\n",
      VAR_14, FUNC_12(VAR_11->vpi),
      FUNC_12(VAR_11->vci));
    FUNC_17(VAR_12);
   }

   switch (FUNC_12(VAR_11->type)) {
   case 129:
    VAR_13 = FUNC_9(VAR_6->atmdev[VAR_9], FUNC_12(VAR_11->vpi),
            FUNC_12(VAR_11->vci));
    if (!VAR_13) {
     if (FUNC_14())
      FUNC_8(&VAR_6->dev->dev, "Received packet for unknown VCI.VPI %d.%d on port %d\n",
        FUNC_12(VAR_11->vci), FUNC_12(VAR_11->vpi),
        VAR_9);
     continue;
    }
    FUNC_4(VAR_13, VAR_12->truesize);
    VAR_13->push(VAR_13, VAR_12);
    FUNC_5(&VAR_13->stats->rx);
    break;

   case 128:
    if (FUNC_19(VAR_6, VAR_9, VAR_12) &&
        FUNC_14()) {
     FUNC_8(&VAR_6->dev->dev, "Bad status packet of %d bytes on port %d:\n", VAR_12->len, VAR_9);
     FUNC_17(VAR_12);
    }
    FUNC_7(VAR_12);
    break;

   case 130:
   default:
    if (FUNC_18(VAR_6, VAR_9, VAR_12))
     break;
    FUNC_24(&VAR_6->cli_queue_lock);
    if (FUNC_22(&VAR_6->cli_queue[VAR_9]) > 10) {
     if (FUNC_14())
      FUNC_8(&VAR_6->dev->dev, "Dropping console response on port %d\n",
        VAR_9);
     FUNC_7(VAR_12);
    } else
     FUNC_23(&VAR_6->cli_queue[VAR_9], VAR_12);
    FUNC_25(&VAR_6->cli_queue_lock);
    break;
   }
  }

  if (VAR_6->using_dma && VAR_6->atmdev[VAR_9] &&
      !VAR_6->rx_skb[VAR_9]) {
   struct sk_buff *VAR_15 = FUNC_3(VAR_3, VAR_1);
   if (VAR_15) {
    FUNC_2(VAR_15)->dma_addr =
     FUNC_15(VAR_6->dev, VAR_15->data,
             VAR_3, VAR_2);
    FUNC_11(FUNC_2(VAR_15)->dma_addr,
       VAR_6->config_regs + FUNC_1(VAR_9));
    VAR_6->rx_skb[VAR_9] = VAR_15;
   } else {
    if (FUNC_14())
     FUNC_8(&VAR_6->dev->dev, "Failed to allocate RX skb");


    FUNC_27(&VAR_6->tlet);
   }
  }
 }
 if (VAR_8)
  FUNC_11(VAR_8, VAR_6->config_regs + VAR_0);

 return;
}
