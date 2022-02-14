
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* chan; } ;
struct ieee80211_conf {TYPE_2__ chandef; } ;
struct TYPE_7__ {int hw_caps; } ;
struct ath_hw {scalar_t__ curchan; TYPE_3__ caps; } ;
struct ath_common {unsigned int clockrate; TYPE_4__* hw; } ;
struct TYPE_8__ {struct ieee80211_conf conf; } ;
struct TYPE_5__ {scalar_t__ band; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ieee80211_conf*) ;

__attribute__((used)) static void FUNC_6(struct ath_hw *VAR_6)
{
 struct ieee80211_conf *VAR_7 = &FUNC_4(VAR_6)->hw->conf;
 struct ath_common *VAR_8 = FUNC_4(VAR_6);
 unsigned int VAR_9;


 if (FUNC_0(VAR_6) && FUNC_1(VAR_6))
  VAR_9 = 117;
 else if (!VAR_6->curchan)
  VAR_9 = VAR_3;
 else if (VAR_7->chandef.chan->band == VAR_5)
  VAR_9 = VAR_1;
 else if (VAR_6->caps.hw_caps & VAR_4)
  VAR_9 = VAR_0;
 else
  VAR_9 = VAR_2;

 if (FUNC_5(VAR_7))
  VAR_9 *= 2;

 if (VAR_6->curchan) {
  if (FUNC_2(VAR_6->curchan))
   VAR_9 /= 2;
  if (FUNC_3(VAR_6->curchan))
   VAR_9 /= 4;
 }

 VAR_8->clockrate = VAR_9;
}
