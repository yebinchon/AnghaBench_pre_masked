
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_driver {scalar_t__ id_table; } ;
struct platform_device {int name; } ;
struct device_driver {int name; } ;
struct device {int dummy; } ;


 int * FUNC_0 (scalar_t__,struct platform_device*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct platform_device* FUNC_2 (struct device*) ;
 struct platform_driver* FUNC_3 (struct device_driver*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_2(VAR_0);
 struct platform_driver *VAR_3 = FUNC_3(VAR_1);


 if (VAR_3->id_table)
  return FUNC_0(VAR_3->id_table, VAR_2) != ((void*)0);


 return (FUNC_1(VAR_2->name, VAR_1->name) == 0);
}
