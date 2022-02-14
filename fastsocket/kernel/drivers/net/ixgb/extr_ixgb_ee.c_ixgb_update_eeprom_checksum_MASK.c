
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ixgb_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ixgb_hw*,scalar_t__) ;
 int FUNC_1 (struct ixgb_hw*,scalar_t__,scalar_t__) ;

void
FUNC_2(struct ixgb_hw *VAR_2)
{
 u16 VAR_3 = 0;
 u16 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3 += FUNC_0(VAR_2, VAR_4);

 VAR_3 = (u16) VAR_1 - VAR_3;

 FUNC_1(VAR_2, VAR_0, VAR_3);
 return;
}
