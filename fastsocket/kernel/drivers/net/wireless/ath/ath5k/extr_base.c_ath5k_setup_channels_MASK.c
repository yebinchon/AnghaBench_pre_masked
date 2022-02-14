
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {unsigned int center_freq; int band; unsigned int hw_value; } ;
struct ath5k_hw {int dummy; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;





 int FUNC_0 (struct ath5k_hw*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath5k_hw*,struct ieee80211_channel*) ;
 int FUNC_2 (unsigned int,int) ;
 unsigned int FUNC_3 (unsigned int,int) ;

__attribute__((used)) static unsigned int
FUNC_4(struct ath5k_hw *VAR_2, struct ieee80211_channel *VAR_3,
  unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;
 enum ieee80211_band VAR_10;

 switch (VAR_4) {
 case 130:

  VAR_7 = 220;
  VAR_10 = VAR_1;
  break;
 case 129:
 case 128:
  VAR_7 = 26;
  VAR_10 = VAR_0;
  break;
 default:
  FUNC_0(VAR_2, "bad mode, not copying channels\n");
  return 0;
 }

 VAR_6 = 0;
 for (VAR_9 = 1; VAR_9 <= VAR_7 && VAR_6 < VAR_5; VAR_9++) {
  VAR_8 = FUNC_3(VAR_9, VAR_10);

  if (VAR_8 == 0)
   continue;


  VAR_3[VAR_6].center_freq = VAR_8;
  VAR_3[VAR_6].band = VAR_10;
  VAR_3[VAR_6].hw_value = VAR_4;


  if (!FUNC_1(VAR_2, &VAR_3[VAR_6]))
   continue;

  if (!FUNC_2(VAR_9, VAR_10))
   continue;

  VAR_6++;
 }

 return VAR_6;
}
