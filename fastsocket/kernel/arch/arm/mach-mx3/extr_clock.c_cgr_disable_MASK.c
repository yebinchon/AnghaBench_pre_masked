
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {int enable_shift; int enable_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct clk *VAR_1)
{
 u32 VAR_2;

 if (!VAR_1->enable_reg)
  return;

 VAR_2 = FUNC_0(VAR_1->enable_reg);
 VAR_2 &= ~(3 << VAR_1->enable_shift);


 if (VAR_1->enable_reg == VAR_0 && VAR_1->enable_shift == 8)
  VAR_2 |= (1 << VAR_1->enable_shift);

 FUNC_1(VAR_2, VAR_1->enable_reg);
}
