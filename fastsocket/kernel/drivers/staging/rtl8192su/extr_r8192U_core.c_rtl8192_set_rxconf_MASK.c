
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct r8192_priv {int crcmon; TYPE_1__* ieee80211; } ;
struct net_device {int flags; } ;
struct TYPE_2__ {scalar_t__ iw_mode; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int ,int) ;

void FUNC_4(struct net_device *VAR_20)
{
 struct r8192_priv *VAR_21 = (struct r8192_priv *)FUNC_1(VAR_20);
 u32 VAR_22;

 VAR_22=FUNC_2(VAR_20,VAR_4);
 VAR_22 = VAR_22 &~ VAR_2;
 VAR_22 = VAR_22 | VAR_11;
 VAR_22 = VAR_22 | VAR_8;
 VAR_22 = VAR_22 | VAR_6;
 VAR_22 = VAR_22 | VAR_10;


 if (VAR_20->flags & VAR_0) {FUNC_0 ("NIC in promisc mode");}

 if(VAR_21->ieee80211->iw_mode == VAR_1 || VAR_20->flags & VAR_0){

  VAR_22 = VAR_22 | VAR_5;
 } else{



  VAR_22 = VAR_22 | VAR_12;
  VAR_22 = VAR_22 | VAR_14;
 }


 if(VAR_21->ieee80211->iw_mode == VAR_1){
  VAR_22 = VAR_22 | VAR_9;
  VAR_22 = VAR_22 | VAR_13;
 }

 if( VAR_21->crcmon == 1 && VAR_21->ieee80211->iw_mode == VAR_1)
  VAR_22 = VAR_22 | VAR_7;


 VAR_22 = VAR_22 &~ VAR_17;
 VAR_22 = VAR_22 | (VAR_18<<VAR_19);
 VAR_22 = VAR_22 &~ VAR_3;
 VAR_22 = VAR_22 | ((u32)7<<VAR_15);


 VAR_22 = VAR_22 | VAR_16;




 FUNC_3(VAR_20, VAR_4, VAR_22);




}
