
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ VAR_2 ;

void FUNC_2(struct ixgbe_hw *VAR_3, bool VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7 = VAR_5 >> 3;
 int VAR_8 = VAR_5 % 8;
 u32 VAR_9 = 0;

 if (VAR_3->mac.type == VAR_2)
  return;

 if (VAR_4)
  VAR_9 = VAR_1;





 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  FUNC_1(VAR_3, FUNC_0(VAR_6), VAR_9);





 VAR_9 &= (1 << VAR_8) - 1;
 FUNC_1(VAR_3, FUNC_0(VAR_6), VAR_9);





 for (VAR_6++; VAR_6 < VAR_0; VAR_6++)
  FUNC_1(VAR_3, FUNC_0(VAR_6), 0);
}
