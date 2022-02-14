
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_station_priv_common {int sta_id; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline int
FUNC_1(struct ieee80211_sta *VAR_1)
{
 if (FUNC_0(!VAR_1))
  return VAR_0;

 return ((struct il_station_priv_common *)VAR_1->drv_priv)->sta_id;
}
