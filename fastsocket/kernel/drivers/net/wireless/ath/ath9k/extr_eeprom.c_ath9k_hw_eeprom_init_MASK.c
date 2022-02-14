
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ath_hw {TYPE_1__* eep_ops; } ;
struct TYPE_5__ {int (* check_eeprom ) (struct ath_hw*) ;int (* fill_eeprom ) (struct ath_hw*) ;} ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;

int FUNC_6(struct ath_hw *VAR_5)
{
 int VAR_6;

 if (FUNC_3(VAR_5))
  VAR_5->eep_ops = &VAR_3;
 else if (FUNC_2(VAR_5)) {
  VAR_5->eep_ops = &VAR_2;
 } else if (FUNC_1(VAR_5) || FUNC_0(VAR_5)) {
  VAR_5->eep_ops = &VAR_1;
 } else {
  VAR_5->eep_ops = &VAR_4;
 }

 if (!VAR_5->eep_ops->fill_eeprom(VAR_5))
  return -VAR_0;

 VAR_6 = VAR_5->eep_ops->check_eeprom(VAR_5);

 return VAR_6;
}
