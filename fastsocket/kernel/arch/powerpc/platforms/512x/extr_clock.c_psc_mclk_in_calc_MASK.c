
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int rate; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct clk *VAR_0)
{
 VAR_0->rate = FUNC_0("psc_mclk_in");
 if (!VAR_0->rate)
  VAR_0->rate = 25000000;
}
