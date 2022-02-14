
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct st5481_b_out {int * tx_skb; int hdlc_state; scalar_t__ busy; int * urb; } ;
struct st5481_bcs {int channel; int mode; int b_in; struct st5481_adapter* adapter; struct st5481_b_out b_out; } ;
struct st5481_adapter {int number_of_leds; int leds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int * VAR_13 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct st5481_adapter*,scalar_t__,int,int *,struct st5481_bcs*) ;
 int FUNC_5 (struct st5481_adapter*,int,int *,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct st5481_bcs *VAR_14, int VAR_15)
{
 struct st5481_b_out *VAR_16 = &VAR_14->b_out;
 struct st5481_adapter *VAR_17 = VAR_14->adapter;

 FUNC_0(4,"B%d,mode=%d", VAR_14->channel + 1, VAR_15);

 if (VAR_14->mode == VAR_15)
  return;

 VAR_14->mode = VAR_15;


 FUNC_6(VAR_16->urb[0]);
 FUNC_6(VAR_16->urb[1]);
 VAR_16->busy = 0;

 FUNC_3(&VAR_14->b_in, VAR_15);
 if (VAR_14->mode != VAR_7) {

  if (VAR_14->mode != VAR_8) {
   u32 VAR_18 = VAR_5;
   if (VAR_14->mode == VAR_6)
    VAR_18 |= VAR_4;
   FUNC_2(&VAR_16->hdlc_state, VAR_18);
  }
  FUNC_5(VAR_17, (VAR_14->channel+1)*2, ((void*)0), ((void*)0));


  FUNC_4(VAR_17, VAR_2+(VAR_14->channel*2),
        VAR_12+VAR_10+VAR_11, ((void*)0), ((void*)0));


  FUNC_4(VAR_17, VAR_9+(VAR_14->channel*2), 32, VAR_13, VAR_14);
  if (VAR_17->number_of_leds == 4) {
   if (VAR_14->channel == 0) {
    VAR_17->leds |= VAR_0;
   } else {
    VAR_17->leds |= VAR_1;
   }
  }
 } else {

  FUNC_4(VAR_17, VAR_2+(VAR_14->channel*2), 0, ((void*)0), ((void*)0));


  FUNC_4(VAR_17, VAR_9+(VAR_14->channel*2), 0, ((void*)0), ((void*)0));

  if (VAR_17->number_of_leds == 4) {
   if (VAR_14->channel == 0) {
    VAR_17->leds &= ~VAR_0;
   } else {
    VAR_17->leds &= ~VAR_1;
   }
  } else {
   FUNC_4(VAR_17, VAR_3, VAR_17->leds, ((void*)0), ((void*)0));
  }
  if (VAR_16->tx_skb) {
   FUNC_1(VAR_16->tx_skb);
   VAR_16->tx_skb = ((void*)0);
  }

 }
}
