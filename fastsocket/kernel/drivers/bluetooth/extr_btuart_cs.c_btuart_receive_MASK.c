
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


struct hci_sco_hdr {int dlen; } ;
struct hci_event_hdr {scalar_t__ plen; } ;
struct hci_acl_hdr {int dlen; } ;
struct TYPE_21__ {int rx_state; scalar_t__ rx_count; TYPE_6__* rx_skb; TYPE_4__* hdev; TYPE_2__* p_dev; } ;
typedef TYPE_5__ btuart_info_t ;
struct TYPE_22__ {void* dev; } ;
struct TYPE_19__ {int err_rx; int byte_rx; } ;
struct TYPE_20__ {int flags; TYPE_3__ stat; } ;
struct TYPE_17__ {unsigned int BasePort1; } ;
struct TYPE_18__ {TYPE_1__ io; } ;
struct TYPE_16__ {int pkt_type; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;

 scalar_t__ VAR_5 ;



 int VAR_6 ;

 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ) ;
 TYPE_14__* FUNC_2 (TYPE_6__*) ;
 TYPE_6__* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 struct hci_acl_hdr* FUNC_5 (TYPE_6__*) ;
 struct hci_event_hdr* FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 struct hci_sco_hdr* FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_6__*) ;
 int* FUNC_11 (TYPE_6__*,int) ;

__attribute__((used)) static void FUNC_12(btuart_info_t *VAR_10)
{
 unsigned int VAR_11;
 int VAR_12 = 0;

 if (!VAR_10) {
  FUNC_0("Unknown device");
  return;
 }

 VAR_11 = VAR_10->p_dev->io.BasePort1;

 do {
  VAR_10->hdev->stat.byte_rx++;


  if (VAR_10->rx_skb == ((void*)0)) {
   VAR_10->rx_state = VAR_6;
   VAR_10->rx_count = 0;
   if (!(VAR_10->rx_skb = FUNC_3(VAR_3, VAR_0))) {
    FUNC_0("Can't allocate mem for new packet");
    return;
   }
  }

  if (VAR_10->rx_state == VAR_6) {

   VAR_10->rx_skb->dev = (void *) VAR_10->hdev;
   FUNC_2(VAR_10->rx_skb)->pkt_type = FUNC_9(VAR_11 + VAR_9);

   switch (FUNC_2(VAR_10->rx_skb)->pkt_type) {

   case 133:
    VAR_10->rx_state = 129;
    VAR_10->rx_count = VAR_2;
    break;

   case 134:
    VAR_10->rx_state = 131;
    VAR_10->rx_count = VAR_1;
    break;

   case 132:
    VAR_10->rx_state = 128;
    VAR_10->rx_count = VAR_5;
    break;

   default:

    FUNC_0("Unknown HCI packet with type 0x%02x received", FUNC_2(VAR_10->rx_skb)->pkt_type);
    VAR_10->hdev->stat.err_rx++;
    FUNC_4(VAR_4, &(VAR_10->hdev->flags));

    FUNC_10(VAR_10->rx_skb);
    VAR_10->rx_skb = ((void*)0);
    break;

   }

  } else {

   *FUNC_11(VAR_10->rx_skb, 1) = FUNC_9(VAR_11 + VAR_9);
   VAR_10->rx_count--;

   if (VAR_10->rx_count == 0) {

    int VAR_13;
    struct hci_event_hdr *VAR_14;
    struct hci_acl_hdr *VAR_15;
    struct hci_sco_hdr *VAR_16;


    switch (VAR_10->rx_state) {

    case 129:
     VAR_14 = FUNC_6(VAR_10->rx_skb);
     VAR_10->rx_state = 130;
     VAR_10->rx_count = VAR_14->plen;
     break;

    case 131:
     VAR_15 = FUNC_5(VAR_10->rx_skb);
     VAR_13 = FUNC_1(VAR_15->dlen);
     VAR_10->rx_state = 130;
     VAR_10->rx_count = VAR_13;
     break;

    case 128:
     VAR_16 = FUNC_8(VAR_10->rx_skb);
     VAR_10->rx_state = 130;
     VAR_10->rx_count = VAR_16->dlen;
     break;

    case 130:
     FUNC_7(VAR_10->rx_skb);
     VAR_10->rx_skb = ((void*)0);
     break;

    }

   }

  }


  if (VAR_12++ > 16)
   break;

 } while (FUNC_9(VAR_11 + VAR_7) & VAR_8);
}
