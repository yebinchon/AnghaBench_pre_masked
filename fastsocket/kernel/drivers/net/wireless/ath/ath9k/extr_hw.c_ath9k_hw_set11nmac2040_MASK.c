
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ieee80211_conf {int dummy; } ;
struct TYPE_5__ {int cwm_ignore_extcca; } ;
struct ath_hw {TYPE_2__ config; } ;
struct TYPE_6__ {TYPE_1__* hw; } ;
struct TYPE_4__ {struct ieee80211_conf conf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,int ,scalar_t__) ;
 TYPE_3__* FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ieee80211_conf*) ;

void FUNC_3(struct ath_hw *VAR_2)
{
 struct ieee80211_conf *VAR_3 = &FUNC_1(VAR_2)->hw->conf;
 u32 VAR_4;

 if (FUNC_2(VAR_3) && !VAR_2->config.cwm_ignore_extcca)
  VAR_4 = VAR_0;
 else
  VAR_4 = 0;

 FUNC_0(VAR_2, VAR_1, VAR_4);
}
