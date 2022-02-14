
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {scalar_t__ usage; struct clk* parent; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* disable ) (struct clk*) ;} ;


 int FUNC_0 (struct clk*) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct clk*) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct clk *VAR_1)
{
 unsigned long VAR_2;

 if (FUNC_4(!FUNC_0(VAR_1)))
  return;

 FUNC_1(&VAR_0, VAR_2);

 if ((--VAR_1->usage) == 0 && VAR_1->ops->disable)
  VAR_1->ops->disable(VAR_1);

 FUNC_2(&VAR_0, VAR_2);
 if (VAR_1->parent)
  FUNC_5(VAR_1->parent);
}
