
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ath_hw {int iniModesRxGain; TYPE_1__* eep_ops; } ;
struct TYPE_2__ {scalar_t__ (* get_eeprom ) (struct ath_hw*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct ath_hw*,int ) ;
 scalar_t__ FUNC_2 (struct ath_hw*,int ) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_8)
{
 u32 VAR_9;

 if (VAR_8->eep_ops->get_eeprom(VAR_8, VAR_3) >=
     VAR_0) {
  VAR_9 = VAR_8->eep_ops->get_eeprom(VAR_8, VAR_4);

  if (VAR_9 == VAR_1)
   FUNC_0(&VAR_8->iniModesRxGain,
           VAR_5);
  else if (VAR_9 == VAR_2)
   FUNC_0(&VAR_8->iniModesRxGain,
           VAR_6);
  else
   FUNC_0(&VAR_8->iniModesRxGain,
           VAR_7);
 } else {
  FUNC_0(&VAR_8->iniModesRxGain,
          VAR_7);
 }
}
