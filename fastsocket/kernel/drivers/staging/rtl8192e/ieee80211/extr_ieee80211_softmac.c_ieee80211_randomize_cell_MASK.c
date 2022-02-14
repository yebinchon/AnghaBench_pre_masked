
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* bssid; } ;
struct ieee80211_device {TYPE_1__ current_network; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int ) ;

inline void FUNC_1(struct ieee80211_device *VAR_1)
{

 FUNC_0(VAR_1->current_network.bssid, VAR_0);




 VAR_1->current_network.bssid[0] &= ~0x01;
 VAR_1->current_network.bssid[0] |= 0x02;
}
