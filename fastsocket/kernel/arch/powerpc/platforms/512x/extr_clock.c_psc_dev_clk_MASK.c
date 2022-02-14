
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int bit; int reg; } ;


 struct clk** VAR_0 ;

__attribute__((used)) static struct clk *FUNC_0(int VAR_1)
{
 int VAR_2, VAR_3;
 struct clk *VAR_4;

 VAR_2 = 0;
 VAR_3 = 27 - VAR_1;

 VAR_4 = &VAR_0[VAR_2][VAR_3];
 VAR_4->reg = 0;
 VAR_4->bit = VAR_3;
 return VAR_4;
}
