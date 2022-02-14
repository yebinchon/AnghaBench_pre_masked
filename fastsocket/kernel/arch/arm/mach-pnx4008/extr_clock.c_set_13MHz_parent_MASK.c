
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk VAR_1 ;
 struct clk VAR_2 ;
 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_3, struct clk *VAR_4)
{
 int VAR_5 = -VAR_0;

 if (VAR_4 == &VAR_1)
  VAR_5 = FUNC_0(VAR_3);
 else if (VAR_4 == &VAR_2)
  VAR_5 = FUNC_1(VAR_3);

 return VAR_5;
}
