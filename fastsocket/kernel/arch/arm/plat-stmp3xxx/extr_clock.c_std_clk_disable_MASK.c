
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {int enable_shift; scalar_t__ enable_reg; scalar_t__ enable_negate; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_1)
{
 if (VAR_1->enable_reg) {
  u32 VAR_2 = FUNC_0(VAR_1->enable_reg);
  if (VAR_1->enable_negate)
   VAR_2 |= (1 << VAR_1->enable_shift);
  else
   VAR_2 &= ~(1 << VAR_1->enable_shift);
  FUNC_1(VAR_2, VAR_1->enable_reg);
  return 0;
 } else
  return -VAR_0;
}
