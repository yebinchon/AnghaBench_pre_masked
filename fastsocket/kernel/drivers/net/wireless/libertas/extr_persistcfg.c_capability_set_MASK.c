
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int mesh_capability; } ;
struct mrvl_meshie {TYPE_1__ val; } ;
struct mrvl_mesh_defaults {int meshie; } ;
struct lbs_private {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cmd_ds_mesh_config {int * data; int length; } ;
typedef int ssize_t ;
typedef int cmd ;
struct TYPE_4__ {struct lbs_private* ml_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,struct cmd_ds_mesh_config*,int ,int ) ;
 int FUNC_2 (struct mrvl_meshie*,int *,int) ;
 int FUNC_3 (struct cmd_ds_mesh_config*,int ,int) ;
 int FUNC_4 (struct device*,struct mrvl_mesh_defaults*) ;
 int FUNC_5 (char const*,char*,int*) ;
 int FUNC_6 (char const*) ;
 TYPE_2__* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3, struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct cmd_ds_mesh_config VAR_7;
 struct mrvl_mesh_defaults VAR_8;
 struct mrvl_meshie *VAR_9;
 struct lbs_private *VAR_10 = FUNC_7(VAR_3)->ml_priv;
 uint32_t VAR_11;
 int VAR_12;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_12 = FUNC_5(VAR_5, "%d", &VAR_11);
 if ((VAR_12 != 1) || (VAR_11 > 255))
  return -VAR_2;


 VAR_12 = FUNC_4(VAR_3, &VAR_8);

 VAR_7.length = FUNC_0(sizeof(struct mrvl_meshie));


 VAR_9 = (struct mrvl_meshie *) &VAR_7.data[0];
 FUNC_2(VAR_9, &VAR_8.meshie, sizeof(struct mrvl_meshie));

 VAR_9->val.mesh_capability = VAR_11;

 VAR_12 = FUNC_1(VAR_10, &VAR_7, VAR_0,
       VAR_1);
 if (VAR_12)
  return VAR_12;

 return FUNC_6(VAR_5);
}
