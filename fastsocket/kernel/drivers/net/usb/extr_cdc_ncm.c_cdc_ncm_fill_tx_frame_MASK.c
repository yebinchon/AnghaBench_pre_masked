
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct usb_cdc_ncm_nth16 {void* wBlockLength; void* wSequence; void* wHeaderLength; int dwSignature; } ;
struct usb_cdc_ncm_ndp16 {void* wLength; TYPE_1__* dpe16; } ;
struct usb_cdc_ncm_dpe16 {int dummy; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_12__ {int dwNtbOutMaxSize; } ;
struct cdc_ncm_ctx {int tx_max; scalar_t__ tx_curr_frame_num; scalar_t__ tx_max_datagrams; struct sk_buff* tx_curr_skb; TYPE_3__* netdev; TYPE_6__ ncm_parm; TYPE_5__* out_ep; int tx_timer_pending; struct sk_buff* tx_rem_sign; struct sk_buff* tx_rem_skb; scalar_t__ tx_remainder; scalar_t__ tx_modulus; int tx_seq; } ;
typedef struct sk_buff* __le32 ;
struct TYPE_10__ {void* wMaxPacketSize; } ;
struct TYPE_11__ {TYPE_4__ desc; } ;
struct TYPE_8__ {int tx_packets; int tx_dropped; } ;
struct TYPE_9__ {TYPE_2__ stats; } ;
struct TYPE_7__ {void* wDatagramIndex; void* wDatagramLength; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_buff*,scalar_t__,scalar_t__,int) ;
 struct usb_cdc_ncm_ndp16* FUNC_2 (struct cdc_ncm_ctx*,struct sk_buff*,struct sk_buff*,scalar_t__) ;
 int FUNC_3 (struct cdc_ncm_ctx*) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__*,scalar_t__,int) ;
 scalar_t__ FUNC_10 (scalar_t__*,int ,int) ;
 scalar_t__* FUNC_11 (struct sk_buff*,int) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,struct sk_buff*) ;

struct sk_buff *
FUNC_14(struct cdc_ncm_ctx *VAR_6, struct sk_buff *VAR_7, __le32 VAR_8)
{
 struct usb_cdc_ncm_nth16 *VAR_9;
 struct usb_cdc_ncm_ndp16 *VAR_10;
 struct sk_buff *VAR_11;
 u16 VAR_12 = 0, VAR_13, VAR_14;
 u8 VAR_15 = 0;


 if (VAR_7 != ((void*)0)) {
  FUNC_13(VAR_7, VAR_6->tx_rem_skb);
  FUNC_13(VAR_8, VAR_6->tx_rem_sign);
 } else {
  VAR_15 = 1;
 }


 VAR_11 = VAR_6->tx_curr_skb;


 if (!VAR_11) {
  VAR_11 = FUNC_0((VAR_6->tx_max + 1), VAR_4);
  if (VAR_11 == ((void*)0)) {
   if (VAR_7 != ((void*)0)) {
    FUNC_6(VAR_7);
    VAR_6->netdev->stats.tx_dropped++;
   }
   goto exit_no_skb;
  }

  VAR_9 = (struct usb_cdc_ncm_nth16 *)FUNC_10(FUNC_11(VAR_11, sizeof(struct usb_cdc_ncm_nth16)), 0, sizeof(struct usb_cdc_ncm_nth16));
  VAR_9->dwSignature = FUNC_5(VAR_5);
  VAR_9->wHeaderLength = FUNC_4(sizeof(struct usb_cdc_ncm_nth16));
  VAR_9->wSequence = FUNC_4(VAR_6->tx_seq++);


  VAR_6->tx_curr_frame_num = 0;
 }

 for (VAR_12 = VAR_6->tx_curr_frame_num; VAR_12 < VAR_6->tx_max_datagrams; VAR_12++) {

  if (VAR_7 == ((void*)0)) {
   VAR_7 = VAR_6->tx_rem_skb;
   VAR_8 = VAR_6->tx_rem_sign;
   VAR_6->tx_rem_skb = ((void*)0);


   if (VAR_7 == ((void*)0))
    break;
  }


  VAR_10 = FUNC_2(VAR_6, VAR_11, VAR_8, VAR_7->len + VAR_6->tx_modulus + VAR_6->tx_remainder);


  FUNC_1(VAR_11, VAR_6->tx_modulus, VAR_6->tx_remainder, VAR_6->tx_max);


  if (!VAR_10 || VAR_11->len + VAR_7->len > VAR_6->tx_max) {
   if (VAR_12 == 0) {

    FUNC_6(VAR_7);
    VAR_7 = ((void*)0);
    VAR_6->netdev->stats.tx_dropped++;
   } else {

    if (VAR_6->tx_rem_skb != ((void*)0)) {
     FUNC_6(VAR_6->tx_rem_skb);
     VAR_6->netdev->stats.tx_dropped++;
    }
    VAR_6->tx_rem_skb = VAR_7;
    VAR_6->tx_rem_sign = VAR_8;
    VAR_7 = ((void*)0);
    VAR_15 = 1;
   }
   break;
  }


  VAR_14 = FUNC_7(VAR_10->wLength);
  VAR_13 = (VAR_14 - sizeof(struct usb_cdc_ncm_ndp16)) / sizeof(struct usb_cdc_ncm_dpe16) - 1;


  VAR_10->dpe16[VAR_13].wDatagramLength = FUNC_4(VAR_7->len);
  VAR_10->dpe16[VAR_13].wDatagramIndex = FUNC_4(VAR_11->len);
  VAR_10->wLength = FUNC_4(VAR_14 + sizeof(struct usb_cdc_ncm_dpe16));
  FUNC_9(FUNC_11(VAR_11, VAR_7->len), VAR_7->data, VAR_7->len);
  FUNC_6(VAR_7);
  VAR_7 = ((void*)0);


  if (VAR_13 >= VAR_0) {
   VAR_15 = 1;
   break;
  }
 }


 if (VAR_7 != ((void*)0)) {
  FUNC_6(VAR_7);
  VAR_7 = ((void*)0);
  VAR_6->netdev->stats.tx_dropped++;
 }

 VAR_6->tx_curr_frame_num = VAR_12;

 if (VAR_12 == 0) {


  VAR_6->tx_curr_skb = VAR_11;
  goto exit_no_skb;

 } else if ((VAR_12 < VAR_6->tx_max_datagrams) && (VAR_15 == 0)) {


  VAR_6->tx_curr_skb = VAR_11;

  if (VAR_12 < VAR_2)
   VAR_6->tx_timer_pending = VAR_3;
  goto exit_no_skb;

 } else {


 }







 if (VAR_11->len > VAR_1)

  FUNC_10(FUNC_11(VAR_11, VAR_6->tx_max - VAR_11->len), 0, VAR_6->tx_max - VAR_11->len);


 if (((VAR_11->len % FUNC_7(VAR_6->out_ep->desc.wMaxPacketSize)) == 0) &&
     (VAR_11->len < FUNC_8(VAR_6->ncm_parm.dwNtbOutMaxSize)) && FUNC_12(VAR_11))
  *FUNC_11(VAR_11, 1) = 0;


 VAR_9 = (struct usb_cdc_ncm_nth16 *)VAR_11->data;
 VAR_9->wBlockLength = FUNC_4(VAR_11->len);


 VAR_6->tx_curr_skb = ((void*)0);
 VAR_6->netdev->stats.tx_packets += VAR_6->tx_curr_frame_num;
 return VAR_11;

exit_no_skb:

 if (VAR_6->tx_curr_skb != ((void*)0))
  FUNC_3(VAR_6);
 return ((void*)0);
}
