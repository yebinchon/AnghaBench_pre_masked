
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrvl_mesh_defaults {int bootflag; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,struct mrvl_mesh_defaults*) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
       struct device_attribute *VAR_1, char *VAR_2)
{
 struct mrvl_mesh_defaults VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, &VAR_3);

 if (VAR_4)
  return VAR_4;

 return FUNC_2(VAR_2, 12, "%d\n", FUNC_0(VAR_3.bootflag));
}
