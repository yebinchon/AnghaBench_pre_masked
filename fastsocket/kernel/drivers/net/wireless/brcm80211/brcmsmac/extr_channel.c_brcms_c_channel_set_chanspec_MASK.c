
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct txpwr_limits {int dummy; } ;
struct ieee80211_reg_rule {int flags; } ;
struct ieee80211_channel {int flags; int center_freq; } ;
struct brcms_cm_info {struct brcms_c_info* wlc; } ;
struct brcms_c_info {int hw; TYPE_5__* protection; int wiphy; TYPE_4__* pub; } ;
struct TYPE_10__ {int gmode_user; } ;
struct TYPE_9__ {TYPE_3__* ieee_hw; } ;
struct TYPE_6__ {struct ieee80211_channel* chan; } ;
struct TYPE_7__ {TYPE_1__ chandef; } ;
struct TYPE_8__ {TYPE_2__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_reg_rule const*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int,struct txpwr_limits*) ;
 int FUNC_2 (struct brcms_cm_info*,struct txpwr_limits*,int ) ;
 int FUNC_3 (struct brcms_cm_info*,int ,struct txpwr_limits*) ;
 int FUNC_4 (struct brcms_c_info*,int ,int) ;
 struct ieee80211_reg_rule* FUNC_5 (int ,int ) ;

void
FUNC_6(struct brcms_cm_info *VAR_3, u16 VAR_4,
    u8 VAR_5)
{
 struct brcms_c_info *VAR_6 = VAR_3->wlc;
 struct ieee80211_channel *VAR_7 = VAR_6->pub->ieee_hw->conf.chandef.chan;
 const struct ieee80211_reg_rule *VAR_8;
 struct txpwr_limits VAR_9;

 FUNC_3(VAR_3, VAR_4, &VAR_9);

 FUNC_2(
  VAR_3, &VAR_9, VAR_5
 );


 VAR_8 = FUNC_5(VAR_6->wiphy, VAR_7->center_freq);
 if (!FUNC_0(VAR_8) && (VAR_8->flags & VAR_2))
  FUNC_4(VAR_6, VAR_0, 0);
 else
  FUNC_4(VAR_6, VAR_6->protection->gmode_user, 0);

 FUNC_1(VAR_6->hw, VAR_4,
         !!(VAR_7->flags & VAR_1),
         &VAR_9);
}
