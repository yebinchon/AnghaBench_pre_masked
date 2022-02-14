
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8180_priv {int rf_chip; int ChannelAccessSetting; struct ieee80211_device* ieee80211; } ;
struct net_device {int dummy; } ;
struct ieee80211_device {int mode; } ;
typedef int WIRELESS_MODE ;


 int FUNC_0 (struct net_device*,int,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct net_device*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct net_device*) ;

void
FUNC_5(
 struct net_device *VAR_4,
 u8 VAR_5
 )
{
 struct r8180_priv *VAR_6 = (struct r8180_priv *)FUNC_4(VAR_4);
 struct ieee80211_device *VAR_7 = VAR_6->ieee80211;

 u8 VAR_8 = FUNC_3(VAR_4);

 if( (VAR_5 & VAR_8) == 0 )
 {
  FUNC_2("ActSetWirelessMode8185(): WirelessMode(%d) is not supported (%d)!\n",
   VAR_5, VAR_8);
  return;
 }


 if (VAR_5 == VAR_1)
 {
  if((VAR_8 & VAR_0))
  {
   VAR_5 = VAR_0;
  }
  else if((VAR_8 & VAR_3))
  {
   VAR_5 = VAR_3;
  }
  else if((VAR_8 & VAR_2))
  {
   VAR_5 = VAR_2;
  }
  else
  {
   FUNC_2("ActSetWirelessMode8185(): No valid wireless mode supported, btSupportedWirelessMode(%x)!!!\n",
      VAR_8);
   VAR_5 = VAR_2;
  }
 }




 switch(VAR_6->rf_chip)
 {
 case 129:
 case 128:
  {


   VAR_7->mode = (WIRELESS_MODE)VAR_5;
  }
  break;

 default:
  FUNC_2("ActSetWirelessMode8185(): unsupported RF: 0x%X !!!\n", VAR_6->rf_chip);
  break;
 }


 if( VAR_7->mode == VAR_0 ){
  FUNC_1("WIRELESS_MODE_A\n");
 }
 else if( VAR_7->mode == VAR_2 ){
  FUNC_1("WIRELESS_MODE_B\n");
 }
 else if( VAR_7->mode == VAR_3 ){
  FUNC_1("WIRELESS_MODE_G\n");
 }

 FUNC_0( VAR_4, VAR_7->mode, &VAR_6->ChannelAccessSetting);
}
