
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {scalar_t__ users; struct clk* parent; int (* mode ) (struct clk*,int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct clk*,int ) ;

__attribute__((used)) static void FUNC_2(struct clk *VAR_0)
{
 FUNC_0(VAR_0->users == 0);
 if (--VAR_0->users == 0 && VAR_0->mode)
  VAR_0->mode(VAR_0, 0);
 if (VAR_0->parent)
  FUNC_2(VAR_0->parent);
}
