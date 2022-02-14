
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int transfer_buffer_length; int number_of_packets; int transfer_flags; int dev; TYPE_1__* iso_frame_desc; int transfer_buffer; } ;
struct st5481_d_out {struct sk_buff* tx_skb; int fsm; int hdlc_state; struct urb** urb; int busy; } ;
struct st5481_adapter {int usb_dev; struct st5481_d_out d_out; } ;
struct sk_buff {int len; int data; } ;
struct FsmInst {struct st5481_adapter* userdata; } ;
struct TYPE_2__ {int length; scalar_t__ offset; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int,struct urb*) ;
 int FUNC_2 (int,struct sk_buff*) ;
 int FUNC_3 (struct st5481_adapter*,int,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct urb*,int ) ;
 int VAR_8 ;
 int FUNC_6 (char*,int ,int,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *,int ,int ,int*,int ,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 scalar_t__ FUNC_11 (int,int *) ;

__attribute__((used)) static void FUNC_12(struct FsmInst *VAR_9, int VAR_10, void *VAR_11)
{

 struct st5481_adapter *VAR_12 = VAR_9->userdata;
 struct st5481_d_out *VAR_13 = &VAR_12->d_out;
 struct urb *VAR_14;
 int VAR_15, VAR_16;
 struct sk_buff *VAR_17;
 int VAR_18 = 0;

 VAR_17 = VAR_13->tx_skb;

 FUNC_0(2,"len=%d",VAR_17->len);

 FUNC_9(&VAR_13->hdlc_state, VAR_4 | VAR_3);

 if (FUNC_11(VAR_18, &VAR_13->busy)) {
  FUNC_6("ep %d urb %d busy %#lx", VAR_1, VAR_18, VAR_13->busy);
  return;
 }
 VAR_14 = VAR_13->urb[VAR_18];

 FUNC_2(0x10, VAR_17);
 VAR_15 = FUNC_8(&VAR_13->hdlc_state,
         VAR_17->data, VAR_17->len, &VAR_16,
         VAR_14->transfer_buffer, 16);
 FUNC_10(VAR_17, VAR_16);

 if(VAR_15 < 16)
  FUNC_4(&VAR_13->fsm, VAR_7);
 else
  FUNC_4(&VAR_13->fsm, VAR_6);

 if (VAR_17->len == 0) {
  VAR_13->tx_skb = ((void*)0);
  FUNC_3(VAR_12, VAR_5 | VAR_0, ((void*)0));
  FUNC_7(VAR_17);
 }


 VAR_14->transfer_buffer_length = VAR_15;

 VAR_14->iso_frame_desc[0].offset = 0;
 VAR_14->iso_frame_desc[0].length = VAR_15;
 VAR_14->number_of_packets = 1;


 VAR_14->dev = VAR_12->usb_dev;
 VAR_14->transfer_flags = VAR_8;

 FUNC_1(0x20,VAR_14);
 FUNC_5(VAR_14, VAR_2);
}
