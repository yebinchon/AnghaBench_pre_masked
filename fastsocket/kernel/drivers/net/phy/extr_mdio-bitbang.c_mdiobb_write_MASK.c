
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mii_bus {struct mdiobb_ctrl* priv; } ;
struct mdiobb_ctrl {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_mdio_dir ) (struct mdiobb_ctrl*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mdiobb_ctrl*,int ,int,int) ;
 int FUNC_1 (struct mdiobb_ctrl*) ;
 int FUNC_2 (struct mdiobb_ctrl*,int) ;
 int FUNC_3 (struct mdiobb_ctrl*,int ,int) ;
 int FUNC_4 (struct mdiobb_ctrl*,int ) ;

__attribute__((used)) static int FUNC_5(struct mii_bus *VAR_1, int VAR_2, int VAR_3, u16 VAR_4)
{
 struct mdiobb_ctrl *VAR_5 = VAR_1->priv;

 FUNC_0(VAR_5, VAR_0, VAR_2, VAR_3);


 FUNC_2(VAR_5, 1);
 FUNC_2(VAR_5, 0);

 FUNC_3(VAR_5, VAR_4, 16);

 VAR_5->ops->set_mdio_dir(VAR_5, 0);
 FUNC_1(VAR_5);
 return 0;
}
