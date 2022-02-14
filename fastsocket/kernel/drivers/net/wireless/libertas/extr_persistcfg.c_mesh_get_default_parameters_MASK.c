
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mrvl_mesh_defaults {int dummy; } ;
struct lbs_private {int dummy; } ;
struct device {int dummy; } ;
struct cmd_ds_mesh_config {int * data; } ;
struct TYPE_2__ {struct lbs_private* ml_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lbs_private*,struct cmd_ds_mesh_config*,int ,int ) ;
 int FUNC_1 (struct mrvl_mesh_defaults*,int *,int) ;
 int FUNC_2 (struct cmd_ds_mesh_config*,int ,int) ;
 TYPE_1__* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3,
           struct mrvl_mesh_defaults *VAR_4)
{
 struct lbs_private *VAR_5 = FUNC_3(VAR_3)->ml_priv;
 struct cmd_ds_mesh_config VAR_6;
 int VAR_7;

 FUNC_2(&VAR_6, 0, sizeof(struct cmd_ds_mesh_config));
 VAR_7 = FUNC_0(VAR_5, &VAR_6, VAR_0,
       VAR_1);

 if (VAR_7)
  return -VAR_2;

 FUNC_1(VAR_4, &VAR_6.data[0], sizeof(struct mrvl_mesh_defaults));

 return 0;
}
