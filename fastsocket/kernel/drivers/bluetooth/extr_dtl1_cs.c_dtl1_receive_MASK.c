
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


struct TYPE_22__ {int len; int type; } ;
typedef TYPE_5__ nsh_t ;
struct TYPE_23__ {int rx_state; scalar_t__ rx_count; TYPE_7__* rx_skb; TYPE_4__* hdev; TYPE_2__* p_dev; } ;
typedef TYPE_6__ dtl1_info_t ;
struct TYPE_24__ {void* dev; int len; int tail; scalar_t__ data; } ;
struct TYPE_20__ {int byte_rx; } ;
struct TYPE_21__ {TYPE_3__ stat; } ;
struct TYPE_18__ {unsigned int BasePort1; } ;
struct TYPE_19__ {TYPE_1__ io; } ;
struct TYPE_17__ {int pkt_type; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;


 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_15__* FUNC_1 (TYPE_7__*) ;
 TYPE_7__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*,void*) ;
 int* FUNC_8 (TYPE_7__*,int) ;

__attribute__((used)) static void FUNC_9(dtl1_info_t *VAR_6)
{
 unsigned int VAR_7;
 nsh_t *VAR_8;
 int VAR_9 = 0;

 if (!VAR_6) {
  FUNC_0("Unknown device");
  return;
 }

 VAR_7 = VAR_6->p_dev->io.BasePort1;

 do {
  VAR_6->hdev->stat.byte_rx++;


  if (VAR_6->rx_skb == ((void*)0))
   if (!(VAR_6->rx_skb = FUNC_2(VAR_1, VAR_0))) {
    FUNC_0("Can't allocate mem for new packet");
    VAR_6->rx_state = 128;
    VAR_6->rx_count = VAR_2;
    return;
   }

  *FUNC_8(VAR_6->rx_skb, 1) = FUNC_5(VAR_7 + VAR_5);
  VAR_8 = (nsh_t *)VAR_6->rx_skb->data;

  VAR_6->rx_count--;

  if (VAR_6->rx_count == 0) {

   switch (VAR_6->rx_state) {
   case 128:
    VAR_6->rx_state = 129;
    VAR_6->rx_count = VAR_8->len + (VAR_8->len & 0x0001);
    break;
   case 129:
    FUNC_1(VAR_6->rx_skb)->pkt_type = VAR_8->type;


    if (VAR_8->len & 0x0001) {
     VAR_6->rx_skb->tail--;
     VAR_6->rx_skb->len--;
    }


    FUNC_7(VAR_6->rx_skb, VAR_2);

    switch (FUNC_1(VAR_6->rx_skb)->pkt_type) {
    case 0x80:

     FUNC_3(VAR_6, VAR_6->rx_skb);
     break;
    case 0x82:
    case 0x83:
    case 0x84:

     VAR_6->rx_skb->dev = (void *) VAR_6->hdev;
     FUNC_1(VAR_6->rx_skb)->pkt_type &= 0x0f;
     FUNC_4(VAR_6->rx_skb);
     break;
    default:

     FUNC_0("Unknown HCI packet with type 0x%02x received", FUNC_1(VAR_6->rx_skb)->pkt_type);
     FUNC_6(VAR_6->rx_skb);
     break;
    }

    VAR_6->rx_state = 128;
    VAR_6->rx_count = VAR_2;
    VAR_6->rx_skb = ((void*)0);
    break;
   }

  }


  if (VAR_9++ > 32)
   break;

 } while (FUNC_5(VAR_7 + VAR_3) & VAR_4);
}
