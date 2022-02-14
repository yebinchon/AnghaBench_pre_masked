
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {scalar_t__ usage; struct clk* parent; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* disable ) (struct clk*) ;} ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct clk *VAR_0)
{
 if (FUNC_2(!FUNC_0(VAR_0)))
  return;

 if (VAR_0->usage == 0 && VAR_0->ops->disable)
  VAR_0->ops->disable(VAR_0);

 if (VAR_0->parent)
  FUNC_3(VAR_0->parent);
}
