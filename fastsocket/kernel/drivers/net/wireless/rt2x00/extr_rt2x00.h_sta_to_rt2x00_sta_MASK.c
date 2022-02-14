
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_sta {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;



__attribute__((used)) static inline struct rt2x00_sta* FUNC_0(struct ieee80211_sta *VAR_0)
{
 return (struct rt2x00_sta *)VAR_0->drv_priv;
}
