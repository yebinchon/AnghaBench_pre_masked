
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mdiobb_ops {int (* set_mdio_dir ) (struct mdiobb_ctrl*,int) ;} ;
struct mdiobb_ctrl {struct mdiobb_ops* ops; } ;


 int FUNC_0 (struct mdiobb_ctrl*,int) ;
 int FUNC_1 (struct mdiobb_ctrl*,int ,int) ;
 int FUNC_2 (struct mdiobb_ctrl*,int) ;

__attribute__((used)) static void FUNC_3(struct mdiobb_ctrl *VAR_0, int VAR_1, u8 VAR_2, u8 VAR_3)
{
 const struct mdiobb_ops *VAR_4 = VAR_0->ops;
 int VAR_5;

 VAR_4->set_mdio_dir(VAR_0, 1);
 for (VAR_5 = 0; VAR_5 < 32; VAR_5++)
  FUNC_0(VAR_0, 1);


 FUNC_0(VAR_0, 0);
 FUNC_0(VAR_0, 1);
 FUNC_0(VAR_0, VAR_1);
 FUNC_0(VAR_0, !VAR_1);

 FUNC_1(VAR_0, VAR_2, 5);
 FUNC_1(VAR_0, VAR_3, 5);
}
