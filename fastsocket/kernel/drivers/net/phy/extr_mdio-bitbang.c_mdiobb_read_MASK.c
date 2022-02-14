
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_bus {struct mdiobb_ctrl* priv; } ;
struct mdiobb_ctrl {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_mdio_dir ) (struct mdiobb_ctrl*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mdiobb_ctrl*,int ,int,int) ;
 scalar_t__ FUNC_1 (struct mdiobb_ctrl*) ;
 int FUNC_2 (struct mdiobb_ctrl*,int) ;
 int FUNC_3 (struct mdiobb_ctrl*,int ) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_1, int VAR_2, int VAR_3)
{
 struct mdiobb_ctrl *VAR_4 = VAR_1->priv;
 int VAR_5, VAR_6;

 FUNC_0(VAR_4, VAR_0, VAR_2, VAR_3);
 VAR_4->ops->set_mdio_dir(VAR_4, 0);


 if (FUNC_1(VAR_4) != 0) {



  for (VAR_6 = 0; VAR_6 < 32; VAR_6++)
   FUNC_1(VAR_4);

  return 0xffff;
 }

 VAR_5 = FUNC_2(VAR_4, 16);
 FUNC_1(VAR_4);
 return VAR_5;
}
