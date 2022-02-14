
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {unsigned char* transfer_buffer; int transfer_buffer_length; int number_of_packets; int dev; TYPE_1__* iso_frame_desc; } ;
struct st5481_b_out {int flow_event; int hdlc_state; struct sk_buff* tx_skb; struct urb** urb; int busy; } ;
struct st5481_bcs {int channel; scalar_t__ mode; struct st5481_adapter* adapter; struct st5481_b_out b_out; } ;
struct st5481_adapter {int usb_dev; } ;
struct sk_buff {int len; unsigned char* data; scalar_t__ truesize; } ;
struct TYPE_2__ {unsigned int offset; unsigned int length; } ;


 int VAR_0 ;
 int FUNC_0 (struct st5481_bcs*,int,void*) ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int,int) ;
 int FUNC_2 (int,struct urb*) ;
 int FUNC_3 (int,struct sk_buff*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct urb*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int *,unsigned char*,int,int*,unsigned char*,int) ;
 int FUNC_8 (unsigned char*,int,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 scalar_t__ FUNC_10 (int,int *) ;

__attribute__((used)) static void FUNC_11(struct st5481_bcs *VAR_10,int VAR_11)
{
 struct st5481_b_out *VAR_12 = &VAR_10->b_out;
 struct st5481_adapter *VAR_13 = VAR_10->adapter;
 struct urb *VAR_14;
 unsigned int VAR_15,VAR_16;
 int VAR_17,VAR_18,VAR_19;
 int VAR_20;
 struct sk_buff *VAR_21;

 if (FUNC_10(VAR_11, &VAR_12->busy)) {
  FUNC_1(4,"ep %d urb %d busy",(VAR_10->channel+1)*2,VAR_11);
  return;
 }
 VAR_14 = VAR_12->urb[VAR_11];


 if(VAR_12->flow_event & (VAR_5 | VAR_6)) {
  VAR_18 = VAR_4*VAR_9 + VAR_0;
  VAR_15 = VAR_9 + VAR_0;
  FUNC_1(4,"B%d,adjust flow,add %d bytes",VAR_10->channel+1,VAR_0);
 } else if(VAR_12->flow_event & VAR_7){
  VAR_18 = VAR_4*VAR_9 - VAR_0;
  VAR_15 = VAR_9 - VAR_0;
  FUNC_1(4,"B%d,adjust flow,remove %d bytes",VAR_10->channel+1,VAR_0);
 } else {
  VAR_18 = VAR_4*VAR_9;
  VAR_15 = 8;
 }
 VAR_12->flow_event = 0;

 VAR_17 = 0;
 while (VAR_17 < VAR_18) {
  if ((VAR_21 = VAR_12->tx_skb)) {
   FUNC_3(0x100, VAR_21);
   FUNC_1(4,"B%d,len=%d",VAR_10->channel+1,VAR_21->len);

   if (VAR_10->mode == VAR_3) {
    VAR_19 = VAR_18 - VAR_17;
    if (VAR_21->len < VAR_19)
     VAR_19 = VAR_21->len;
    {
     register unsigned char *VAR_22 = VAR_21->data;
     register unsigned char *VAR_23 = VAR_14->transfer_buffer+VAR_17;
     register unsigned int VAR_24;
     for (VAR_24 = 0; VAR_24 < VAR_19; VAR_24++)
      *VAR_23++ = FUNC_5(*VAR_22++);
    }
    VAR_17 += VAR_19;
   } else {
    VAR_17 += FUNC_7(&VAR_12->hdlc_state,
             VAR_21->data, VAR_21->len, &VAR_19,
             VAR_14->transfer_buffer+VAR_17, VAR_18-VAR_17);
   }

   FUNC_9(VAR_21, VAR_19);

   if (!VAR_21->len) {

    VAR_12->tx_skb = ((void*)0);
    FUNC_0(VAR_10, VAR_8 | VAR_1, (void *)(unsigned long) VAR_21->truesize);
    FUNC_6(VAR_21);




   }
  } else {
   if (VAR_10->mode == VAR_3) {
    FUNC_8(VAR_14->transfer_buffer+VAR_17, 0xff, VAR_18-VAR_17);
    VAR_17 = VAR_18;
   } else {

    VAR_17 += FUNC_7(&VAR_12->hdlc_state,
             ((void*)0), 0, &VAR_19,
             VAR_14->transfer_buffer+VAR_17, VAR_18-VAR_17);
   }
  }
 }


 for (VAR_20 = 0, VAR_16 = 0; VAR_16 < VAR_17; VAR_20++) {
  VAR_14->iso_frame_desc[VAR_20].offset = VAR_16;
  VAR_14->iso_frame_desc[VAR_20].length = VAR_15;
  VAR_16 += VAR_15;
  VAR_15 = VAR_9;
 }
 VAR_14->transfer_buffer_length = VAR_17;
 VAR_14->number_of_packets = VAR_20;
 VAR_14->dev = VAR_13->usb_dev;

 FUNC_2(0x200,VAR_14);

 FUNC_4(VAR_14, VAR_2);
}
