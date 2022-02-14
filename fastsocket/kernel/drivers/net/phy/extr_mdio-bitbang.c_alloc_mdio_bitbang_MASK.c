
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_bus {struct mdiobb_ctrl* priv; int write; int read; } ;
struct mdiobb_ctrl {TYPE_1__* ops; } ;
struct TYPE_2__ {int owner; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mii_bus* FUNC_1 () ;

struct mii_bus *FUNC_2(struct mdiobb_ctrl *VAR_2)
{
 struct mii_bus *VAR_3;

 VAR_3 = FUNC_1();
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(VAR_2->ops->owner);

 VAR_3->read = VAR_0;
 VAR_3->write = VAR_1;
 VAR_3->priv = VAR_2;

 return VAR_3;
}
