
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {int dummy; } ;
struct macio_driver {struct of_device_id* match_table; } ;
struct macio_dev {int ofdev; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 int * FUNC_0 (struct of_device_id const*,int *) ;
 struct macio_dev* FUNC_1 (struct device*) ;
 struct macio_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct macio_dev * VAR_2 = FUNC_1(VAR_0);
 struct macio_driver * VAR_3 = FUNC_2(VAR_1);
 const struct of_device_id * VAR_4 = VAR_3->match_table;

 if (!VAR_4)
  return 0;

 return FUNC_0(VAR_4, &VAR_2->ofdev) != ((void*)0);
}
