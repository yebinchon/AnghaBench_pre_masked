
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ixgb_hw {int * eeprom; } ;
typedef int __le16 ;


 size_t VAR_0 ;
 int FUNC_0 (struct ixgb_hw*) ;

__le16
FUNC_1(struct ixgb_hw *VAR_1, u16 VAR_2)
{

 if ((VAR_2 < VAR_0) &&
  (FUNC_0(VAR_1) == 1)) {
    return(VAR_1->eeprom[VAR_2]);
 }

 return(0);
}
