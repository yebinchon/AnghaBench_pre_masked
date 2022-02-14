
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ath_hw {int iniModesTxGain; TYPE_1__* eep_ops; } ;
struct TYPE_2__ {scalar_t__ (* get_eeprom ) (struct ath_hw*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct ath_hw*,int ) ;

__attribute__((used)) static void FUNC_2(struct ath_hw *VAR_5, u32 VAR_6)
{
 if (VAR_5->eep_ops->get_eeprom(VAR_5, VAR_2) >=
     VAR_0) {
  if (VAR_6 == VAR_1)
   FUNC_0(&VAR_5->iniModesTxGain,
           VAR_3);
  else
   FUNC_0(&VAR_5->iniModesTxGain,
           VAR_4);
 } else {
  FUNC_0(&VAR_5->iniModesTxGain,
          VAR_4);
 }
}
