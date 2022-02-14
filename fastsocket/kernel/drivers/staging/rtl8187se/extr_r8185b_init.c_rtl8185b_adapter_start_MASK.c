
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct r8180_priv {scalar_t__ bInactivePs; scalar_t__ RfOffReason; int eRFPowerState; scalar_t__ dma_poll_stop_mask; scalar_t__ dma_poll_mask; struct ieee80211_device* ieee80211; } ;
struct net_device {scalar_t__ dev_addr; } ;
struct ieee80211_device {int mode; } ;
typedef int WIRELESS_MODE ;
struct TYPE_4__ {scalar_t__ RegRfOff; } ;
struct TYPE_5__ {TYPE_1__ MgntInfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int) ;
 TYPE_2__* VAR_5 ;
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
 int FUNC_1 (char*,int) ;
 int VAR_16 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int ,int ) ;
 int VAR_20 ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int ,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 struct r8180_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*,int) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*,int,int) ;
 int FUNC_16 (struct net_device*,int ,int) ;
 int FUNC_17 (struct net_device*,int ,int) ;

void FUNC_18(struct net_device *VAR_35)
{
      struct r8180_priv *VAR_36 = FUNC_10(VAR_35);
 struct ieee80211_device *VAR_37 = VAR_36->ieee80211;

 u8 VAR_38;
 u8 VAR_39;
 u8 VAR_40 = 0;

 u8 VAR_41;

 u8 VAR_42;
 u8 VAR_43;
 u8 VAR_44;



 FUNC_15(VAR_35,0x24e, (VAR_9|VAR_10|VAR_7));

 FUNC_13(VAR_35);

 VAR_36->dma_poll_mask = 0;
 VAR_36->dma_poll_stop_mask = 0;



 FUNC_3(VAR_35);

 FUNC_16(VAR_35, VAR_17, ((u32*)VAR_35->dev_addr)[0]);
 FUNC_17(VAR_35, VAR_18, ((u32*)VAR_35->dev_addr)[1] & 0xffff );

 FUNC_15(VAR_35, VAR_19, FUNC_12(VAR_35, VAR_19) & 0xf3);



 FUNC_17(VAR_35, VAR_11, 100);
 FUNC_17(VAR_35, VAR_6, 2);


 FUNC_7(VAR_35, VAR_16, 0xFFFF);

 FUNC_15(VAR_35, VAR_32, 0);

 FUNC_4(VAR_35);



 FUNC_7(VAR_35, VAR_23, 0x569a);
 FUNC_15(VAR_35, VAR_15, 0xc0);

 VAR_41 = FUNC_12(VAR_35, VAR_12);
 FUNC_15(VAR_35, VAR_12, (VAR_41 |VAR_13) );



 FUNC_16(VAR_35, VAR_1, VAR_3);
 FUNC_16(VAR_35, VAR_0, VAR_4);

 FUNC_17(VAR_35, VAR_2, 0x0010);


 FUNC_15(VAR_35, VAR_12, VAR_41);
 FUNC_15(VAR_35, VAR_15, 0x00);


 VAR_42 = FUNC_12(VAR_35, VAR_15);
 FUNC_15(VAR_35, VAR_15, (VAR_42|0xC0) );


 VAR_43 = FUNC_12(VAR_35, VAR_14);
 VAR_43 = VAR_43 & ~VAR_8;
 FUNC_15(VAR_35,VAR_14, VAR_43);


 VAR_42 &= ~(0xC0);
 FUNC_15(VAR_35, VAR_15, VAR_42);



 VAR_44 = FUNC_12(VAR_35, VAR_20);
 FUNC_15(VAR_35, VAR_20, (VAR_44 | VAR_8));


 FUNC_17(VAR_35, VAR_21, 0x0480);
 FUNC_8(VAR_35);
 FUNC_17(VAR_35, VAR_22, 0x2488);


 FUNC_6(VAR_35);




 VAR_38 = FUNC_2(VAR_35);
 if( (VAR_37->mode != VAR_30) &&
  (VAR_37->mode != VAR_31) &&
  (VAR_37->mode != VAR_28) &&
  (VAR_37->mode != VAR_29))
 {
  VAR_40 = 1;
 }
 else
 {

  if( (VAR_37->mode != VAR_29) &&
   (VAR_37->mode & VAR_38) == 0 )
  {
   VAR_40 = 1;
  }
 }

 if(VAR_40 || VAR_37->mode==VAR_29)
 {

  if((VAR_38 & VAR_28))
  {
   VAR_39 = VAR_28;
  }
  else if((VAR_38 & VAR_31))
  {
   VAR_39 = VAR_31;
  }
  else if((VAR_38 & VAR_30))
  {
   VAR_39 = VAR_30;
  }
  else
  {
   FUNC_1("InitializeAdapter8185(): No valid wireless mode supported, SupportedWirelessMode(%x)!!!\n",
     VAR_38);
   VAR_39 = VAR_30;
  }


  if(VAR_40)
  {
   VAR_37->mode = (WIRELESS_MODE)VAR_39;
  }
 }
 else
 {
  VAR_39 = VAR_37->mode;
 }


 VAR_36->eRFPowerState = VAR_33;
 VAR_36->RfOffReason = 0;
 {


  FUNC_5(VAR_35, VAR_34, 0);


 }





 if (VAR_36->bInactivePs)
 {


  FUNC_5(VAR_35,VAR_33, VAR_24);



 }
 FUNC_0(VAR_35, (u8)(VAR_39));



 FUNC_14(VAR_35);

 FUNC_11(VAR_35);

 }
