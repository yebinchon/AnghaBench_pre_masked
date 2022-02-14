
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_supported_band {void* n_bitrates; void* bitrates; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;


 void* VAR_1 ;
 void* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct ieee80211_hw *VAR_3,
      struct ieee80211_supported_band *VAR_4,
      enum ieee80211_band VAR_5)
{


 switch (VAR_5) {
 case 129:
  VAR_4->bitrates = VAR_2;
  VAR_4->n_bitrates = FUNC_0(VAR_2);
  break;
 case 128:
  VAR_4->bitrates = VAR_1;
  VAR_4->n_bitrates = FUNC_0(VAR_1);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
