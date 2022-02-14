
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int user_rate; struct clk* propagate_next; } ;


 int FUNC_0 (struct clk*,int ) ;

__attribute__((used)) static void FUNC_1(struct clk *VAR_0)
{
 struct clk *VAR_1;

 VAR_1 = VAR_0;
 while (VAR_1->propagate_next) {
  VAR_1 = VAR_1->propagate_next;
  FUNC_0(VAR_1, VAR_1->user_rate);
 }
}
