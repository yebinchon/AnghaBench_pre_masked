
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct r8180_priv {scalar_t__ card_8185; int crcmon; int rcr_csense; TYPE_1__* ieee80211; } ;
struct net_device {int flags; } ;
struct TYPE_2__ {scalar_t__ iw_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
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
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int ,int) ;
 int FUNC_6 (struct net_device*,int ,int) ;

void FUNC_7(struct net_device *VAR_27)
{
 u8 VAR_28;
 u32 VAR_29;

 struct r8180_priv *VAR_30 = (struct r8180_priv *)FUNC_2(VAR_27);

 VAR_29=FUNC_4(VAR_27,VAR_23);
 VAR_29 = VAR_29 &~ VAR_14;
 VAR_29 = VAR_29 | (1<<VAR_7);
 VAR_29 = VAR_29 | (1<<VAR_4);
 VAR_29 = VAR_29 | (1<<VAR_1);
 VAR_29 = VAR_29 | (1<<VAR_6);
 if (VAR_27->flags & VAR_12)
  FUNC_0("NIC in promisc mode");

 if(VAR_30->ieee80211->iw_mode == VAR_13 || VAR_27->flags & VAR_12){

  VAR_29 = VAR_29 | (1<<VAR_0);
 }else{
  VAR_29 = VAR_29 | (1<<VAR_8);
  if(VAR_30->card_8185 == 0)
   VAR_29 = VAR_29 | (1<<VAR_22);
 }

 if(VAR_30->ieee80211->iw_mode == VAR_13){
  VAR_29 = VAR_29 | (1<<VAR_3);
  VAR_29 = VAR_29 | (1<<VAR_5);
  VAR_29 = VAR_29 | (1<<VAR_9);
 }

 if( VAR_30->crcmon == 1 && VAR_30->ieee80211->iw_mode == VAR_13)
  VAR_29 = VAR_29 | (1<<VAR_2);

 VAR_29 = VAR_29 & ~VAR_24;
 VAR_29 = VAR_29 | (VAR_25 << VAR_26);

 VAR_29 = VAR_29 | (1<<VAR_21);
 VAR_29 = VAR_29 &~ VAR_16;
 VAR_29 = VAR_29 | (VAR_15<<VAR_17);

 VAR_29 = VAR_29 | VAR_20;

 VAR_29 = VAR_29 &~ VAR_18;

 if (!VAR_30->card_8185)
  VAR_29 |= (VAR_30->rcr_csense<<VAR_19);

 FUNC_6(VAR_27, VAR_23, VAR_29);

 FUNC_1(VAR_27);

 VAR_28=FUNC_3(VAR_27,VAR_10);
 FUNC_5(VAR_27,VAR_10,VAR_28 | (1<<VAR_11));
}
