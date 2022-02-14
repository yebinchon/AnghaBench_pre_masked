
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_iso_packet_descriptor {unsigned int offset; int length; } ;
struct urb {int transfer_buffer_length; unsigned int number_of_packets; scalar_t__ transfer_flags; scalar_t__ start_frame; int dev; struct usb_iso_packet_descriptor* iso_frame_desc; int transfer_buffer; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct st5481_d_out {struct sk_buff* tx_skb; TYPE_1__ fsm; int hdlc_state; struct urb** urb; int busy; } ;
struct st5481_adapter {int usb_dev; struct st5481_d_out d_out; } ;
struct sk_buff {int len; int * data; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int,int ) ;
 int FUNC_1 (int,struct urb*) ;
 int FUNC_2 (struct st5481_adapter*,int,int *) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct urb*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *,int *,int ,int*,int ,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 scalar_t__ FUNC_8 (int,int *) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_11(struct st5481_adapter *VAR_9, int VAR_10)
{
 struct st5481_d_out *VAR_11 = &VAR_9->d_out;
 struct urb *VAR_12;
 unsigned int VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;
 struct sk_buff *VAR_18;
 struct usb_iso_packet_descriptor *VAR_19;

 if (VAR_11->fsm.state != VAR_6)
  return;

 if (FUNC_8(VAR_10, &VAR_11->busy)) {
  FUNC_0(2, "ep %d urb %d busy %#lx", VAR_1, VAR_10, VAR_11->busy);
  return;
 }
 VAR_12 = VAR_11->urb[VAR_10];

 VAR_18 = VAR_11->tx_skb;

 VAR_16 = VAR_3 * VAR_5;

 if (VAR_18) {
  VAR_15 = FUNC_6(&VAR_11->hdlc_state,
          VAR_18->data, VAR_18->len, &VAR_17,
          VAR_12->transfer_buffer, VAR_16);
  FUNC_7(VAR_18,VAR_17);
 } else {

  VAR_15 = FUNC_6(&VAR_11->hdlc_state,
          ((void*)0), 0, &VAR_17,
          VAR_12->transfer_buffer, VAR_16);
 }

 if (VAR_15 < VAR_16) {
  FUNC_3(&VAR_11->fsm, VAR_7);
 }
 if (VAR_18 && !VAR_18->len) {
  VAR_11->tx_skb = ((void*)0);
  FUNC_2(VAR_9, VAR_4 | VAR_0, ((void*)0));
  FUNC_5(VAR_18);
 }


 VAR_12->transfer_buffer_length = VAR_15;
 VAR_13 = 0;
 VAR_14 = 0;
 while (VAR_14 < VAR_15) {
  VAR_19 = &VAR_12->iso_frame_desc[VAR_13];
  VAR_19->offset = VAR_14;
  VAR_19->length = VAR_5;
  if (VAR_15 - VAR_14 < VAR_19->length)
   VAR_19->length = VAR_15 - VAR_14;
  VAR_13++;
  VAR_14 += VAR_19->length;
 }
 VAR_12->number_of_packets = VAR_13;


 VAR_12->dev = VAR_9->usb_dev;

 VAR_12->transfer_flags = 0;
 VAR_12->start_frame = FUNC_9(VAR_9->usb_dev)+2;

 FUNC_1(0x20,VAR_12);

 if (FUNC_10(VAR_12, VAR_2) < 0) {

  VAR_12->transfer_flags = VAR_8;
  FUNC_4(VAR_12, VAR_2);
 }
}
