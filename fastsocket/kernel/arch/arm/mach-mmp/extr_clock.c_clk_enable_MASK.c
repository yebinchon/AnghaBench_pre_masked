
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {TYPE_1__* ops; int enabled; } ;
struct TYPE_2__ {int (* enable ) (struct clk*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct clk*) ;

int FUNC_3(struct clk *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_0, VAR_2);
 if (VAR_1->enabled++ == 0)
  VAR_1->ops->enable(VAR_1);
 FUNC_1(&VAR_0, VAR_2);
 return 0;
}
