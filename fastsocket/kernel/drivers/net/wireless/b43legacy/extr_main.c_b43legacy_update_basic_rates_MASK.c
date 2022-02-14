
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ieee80211_supported_band {int n_bitrates; struct ieee80211_rate* bitrates; } ;
struct ieee80211_rate {int hw_value; int bitrate; } ;
struct b43legacy_wldev {TYPE_3__* wl; } ;
struct TYPE_6__ {TYPE_2__* hw; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct TYPE_4__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_4 (struct b43legacy_wldev*,int ,int,int) ;
 struct ieee80211_rate* FUNC_5 (struct ieee80211_supported_band*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct b43legacy_wldev *VAR_6, u32 VAR_7)
{
 struct ieee80211_supported_band *VAR_8 =
  VAR_6->wl->hw->wiphy->bands[VAR_5];
 struct ieee80211_rate *VAR_9;
 int VAR_10;
 u16 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 for (VAR_10 = 0; VAR_10 < VAR_8->n_bitrates; VAR_10++) {
  VAR_9 = &VAR_8->bitrates[VAR_10];

  if (FUNC_0(VAR_9->hw_value)) {
   VAR_12 = VAR_2;
   VAR_11 = VAR_1;
   VAR_13 = FUNC_1(VAR_9->hw_value);
   VAR_13 &= 0xF;
  } else {
   VAR_12 = VAR_4;
   VAR_11 = VAR_3;
   VAR_13 = FUNC_2(VAR_9->hw_value);
   VAR_13 &= 0xF;
  }

  VAR_9 = FUNC_5(VAR_8, VAR_7, VAR_9->bitrate);

  if (FUNC_0(VAR_9->hw_value)) {
   VAR_14 = FUNC_1(VAR_9->hw_value);
   VAR_14 &= 0xF;
  } else {
   VAR_14 = FUNC_2(VAR_9->hw_value);
   VAR_14 &= 0xF;
  }





  VAR_15 = FUNC_3(VAR_6, VAR_0,
            VAR_12 + 2 * VAR_14);

  FUNC_4(VAR_6, VAR_0,
          VAR_11 + 2 * VAR_13, VAR_15);
 }
}
