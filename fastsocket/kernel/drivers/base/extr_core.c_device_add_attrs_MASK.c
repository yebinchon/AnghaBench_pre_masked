
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_type {int groups; } ;
struct device {int groups; struct device_type* type; struct class* class; } ;
struct class {int dev_attrs; } ;


 int FUNC_0 (struct device*,int ) ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct device*,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct class *VAR_1 = VAR_0->class;
 struct device_type *VAR_2 = VAR_0->type;
 int VAR_3;

 if (VAR_1) {
  VAR_3 = FUNC_0(VAR_0, VAR_1->dev_attrs);
  if (VAR_3)
   return VAR_3;
 }

 if (VAR_2) {
  VAR_3 = FUNC_1(VAR_0, VAR_2->groups);
  if (VAR_3)
   goto err_remove_class_attrs;
 }

 VAR_3 = FUNC_1(VAR_0, VAR_0->groups);
 if (VAR_3)
  goto err_remove_type_groups;

 return 0;

 err_remove_type_groups:
 if (VAR_2)
  FUNC_3(VAR_0, VAR_2->groups);
 err_remove_class_attrs:
 if (VAR_1)
  FUNC_2(VAR_0, VAR_1->dev_attrs);

 return VAR_3;
}
