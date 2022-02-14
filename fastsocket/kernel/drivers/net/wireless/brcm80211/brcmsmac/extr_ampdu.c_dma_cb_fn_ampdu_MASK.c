
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_tx_info {int flags; struct ieee80211_sta** rate_driver_data; } ;
struct ieee80211_sta {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(void *VAR_1, void *VAR_2)
{
 struct ieee80211_sta *VAR_3 = VAR_2;
 struct ieee80211_tx_info *VAR_4 = (struct ieee80211_tx_info *)VAR_1;

 if ((VAR_4->flags & VAR_0) &&
     (VAR_4->rate_driver_data[0] == VAR_3 || VAR_3 == ((void*)0)))
  VAR_4->rate_driver_data[0] = ((void*)0);
}
