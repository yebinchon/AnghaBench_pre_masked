
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {TYPE_1__* ops; int usage; struct clk* parent; } ;
struct TYPE_2__ {int (* enable ) (struct clk*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct clk*) ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct clk*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct clk *VAR_2)
{
 unsigned long VAR_3;

 if (FUNC_4(!FUNC_0(VAR_2)))
  return -VAR_0;

 if (VAR_2->parent)
  FUNC_5(VAR_2->parent);

 FUNC_1(&VAR_1, VAR_3);

 VAR_2->usage++;
 if (VAR_2->ops && VAR_2->ops->enable)
  VAR_2->ops->enable(VAR_2);

 FUNC_2(&VAR_1, VAR_3);
 return 0;
}
