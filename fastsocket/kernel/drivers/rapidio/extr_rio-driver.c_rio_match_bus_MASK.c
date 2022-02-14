
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_driver {struct rio_device_id* id_table; } ;
struct rio_device_id {int dummy; } ;
struct rio_dev {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct rio_device_id* FUNC_0 (struct rio_device_id const*,struct rio_dev*) ;
 struct rio_dev* FUNC_1 (struct device*) ;
 struct rio_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct rio_dev *VAR_2 = FUNC_1(VAR_0);
 struct rio_driver *VAR_3 = FUNC_2(VAR_1);
 const struct rio_device_id *VAR_4 = VAR_3->id_table;
 const struct rio_device_id *VAR_5;

 if (!VAR_4)
  goto out;

 VAR_5 = FUNC_0(VAR_4, VAR_2);

 if (VAR_5)
  return 1;

      out:return 0;
}
