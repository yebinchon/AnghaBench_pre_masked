
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct clk {unsigned long rate; } ;







 int FUNC_0 () ;

__attribute__((used)) static unsigned long FUNC_1(struct clk *VAR_0)
{
 u16 VAR_1;

 VAR_1 = FUNC_0();

 switch (VAR_1) {
 case 128:
 case 129:
  return 6500000;
 case 130:
  return 26000000;
 case 131:
 case 132:
  return 52000000;
 default:
  break;
 }
 return VAR_0->rate;

}
