
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ieee80211_rx_stats {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct net_device*,struct ieee80211_rx_stats*) ;

u32
FUNC_2(
 struct net_device *VAR_0,
 struct ieee80211_rx_stats *VAR_1
 )
{
 u32 VAR_2;



 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
 {
  FUNC_0("rxcommandpackethandle819xusb: It is a command packet\n");
 }
 else
 {

 }


 return VAR_2;
}
