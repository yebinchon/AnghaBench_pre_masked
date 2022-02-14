
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {size_t bd_number; } ;


 scalar_t__* VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;

bool FUNC_0(struct ixgbe_adapter *VAR_3)
{
 if (VAR_2 <= VAR_3->bd_number)
  return 1;

 if (VAR_0[VAR_3->bd_number] == VAR_1)
  return 1;

 return 0;

}
