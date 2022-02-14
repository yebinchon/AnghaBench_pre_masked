
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcp {int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {unsigned int (* reg_read ) (struct mcp*,unsigned int) ;} ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 unsigned int FUNC_2 (struct mcp*,unsigned int) ;

unsigned int FUNC_3(struct mcp *VAR_0, unsigned int VAR_1)
{
 unsigned long VAR_2;
 unsigned int VAR_3;

 FUNC_0(&VAR_0->lock, VAR_2);
 VAR_3 = VAR_0->ops->reg_read(VAR_0, VAR_1);
 FUNC_1(&VAR_0->lock, VAR_2);

 return VAR_3;
}
