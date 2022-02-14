
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {TYPE_1__* eep_ops; } ;
struct ath9k_channel {int dummy; } ;
typedef enum eeprom_param { ____Placeholder_eeprom_param } eeprom_param ;
struct TYPE_2__ {int (* get_eeprom ) (struct ath_hw*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 int FUNC_1 (struct ath_hw*,int) ;

__attribute__((used)) static int FUNC_2(struct ath_hw *VAR_2, struct ath9k_channel *VAR_3)
{
 enum eeprom_param VAR_4;

 if (FUNC_0(VAR_3))
  VAR_4 = VAR_0;
 else
  VAR_4 = VAR_1;

 return VAR_2->eep_ops->get_eeprom(VAR_2, VAR_4);
}
