
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_platform_driver {struct of_device_id* match_table; } ;
struct of_device_id {int dummy; } ;
struct of_device {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 int * FUNC_0 (struct of_device_id const*,struct of_device*) ;
 struct of_device* FUNC_1 (struct device*) ;
 struct of_platform_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct of_device *VAR_2 = FUNC_1(VAR_0);
 struct of_platform_driver *VAR_3 = FUNC_2(VAR_1);
 const struct of_device_id *VAR_4 = VAR_3->match_table;

 if (!VAR_4)
  return 0;

 return FUNC_0(VAR_4, VAR_2) != ((void*)0);
}
