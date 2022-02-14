
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcp {int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_telecom_divisor ) (struct mcp*,unsigned int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mcp*,unsigned int) ;

void FUNC_3(struct mcp *VAR_0, unsigned int VAR_1)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->ops->set_telecom_divisor(VAR_0, VAR_1);
 FUNC_1(&VAR_0->lock);
}
