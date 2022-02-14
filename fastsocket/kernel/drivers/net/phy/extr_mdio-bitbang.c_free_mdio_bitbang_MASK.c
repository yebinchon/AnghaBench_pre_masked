
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_bus {struct mdiobb_ctrl* priv; } ;
struct mdiobb_ctrl {TYPE_1__* ops; } ;
struct TYPE_2__ {int owner; } ;


 int FUNC_0 (struct mii_bus*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct mii_bus *VAR_0)
{
 struct mdiobb_ctrl *VAR_1 = VAR_0->priv;

 FUNC_1(VAR_1->ops->owner);
 FUNC_0(VAR_0);
}
