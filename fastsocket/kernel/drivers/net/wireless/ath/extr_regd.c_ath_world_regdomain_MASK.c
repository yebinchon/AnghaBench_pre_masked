
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_regdomain {int dummy; } ;
struct ath_regulatory {TYPE_1__* regpair; } ;
struct TYPE_2__ {int regDmnEnum; } ;


 int FUNC_0 (int) ;
 struct ieee80211_regdomain const* FUNC_1 () ;
 struct ieee80211_regdomain const VAR_0 ;
 struct ieee80211_regdomain const VAR_1 ;
 struct ieee80211_regdomain const VAR_2 ;
 struct ieee80211_regdomain const VAR_3 ;
 struct ieee80211_regdomain const VAR_4 ;

__attribute__((used)) static const struct
ieee80211_regdomain *FUNC_2(struct ath_regulatory *VAR_5)
{
 switch (VAR_5->regpair->regDmnEnum) {
 case 0x60:
 case 0x61:
 case 0x62:
  return &VAR_0;
 case 0x63:
 case 0x65:
  return &VAR_1;
 case 0x64:
  return &VAR_2;
 case 0x66:
 case 0x69:
  return &VAR_3;
 case 0x67:
 case 0x68:
 case 0x6A:
 case 0x6C:
  return &VAR_4;
 default:
  FUNC_0(1);
  return FUNC_1();
 }
}
