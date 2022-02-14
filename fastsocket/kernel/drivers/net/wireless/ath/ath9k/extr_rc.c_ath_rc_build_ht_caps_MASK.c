
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__* rx_mask; } ;
struct TYPE_4__ {int cap; TYPE_1__ mcs; scalar_t__ ht_supported; } ;
struct ieee80211_sta {scalar_t__ bandwidth; TYPE_2__ ht_cap; } ;
struct ath_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static u8 FUNC_0(struct ath_softc *VAR_8, struct ieee80211_sta *VAR_9)
{
 u8 VAR_10 = 0;

 if (VAR_9->ht_cap.ht_supported) {
  VAR_10 = VAR_5;
  if (VAR_9->ht_cap.mcs.rx_mask[1] && VAR_9->ht_cap.mcs.rx_mask[2])
   VAR_10 |= VAR_7 | VAR_4;
  else if (VAR_9->ht_cap.mcs.rx_mask[1])
   VAR_10 |= VAR_4;
  if (VAR_9->bandwidth >= VAR_2) {
   VAR_10 |= VAR_3;
   if (VAR_9->ht_cap.cap & VAR_1)
    VAR_10 |= VAR_6;
  } else {
   if (VAR_9->ht_cap.cap & VAR_0)
    VAR_10 |= VAR_6;
  }
 }

 return VAR_10;
}
