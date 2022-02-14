
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int active_metric_id; } ;
struct TYPE_4__ {TYPE_1__ val; } ;
struct mrvl_mesh_defaults {TYPE_2__ meshie; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*,struct mrvl_mesh_defaults*) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct mrvl_mesh_defaults VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, &VAR_3);

 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_2, 5, "%d\n", VAR_3.meshie.val.active_metric_id);
}
