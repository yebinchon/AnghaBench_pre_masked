
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct lbs_private {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cmd_ds_mesh_config {int* data; int length; } ;
typedef int ssize_t ;
typedef int cmd ;
struct TYPE_2__ {struct lbs_private* ml_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,struct cmd_ds_mesh_config*,int ,int ) ;
 int FUNC_2 (struct cmd_ds_mesh_config*,int ,int) ;
 int FUNC_3 (char const*,char*,int*) ;
 int FUNC_4 (char const*) ;
 TYPE_1__* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
  struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct lbs_private *VAR_7 = FUNC_5(VAR_3)->ml_priv;
 struct cmd_ds_mesh_config VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_10 = FUNC_3(VAR_5, "%d", &VAR_9);
 if ((VAR_10 != 1) || (VAR_9 > 255))
  return -VAR_2;
 VAR_9 = (VAR_9 < 20) ? 20 : VAR_9;
 VAR_8.data[0] = VAR_9;
 VAR_8.length = FUNC_0(sizeof(uint8_t));
 VAR_10 = FUNC_1(VAR_7, &VAR_8, VAR_0,
       VAR_1);
 if (VAR_10)
  return VAR_10;

 return FUNC_4(VAR_5);
}
