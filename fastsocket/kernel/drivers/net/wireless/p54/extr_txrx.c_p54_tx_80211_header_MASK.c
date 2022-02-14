
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct p54_common {int mode; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_sta {int aid; } ;
struct ieee80211_hdr {int frame_control; } ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct p54_common *VAR_13, struct sk_buff *VAR_14,
    struct ieee80211_tx_info *VAR_15,
    struct ieee80211_sta *VAR_16,
    u8 *VAR_17, u32 *VAR_18, u16 *VAR_19, u16 *VAR_20,
    bool *VAR_21)
{
 struct ieee80211_hdr *VAR_22 = (struct ieee80211_hdr *)VAR_14->data;

 if (FUNC_1(VAR_22->frame_control))
  *VAR_21 = 1;
 else
  *VAR_21 = 0;

 if (!(VAR_15->flags & VAR_1))
  *VAR_19 |= VAR_8;

 if (VAR_15->flags & VAR_4)
  *VAR_19 |= VAR_6;

 if (VAR_15->flags & VAR_2)
  *VAR_19 |= VAR_6;

 *VAR_17 = FUNC_4(VAR_14) + VAR_12;

 switch (VAR_13->mode) {
 case 129:





  *VAR_20 = 0;
  *VAR_19 |= VAR_7;
  break;
 case 128:
  *VAR_20 = 1;
  break;
 case 131:
 case 132:
 case 130:
  if (VAR_15->flags & VAR_5) {
   *VAR_20 = 0;
   *VAR_17 = VAR_11;
   return;
  }

  if (FUNC_5(FUNC_2(VAR_22->frame_control))) {
   if (FUNC_3(VAR_22->frame_control)) {
    *VAR_20 = 0;
    *VAR_19 |= VAR_9 |
       VAR_6;
    return;
   } else if (FUNC_0(VAR_22->frame_control)) {
    *VAR_20 = 0;

    if (VAR_15->flags & VAR_3) {






     return;
    }

    *VAR_19 |= VAR_9;
    *VAR_17 = VAR_10;
    *VAR_18 = VAR_0;
    return;
   }
  }

  if (VAR_16)
   *VAR_20 = VAR_16->aid;
  break;
 }
}
