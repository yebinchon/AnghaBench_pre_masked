
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcp {int lock; TYPE_1__* ops; int use_count; } ;
struct TYPE_2__ {int (* enable ) (struct mcp*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mcp*) ;

void FUNC_3(struct mcp *VAR_0)
{
 FUNC_0(&VAR_0->lock);
 if (VAR_0->use_count++ == 0)
  VAR_0->ops->enable(VAR_0);
 FUNC_1(&VAR_0->lock);
}
