
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_tx_rate {int idx; int flags; } ;
struct TYPE_2__ {int antenna; struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {int band; TYPE_1__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct ieee80211_tx_rate*,int,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(u32 VAR_18,
      struct ieee80211_tx_info *VAR_19)
{
 struct ieee80211_tx_rate *VAR_20 = &VAR_19->status.rates[0];

 VAR_19->status.antenna =
  ((VAR_18 & VAR_9) >> VAR_10);
 if (VAR_18 & VAR_7)
  VAR_20->flags |= VAR_3;
 switch (VAR_18 & VAR_11) {
 case 130:
  break;
 case 129:
  VAR_20->flags |= VAR_1;
  break;
 case 128:
  VAR_20->flags |= VAR_2;
  break;
 case 131:
  VAR_20->flags |= VAR_0;
  break;
 }
 if (VAR_18 & VAR_13)
  VAR_20->flags |= VAR_5;
 if (VAR_18 & VAR_12) {
  VAR_20->flags |= VAR_4;
  VAR_20->idx = VAR_18 & VAR_8;
 } else if (VAR_18 & VAR_14) {
  FUNC_0(
   VAR_20, VAR_18 & VAR_17,
   ((VAR_18 & VAR_15) >>
      VAR_16) + 1);
  VAR_20->flags |= VAR_6;
 } else {
  VAR_20->idx = FUNC_1(VAR_18,
            VAR_19->band);
 }
}
