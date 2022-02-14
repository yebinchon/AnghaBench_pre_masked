
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct r8180_priv {int irq_mask; scalar_t__ card_type; int sens; int (* rf_set_sens ) (struct net_device*,int ) ;int (* rf_init ) (struct net_device*) ;scalar_t__ card_8185; TYPE_1__* ieee80211; scalar_t__ dma_poll_mask; } ;
struct net_device {scalar_t__ dev_addr; } ;
struct TYPE_2__ {int basic_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct r8180_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct net_device*,int ) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*,int) ;
 int FUNC_14 (struct net_device*,int ) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct net_device*) ;
 int FUNC_18 (struct net_device*,int ) ;
 int FUNC_19 (int) ;
 int FUNC_20 (struct net_device*,int ,int) ;
 int FUNC_21 (struct net_device*,int ,int) ;
 int FUNC_22 (struct net_device*,int ,int) ;

void FUNC_23(struct net_device *VAR_25)
{
        struct r8180_priv *VAR_26 = FUNC_3(VAR_25);
 u32 VAR_27;
 u16 VAR_28;
 u8 VAR_29;

 FUNC_12(VAR_25);
 FUNC_11(VAR_25);




 VAR_26->irq_mask = 0x6fcf;

 VAR_26->dma_poll_mask = 0;

 FUNC_8(VAR_25);

 if(VAR_26->card_type == VAR_4 ){
  VAR_29=FUNC_6(VAR_25, VAR_7);
  FUNC_20(VAR_25,VAR_7,VAR_29 | VAR_9);
  FUNC_22(VAR_25,VAR_15, VAR_17 | VAR_18 | VAR_16 |
   FUNC_7(VAR_25, VAR_15));
 }
 FUNC_14(VAR_25, VAR_13);
 FUNC_21(VAR_25, VAR_21, ((u32*)VAR_25->dev_addr)[0]);
 FUNC_22(VAR_25, VAR_22, ((u32*)VAR_25->dev_addr)[1] & 0xffff );
 FUNC_14(VAR_25, VAR_14);

 FUNC_15(VAR_25);

 if(!VAR_26->card_8185){
  VAR_27 = FUNC_0(VAR_25,VAR_12);
  VAR_27 |= FUNC_0(VAR_25,VAR_11)<<16;

  FUNC_13(VAR_25,VAR_27);
 }

 FUNC_1(VAR_25);
 FUNC_2(VAR_25);

 FUNC_14(VAR_25, VAR_13);







 FUNC_20(VAR_25,
         VAR_5, FUNC_6(VAR_25,VAR_5) &~ (1<<VAR_6));


 if(VAR_26->card_8185)
   FUNC_20(VAR_25,
         VAR_5, FUNC_6(VAR_25,VAR_5)|(1<<4));

 FUNC_14(VAR_25,VAR_14);

 FUNC_21(VAR_25,VAR_20,0);

 if(!VAR_26->card_8185)
 {




  FUNC_20(VAR_25, VAR_10,
   FUNC_6(VAR_25, VAR_10) | (1<<VAR_0));
  FUNC_6(VAR_25, VAR_10);
  FUNC_19(15);
  FUNC_20(VAR_25, VAR_10,
   FUNC_6(VAR_25, VAR_10) &~ (1<<VAR_0));
 }else{
  FUNC_20(VAR_25, VAR_24, 0);

 }

 FUNC_10(VAR_25);

 if(VAR_26->card_8185){
  FUNC_16(VAR_25);
  FUNC_20(VAR_25, VAR_23, 0x81);
 }else{
  VAR_28 = FUNC_7(VAR_25, VAR_1);
  VAR_28 &= ~VAR_3;
  VAR_28 &= ~VAR_2;
  VAR_28 |= FUNC_4(VAR_26->ieee80211->basic_rate);
  VAR_28 |= 0x0f;
  FUNC_22(VAR_25, VAR_1, VAR_28);
 }

 if(VAR_26->card_8185){
  FUNC_20(VAR_25, VAR_19,FUNC_6(VAR_25, VAR_19) & ~(1<<6));


  FUNC_14(VAR_25, VAR_13);
  FUNC_20(VAR_25,VAR_7, FUNC_6(VAR_25, VAR_7)
          | (1 << VAR_8));
  FUNC_14(VAR_25, VAR_14);
 }

 VAR_26->rf_init(VAR_25);

 if(VAR_26->rf_set_sens != ((void*)0))
  VAR_26->rf_set_sens(VAR_25,VAR_26->sens);
 FUNC_9(VAR_25);

 FUNC_5(VAR_25);
}
