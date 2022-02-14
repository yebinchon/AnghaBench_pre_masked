
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {int ah_mibStats; TYPE_1__* curchan; } ;
struct ar5416AniState {scalar_t__ cckPhyErrCount; scalar_t__ ofdmPhyErrCount; scalar_t__ listenTime; } ;
struct TYPE_2__ {struct ar5416AniState ani; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int ,int ) ;
 int FUNC_4 (struct ath_hw*,int *) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_6)
{
 struct ar5416AniState *VAR_7;

 if (!FUNC_0(VAR_6))
  return;

 VAR_7 = &VAR_6->curchan->ani;
 VAR_7->listenTime = 0;

 FUNC_1(VAR_6);

 FUNC_3(VAR_6, VAR_0, 0);
 FUNC_3(VAR_6, VAR_1, 0);
 FUNC_3(VAR_6, VAR_3, VAR_5);
 FUNC_3(VAR_6, VAR_4, VAR_2);

 FUNC_2(VAR_6);

 FUNC_4(VAR_6, &VAR_6->ah_mibStats);

 VAR_7->ofdmPhyErrCount = 0;
 VAR_7->cckPhyErrCount = 0;
}
