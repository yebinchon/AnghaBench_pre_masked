
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int iniModesTxGain; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_3)
{
 if (FUNC_0(VAR_3))
  FUNC_2(&VAR_3->iniModesTxGain,
   VAR_1);
 else if (FUNC_1(VAR_3))
  FUNC_2(&VAR_3->iniModesTxGain,
   VAR_2);
 else
  FUNC_2(&VAR_3->iniModesTxGain,
   VAR_0);
}
