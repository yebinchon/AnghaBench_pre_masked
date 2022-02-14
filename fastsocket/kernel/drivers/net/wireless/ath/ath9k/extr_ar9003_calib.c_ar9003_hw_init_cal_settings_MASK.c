
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * calData; } ;
struct ath_hw {int supp_cals; int enabled_cals; TYPE_1__ iq_caldata; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_4)
{
 VAR_4->iq_caldata.calData = &VAR_3;

 if (FUNC_0(VAR_4)) {
  VAR_4->enabled_cals |= VAR_1;
  if (FUNC_2(VAR_4) && !FUNC_1(VAR_4))
   VAR_4->enabled_cals |= VAR_2;
 }

 VAR_4->supp_cals = VAR_0;
}
