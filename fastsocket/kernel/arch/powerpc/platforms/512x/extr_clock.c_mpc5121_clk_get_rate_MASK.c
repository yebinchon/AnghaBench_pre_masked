
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int flags; unsigned long rate; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(struct clk *VAR_1)
{
 if (VAR_1->flags & VAR_0)
  return VAR_1->rate;
 else
  return 0;
}
