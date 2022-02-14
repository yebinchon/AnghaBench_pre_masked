
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ VAR_1 ;

void FUNC_3(struct ixgbe_hw *VAR_2, bool VAR_3, int VAR_4)
{
 int VAR_5 = VAR_4 >> 3;
 int VAR_6 = VAR_4 % 8 + VAR_0;
 u32 VAR_7;

 if (VAR_2->mac.type == VAR_1)
  return;

 VAR_7 = FUNC_1(VAR_2, FUNC_0(VAR_5));
 if (VAR_3)
  VAR_7 |= (1 << VAR_6);
 else
  VAR_7 &= ~(1 << VAR_6);
 FUNC_2(VAR_2, FUNC_0(VAR_5), VAR_7);
}
