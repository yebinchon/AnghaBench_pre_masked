
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {scalar_t__ usecount; int flags; struct clk* parent; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* disable ) (struct clk*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;

__attribute__((used)) static void FUNC_3(struct clk *VAR_1)
{
 if (VAR_1->usecount > 0 && !(--VAR_1->usecount)) {
  VAR_1->ops->disable(VAR_1);
  if (FUNC_0(VAR_1->parent)) {
   FUNC_3(VAR_1->parent);
   if (VAR_1->flags & VAR_0)
    FUNC_1(VAR_1->parent);
  }
 }
}
