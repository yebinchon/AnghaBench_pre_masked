
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {int rate; int scale_reg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_0, u32 VAR_1)
{
 u32 VAR_2;
 VAR_2 = FUNC_0(VAR_0->scale_reg);
 VAR_2 = VAR_2 & ~0x3;
 switch (VAR_1) {
 case 1:
  break;
 case 2:
  VAR_2 |= 1;
  break;
 case 4:
  VAR_2 |= 2;
  break;
 }

 FUNC_1(VAR_2, VAR_0->scale_reg);
 VAR_0->rate = VAR_1;
 return 0;
}
