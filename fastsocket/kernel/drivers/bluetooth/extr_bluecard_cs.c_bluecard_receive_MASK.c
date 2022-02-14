
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;


struct hci_sco_hdr {int dlen; } ;
struct hci_event_hdr {scalar_t__ plen; } ;
struct hci_acl_hdr {int dlen; } ;
typedef int buf ;
struct TYPE_23__ {int rx_state; scalar_t__ rx_count; TYPE_4__* hdev; TYPE_6__* rx_skb; int tx_state; TYPE_2__* p_dev; } ;
typedef TYPE_5__ bluecard_info_t ;
struct TYPE_24__ {void* dev; } ;
struct TYPE_21__ {int byte_rx; int err_rx; } ;
struct TYPE_22__ {TYPE_3__ stat; } ;
struct TYPE_19__ {unsigned int BasePort1; } ;
struct TYPE_20__ {TYPE_1__ io; } ;
struct TYPE_18__ {unsigned char pkt_type; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 int VAR_3 ;

 scalar_t__ VAR_4 ;



 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (unsigned int,unsigned int,unsigned char*,int) ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_13__* FUNC_5 (TYPE_6__*) ;
 TYPE_6__* FUNC_6 (int ,int ) ;
 struct hci_acl_hdr* FUNC_7 (TYPE_6__*) ;
 struct hci_event_hdr* FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*) ;
 struct hci_sco_hdr* FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (int ,int *) ;
 unsigned char* FUNC_13 (TYPE_6__*,int) ;
 scalar_t__ FUNC_14 (int ,int *) ;

__attribute__((used)) static void FUNC_15(bluecard_info_t *VAR_9, unsigned int VAR_10)
{
 unsigned int VAR_11;
 unsigned char VAR_12[31];
 int VAR_13, VAR_14;

 if (!VAR_9) {
  FUNC_0("Unknown device");
  return;
 }

 VAR_11 = VAR_9->p_dev->io.BasePort1;

 if (FUNC_14(VAR_8, &(VAR_9->tx_state)))
  FUNC_2(VAR_9);

 VAR_14 = FUNC_3(VAR_11, VAR_10, VAR_12, sizeof(VAR_12));

 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {


  if (VAR_9->rx_skb == ((void*)0)) {
   VAR_9->rx_state = VAR_5;
   VAR_9->rx_count = 0;
   if (!(VAR_9->rx_skb = FUNC_6(VAR_3, VAR_0))) {
    FUNC_0("Can't allocate mem for new packet");
    return;
   }
  }

  if (VAR_9->rx_state == VAR_5) {

   VAR_9->rx_skb->dev = (void *) VAR_9->hdev;
   FUNC_5(VAR_9->rx_skb)->pkt_type = VAR_12[VAR_13];

   switch (FUNC_5(VAR_9->rx_skb)->pkt_type) {

   case 0x00:

    if (VAR_10 != 0x00) {
     FUNC_12(VAR_6, &(VAR_9->tx_state));
     FUNC_12(VAR_7, &(VAR_9->tx_state));
     FUNC_12(VAR_8, &(VAR_9->tx_state));
     FUNC_4(VAR_9);
    }

    FUNC_11(VAR_9->rx_skb);
    VAR_9->rx_skb = ((void*)0);
    break;

   case 133:
    VAR_9->rx_state = 129;
    VAR_9->rx_count = VAR_2;
    break;

   case 134:
    VAR_9->rx_state = 131;
    VAR_9->rx_count = VAR_1;
    break;

   case 132:
    VAR_9->rx_state = 128;
    VAR_9->rx_count = VAR_4;
    break;

   default:

    FUNC_0("Unknown HCI packet with type 0x%02x received", FUNC_5(VAR_9->rx_skb)->pkt_type);
    VAR_9->hdev->stat.err_rx++;

    FUNC_11(VAR_9->rx_skb);
    VAR_9->rx_skb = ((void*)0);
    break;

   }

  } else {

   *FUNC_13(VAR_9->rx_skb, 1) = VAR_12[VAR_13];
   VAR_9->rx_count--;

   if (VAR_9->rx_count == 0) {

    int VAR_15;
    struct hci_event_hdr *VAR_16;
    struct hci_acl_hdr *VAR_17;
    struct hci_sco_hdr *VAR_18;

    switch (VAR_9->rx_state) {

    case 129:
     VAR_16 = FUNC_8(VAR_9->rx_skb);
     VAR_9->rx_state = 130;
     VAR_9->rx_count = VAR_16->plen;
     break;

    case 131:
     VAR_17 = FUNC_7(VAR_9->rx_skb);
     VAR_15 = FUNC_1(VAR_17->dlen);
     VAR_9->rx_state = 130;
     VAR_9->rx_count = VAR_15;
     break;

    case 128:
     VAR_18 = FUNC_10(VAR_9->rx_skb);
     VAR_9->rx_state = 130;
     VAR_9->rx_count = VAR_18->dlen;
     break;

    case 130:
     FUNC_9(VAR_9->rx_skb);
     VAR_9->rx_skb = ((void*)0);
     break;

    }

   }

  }


 }

 VAR_9->hdev->stat.byte_rx += VAR_14;
}
