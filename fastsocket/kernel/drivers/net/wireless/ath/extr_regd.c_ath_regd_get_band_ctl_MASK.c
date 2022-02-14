
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath_regulatory {scalar_t__ country_code; TYPE_1__* regpair; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_2__ {int reg_5ghz_ctl; int reg_2ghz_ctl; } ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_regulatory*) ;
 scalar_t__ FUNC_1 (int ) ;

u32 FUNC_2(struct ath_regulatory *VAR_3,
     enum ieee80211_band VAR_4)
{
 if (!VAR_3->regpair ||
     (VAR_3->country_code == VAR_0 &&
      FUNC_1(FUNC_0(VAR_3)))) {
  return VAR_2;
 }

 switch (VAR_4) {
 case 129:
  return VAR_3->regpair->reg_2ghz_ctl;
 case 128:
  return VAR_3->regpair->reg_5ghz_ctl;
 default:
  return VAR_1;
 }
}
