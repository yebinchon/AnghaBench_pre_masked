
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {TYPE_1__* curchan; } ;
struct ar5416AniState {scalar_t__ ofdmNoiseImmunityLevel; } ;
struct TYPE_2__ {struct ar5416AniState ani; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct ath_hw *VAR_1)
{
 struct ar5416AniState *VAR_2;

 if (!FUNC_0(VAR_1))
  return;

 VAR_2 = &VAR_1->curchan->ani;

 if (VAR_2->ofdmNoiseImmunityLevel < VAR_0)
  FUNC_1(VAR_1, VAR_2->ofdmNoiseImmunityLevel + 1, 0);
}
