
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int enable_shift; int enable_reg; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_0)
{
 unsigned long VAR_1;

 if (!VAR_0->enable_reg)
  return 0;

 VAR_1 = FUNC_0(VAR_0->enable_reg);
 VAR_1 |= 1 << VAR_0->enable_shift;
 FUNC_1(VAR_1, VAR_0->enable_reg);

 return 0;
}
