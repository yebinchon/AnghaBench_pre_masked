
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {int enable_mask; unsigned long rate; int enable_reg; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_3, unsigned long VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_0(VAR_3->enable_reg);
 VAR_6 = VAR_3->enable_mask >> 15;

 if (VAR_4 == VAR_2)
  VAR_5 |= VAR_6;
 else if (VAR_4 == VAR_1)
  VAR_5 &= ~VAR_6;
 else
  return -VAR_0;

 FUNC_1(VAR_5, VAR_3->enable_reg);
 VAR_3->rate = VAR_4;
 return 0;
}
