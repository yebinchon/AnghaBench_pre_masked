
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct r8180_priv {int ReceiveConfig; int crcmon; TYPE_1__* ieee80211; } ;
struct net_device {int flags; } ;
struct TYPE_2__ {scalar_t__ iw_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int ,int) ;
 int FUNC_6 (struct net_device*,int ,int) ;

void FUNC_7(struct net_device *VAR_11)
{
 u8 VAR_12;


 struct r8180_priv *VAR_13 = (struct r8180_priv *)FUNC_2(VAR_11);

 if (VAR_11->flags & VAR_2) FUNC_0 ("NIC in promisc mode");

 if(VAR_13->ieee80211->iw_mode == VAR_3 || VAR_11->flags & VAR_2){

     VAR_13->ReceiveConfig = VAR_13->ReceiveConfig & (~VAR_9);
  VAR_13->ReceiveConfig = VAR_13->ReceiveConfig | VAR_5;
 }






 if(VAR_13->ieee80211->iw_mode == VAR_3){
  VAR_13->ReceiveConfig = VAR_13->ReceiveConfig | VAR_6 | VAR_10 | VAR_8;
 }

 if( VAR_13->crcmon == 1 && VAR_13->ieee80211->iw_mode == VAR_3)
  VAR_13->ReceiveConfig = VAR_13->ReceiveConfig | VAR_7;

 FUNC_6(VAR_11, VAR_4, VAR_13->ReceiveConfig);

 FUNC_1(VAR_11);




 VAR_12=FUNC_3(VAR_11,VAR_0);
 FUNC_5(VAR_11,VAR_0,VAR_12 | (1<<VAR_1));

}
