
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct clk {int rate; } ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_0, u32 VAR_1)
{
 if (VAR_1) {
  FUNC_0(VAR_0);
  VAR_0->rate = 1;
 } else {
  FUNC_1(VAR_0);
  VAR_0->rate = 0;
 }
 return 0;
}
