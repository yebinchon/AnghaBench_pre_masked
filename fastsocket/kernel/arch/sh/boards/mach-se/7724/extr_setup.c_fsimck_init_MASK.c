
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {int enable_reg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct clk *VAR_0)
{
 u32 VAR_1 = FUNC_0(VAR_0->enable_reg);


 VAR_1 &= ~0x000000ff;
 VAR_1 |= 0x00000080;
 FUNC_1(VAR_1, VAR_0->enable_reg);
}
