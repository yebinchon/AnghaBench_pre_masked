
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
typedef struct TYPE_16__ TYPE_13__ ;


struct hci_sco_hdr {int dlen; } ;
struct hci_event_hdr {scalar_t__ plen; } ;
struct hci_acl_hdr {int dlen; } ;
struct TYPE_21__ {int rx_state; scalar_t__ rx_count; TYPE_6__* rx_skb; TYPE_4__* hdev; TYPE_2__* p_dev; } ;
typedef TYPE_5__ bt3c_info_t ;
typedef void* __u8 ;
struct TYPE_22__ {void* dev; } ;
struct TYPE_19__ {int err_rx; int byte_rx; } ;
struct TYPE_20__ {int flags; TYPE_3__ stat; } ;
struct TYPE_17__ {unsigned int BasePort1; } ;
struct TYPE_18__ {TYPE_1__ io; } ;
struct TYPE_16__ {int pkt_type; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;

 scalar_t__ VAR_7 ;



 int VAR_8 ;

 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (unsigned int,int,int) ;
 int FUNC_4 (unsigned int,int) ;
 TYPE_13__* FUNC_5 (TYPE_6__*) ;
 TYPE_6__* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *) ;
 struct hci_acl_hdr* FUNC_8 (TYPE_6__*) ;
 struct hci_event_hdr* FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_6__*) ;
 struct hci_sco_hdr* FUNC_11 (TYPE_6__*) ;
 void* FUNC_12 (scalar_t__) ;
 int FUNC_13 (TYPE_6__*) ;
 void** FUNC_14 (TYPE_6__*,int) ;

__attribute__((used)) static void FUNC_15(bt3c_info_t *VAR_9)
{
 unsigned int VAR_10;
 int VAR_11 = 0, VAR_12;

 if (!VAR_9) {
  FUNC_0("Unknown device");
  return;
 }

 VAR_10 = VAR_9->p_dev->io.BasePort1;

 VAR_12 = FUNC_4(VAR_10, 0x7006);


 FUNC_2(VAR_10, 0x7480);
 while (VAR_11 < VAR_12) {
  VAR_11++;
  VAR_9->hdev->stat.byte_rx++;


  if (VAR_9->rx_skb == ((void*)0)) {
   VAR_9->rx_state = VAR_8;
   VAR_9->rx_count = 0;
   if (!(VAR_9->rx_skb = FUNC_6(VAR_5, VAR_2))) {
    FUNC_0("Can't allocate mem for new packet");
    return;
   }
  }


  if (VAR_9->rx_state == VAR_8) {

   VAR_9->rx_skb->dev = (void *) VAR_9->hdev;
   FUNC_5(VAR_9->rx_skb)->pkt_type = FUNC_12(VAR_10 + VAR_1);
   FUNC_12(VAR_10 + VAR_0);


   switch (FUNC_5(VAR_9->rx_skb)->pkt_type) {

   case 133:
    VAR_9->rx_state = 129;
    VAR_9->rx_count = VAR_4;
    break;

   case 134:
    VAR_9->rx_state = 131;
    VAR_9->rx_count = VAR_3;
    break;

   case 132:
    VAR_9->rx_state = 128;
    VAR_9->rx_count = VAR_7;
    break;

   default:

    FUNC_0("Unknown HCI packet with type 0x%02x received", FUNC_5(VAR_9->rx_skb)->pkt_type);
    VAR_9->hdev->stat.err_rx++;
    FUNC_7(VAR_6, &(VAR_9->hdev->flags));

    FUNC_13(VAR_9->rx_skb);
    VAR_9->rx_skb = ((void*)0);
    break;

   }

  } else {

   __u8 VAR_13 = FUNC_12(VAR_10 + VAR_1);

   *FUNC_14(VAR_9->rx_skb, 1) = VAR_13;
   FUNC_12(VAR_10 + VAR_0);
   VAR_9->rx_count--;

   if (VAR_9->rx_count == 0) {

    int VAR_14;
    struct hci_event_hdr *VAR_15;
    struct hci_acl_hdr *VAR_16;
    struct hci_sco_hdr *VAR_17;

    switch (VAR_9->rx_state) {

    case 129:
     VAR_15 = FUNC_9(VAR_9->rx_skb);
     VAR_9->rx_state = 130;
     VAR_9->rx_count = VAR_15->plen;
     break;

    case 131:
     VAR_16 = FUNC_8(VAR_9->rx_skb);
     VAR_14 = FUNC_1(VAR_16->dlen);
     VAR_9->rx_state = 130;
     VAR_9->rx_count = VAR_14;
     break;

    case 128:
     VAR_17 = FUNC_11(VAR_9->rx_skb);
     VAR_9->rx_state = 130;
     VAR_9->rx_count = VAR_17->dlen;
     break;

    case 130:
     FUNC_10(VAR_9->rx_skb);
     VAR_9->rx_skb = ((void*)0);
     break;

    }

   }

  }

 }

 FUNC_3(VAR_10, 0x7006, 0x0000);
}
