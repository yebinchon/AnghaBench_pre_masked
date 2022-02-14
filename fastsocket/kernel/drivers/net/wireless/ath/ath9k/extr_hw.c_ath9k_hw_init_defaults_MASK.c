
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ath_regulatory {int power_limit; int country_code; } ;
struct TYPE_2__ {scalar_t__ subvendorid; int magic; } ;
struct ath_hw {int sta_id1_defaults; int htc_reset_init; int power_mode; scalar_t__ globaltxtimeout; int slottime; scalar_t__ atim_window; TYPE_1__ hw_version; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ath_regulatory* FUNC_1 (struct ath_hw*) ;

__attribute__((used)) static void FUNC_2(struct ath_hw *VAR_8)
{
 struct ath_regulatory *VAR_9 = FUNC_1(VAR_8);

 VAR_9->country_code = VAR_6;
 VAR_9->power_limit = VAR_7;

 VAR_8->hw_version.magic = VAR_0;
 VAR_8->hw_version.subvendorid = 0;

 VAR_8->atim_window = 0;
 VAR_8->sta_id1_defaults =
  VAR_2 |
  VAR_3;
 if (FUNC_0(VAR_8))
  VAR_8->sta_id1_defaults |= VAR_1;
 VAR_8->slottime = VAR_5;
 VAR_8->globaltxtimeout = (u32) -1;
 VAR_8->power_mode = VAR_4;
 VAR_8->htc_reset_init = 1;
}
