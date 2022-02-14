
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct iwl_priv {int dummy; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static u16 FUNC_0(struct iwl_priv *VAR_5,
         enum ieee80211_band VAR_6, u8 VAR_7)
{
 if (VAR_6 == VAR_0)
  return VAR_4 +
   VAR_2 * (VAR_7 + 1);
 else
  return VAR_3 +
   VAR_1 * (VAR_7 + 1);
}
