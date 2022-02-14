
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ieee80211_channel {int hw_value; } ;
struct brcms_c_info {int clk; int bandinit_pending; int WDarmed; TYPE_5__* stf; int wdtimer; TYPE_6__* hw; TYPE_4__* pub; int wl; struct brcms_bss_cfg* bsscfg; } ;
struct brcms_bss_cfg {scalar_t__ BSS; scalar_t__ enable; } ;
struct TYPE_15__ {int d11core; int sih; } ;
struct TYPE_14__ {int ldpc; } ;
struct TYPE_13__ {int hw_up; int boardflags; int boardrev; int up; TYPE_3__* ieee_hw; scalar_t__ radio_disabled; int unit; scalar_t__ hw_off; } ;
struct TYPE_10__ {struct ieee80211_channel* chan; } ;
struct TYPE_11__ {TYPE_1__ chandef; } ;
struct TYPE_12__ {TYPE_2__ conf; } ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (struct brcms_c_info*) ;
 int FUNC_7 (struct brcms_c_info*,int ) ;
 int FUNC_8 (struct brcms_c_info*) ;
 int FUNC_9 (struct brcms_c_info*) ;
 int FUNC_10 (struct brcms_c_info*,int ) ;
 int FUNC_11 (struct brcms_c_info*) ;
 int FUNC_12 (struct brcms_c_info*) ;
 int FUNC_13 (struct brcms_c_info*) ;
 int FUNC_14 (int ,char*,int ) ;
 scalar_t__ FUNC_15 (struct brcms_c_info*) ;
 int FUNC_16 (int ,char*,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (scalar_t__,int ) ;
 int FUNC_20 (scalar_t__,int ) ;

int FUNC_21(struct brcms_c_info *VAR_13)
{
 struct ieee80211_channel *VAR_14;

 FUNC_14(VAR_13->hw->d11core, "wl%d\n", VAR_13->pub->unit);


 if (VAR_13->pub->hw_off || FUNC_15(VAR_13))
  return -VAR_4;

 if (!VAR_13->pub->hw_up) {
  FUNC_2(VAR_13->hw);
  VAR_13->pub->hw_up = 1;
 }

 if ((VAR_13->pub->boardflags & VAR_1)
     && (FUNC_0(VAR_13->hw->sih) == VAR_0)) {
  if (VAR_13->pub->boardrev >= 0x1250
      && (VAR_13->pub->boardflags & VAR_2))
   FUNC_3(VAR_13->hw, VAR_9, VAR_10,
    VAR_10, VAR_3);
  else
   FUNC_3(VAR_13->hw, VAR_7, VAR_8,
        VAR_8, VAR_3);
 }
 if (!VAR_13->pub->radio_disabled) {
  int VAR_15 = FUNC_5(VAR_13->hw);
  if (VAR_15 == -VAR_4) {
   if (!FUNC_19
       (VAR_13->pub->radio_disabled, VAR_12)) {
    struct brcms_bss_cfg *VAR_16 = VAR_13->bsscfg;
    FUNC_20(VAR_13->pub->radio_disabled,
      VAR_12);

    if (VAR_16->enable && VAR_16->BSS)
     FUNC_16(VAR_13->hw->d11core,
        "wl%d: up: rfdisable -> "
        "bsscfg_disable()\n",
         VAR_13->pub->unit);
   }
  }
 }

 if (VAR_13->pub->radio_disabled) {
  FUNC_8(VAR_13);
  return 0;
 }


 VAR_13->clk = 1;

 FUNC_9(VAR_13);


 FUNC_3(VAR_13->hw, VAR_5, VAR_6, VAR_6, VAR_3);

 FUNC_17(VAR_13->wl);
 VAR_13->pub->up = 1;

 if (VAR_13->bandinit_pending) {
  VAR_14 = VAR_13->pub->ieee_hw->conf.chandef.chan;
  FUNC_12(VAR_13);
  FUNC_10(VAR_13, FUNC_18(VAR_14->hw_value));
  VAR_13->bandinit_pending = 0;
  FUNC_6(VAR_13);
 }

 FUNC_4(VAR_13->hw);


 FUNC_13(VAR_13);


 FUNC_1(VAR_13->wdtimer, VAR_11, 1);
 VAR_13->WDarmed = 1;


 FUNC_11(VAR_13);

 FUNC_7(VAR_13, VAR_13->stf->ldpc);

 return 0;
}
