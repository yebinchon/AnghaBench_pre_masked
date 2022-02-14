
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
struct b43_wldev {TYPE_3__* wl; } ;
struct TYPE_6__ {TYPE_2__* hw; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct TYPE_4__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (struct b43_wldev*,int ,int,int) ;
 struct ieee80211_rate* FUNC_6 (struct ieee80211_supported_band*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_5, u32 VAR_6)
{
 struct ieee80211_supported_band *VAR_7 =
  VAR_5->wl->hw->wiphy->bands[FUNC_0(VAR_5->wl)];
 struct ieee80211_rate *VAR_8;
 int VAR_9;
 u16 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 for (VAR_9 = 0; VAR_9 < VAR_7->n_bitrates; VAR_9++) {
  VAR_8 = &VAR_7->bitrates[VAR_9];

  if (FUNC_1(VAR_8->hw_value)) {
   VAR_11 = VAR_2;
   VAR_10 = VAR_1;
   VAR_12 = FUNC_2(VAR_8->hw_value);
   VAR_12 &= 0xF;
  } else {
   VAR_11 = VAR_4;
   VAR_10 = VAR_3;
   VAR_12 = FUNC_3(VAR_8->hw_value);
   VAR_12 &= 0xF;
  }

  VAR_8 = FUNC_6(VAR_7, VAR_6, VAR_8->bitrate);

  if (FUNC_1(VAR_8->hw_value)) {
   VAR_13 = FUNC_2(VAR_8->hw_value);
   VAR_13 &= 0xF;
  } else {
   VAR_13 = FUNC_3(VAR_8->hw_value);
   VAR_13 &= 0xF;
  }





  VAR_14 = FUNC_4(VAR_5, VAR_0,
      VAR_11 + 2 * VAR_13);

  FUNC_5(VAR_5, VAR_0, VAR_10 + 2 * VAR_12,
    VAR_14);
 }
}
