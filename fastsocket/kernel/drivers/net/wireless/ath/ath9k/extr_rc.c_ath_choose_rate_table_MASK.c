
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int dummy; } ;
struct ath_rate_table {int dummy; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;




 struct ath_rate_table const VAR_0 ;
 struct ath_rate_table const VAR_1 ;
 struct ath_rate_table const VAR_2 ;
 struct ath_rate_table const VAR_3 ;

__attribute__((used)) static const
struct ath_rate_table *FUNC_0(struct ath_softc *VAR_4,
          enum ieee80211_band VAR_5,
          bool VAR_6)
{
 switch(VAR_5) {
 case 129:
  if (VAR_6)
   return &VAR_3;
  return &VAR_1;
 case 128:
  if (VAR_6)
   return &VAR_2;
  return &VAR_0;
 default:
  return ((void*)0);
 }
}
