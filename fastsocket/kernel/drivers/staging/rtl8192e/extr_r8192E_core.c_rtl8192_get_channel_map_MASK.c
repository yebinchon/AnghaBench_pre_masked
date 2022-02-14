
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct r8192_priv {scalar_t__ ChannelPlan; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__* channel_map; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int VAR_2 ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__,struct r8192_priv*) ;

__attribute__((used)) static short FUNC_5(struct net_device * VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_2(VAR_3);
 int VAR_5,VAR_6;

 if(!VAR_2){
  FUNC_0("No channels, aborting");
  return -1;
 }
 VAR_5=VAR_2;
 VAR_4->ChannelPlan= 0;

 for (VAR_6=1; VAR_6<=14; VAR_6++) {
  (VAR_4->ieee80211->channel_map)[VAR_6] = (u8)(VAR_5 & 0x01);
  VAR_5 >>= 1;
 }

 return 0;
}
