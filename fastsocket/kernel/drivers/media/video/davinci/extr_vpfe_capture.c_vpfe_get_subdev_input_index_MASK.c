
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_subdev_info {int num_inputs; } ;
struct vpfe_device {struct vpfe_config* cfg; } ;
struct vpfe_config {int num_subdevs; struct vpfe_subdev_info* sub_devs; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct vpfe_device *VAR_1,
     int *VAR_2,
     int *VAR_3,
     int VAR_4)
{
 struct vpfe_config *VAR_5 = VAR_1->cfg;
 struct vpfe_subdev_info *VAR_6;
 int VAR_7, VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_subdevs; VAR_7++) {
  VAR_6 = &VAR_5->sub_devs[VAR_7];
  if (VAR_4 < (VAR_8 + VAR_6->num_inputs)) {
   *VAR_2 = VAR_7;
   *VAR_3 = VAR_4 - VAR_8;
   return 0;
  }
  VAR_8 += VAR_6->num_inputs;
 }
 return -VAR_0;
}
