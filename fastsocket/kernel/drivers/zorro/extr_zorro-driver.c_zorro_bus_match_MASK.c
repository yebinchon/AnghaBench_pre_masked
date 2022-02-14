
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zorro_driver {struct zorro_device_id* id_table; } ;
struct zorro_device_id {scalar_t__ id; } ;
struct zorro_dev {scalar_t__ id; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct zorro_dev* FUNC_0 (struct device*) ;
 struct zorro_driver* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct device_driver *VAR_2)
{
 struct zorro_dev *VAR_3 = FUNC_0(VAR_1);
 struct zorro_driver *VAR_4 = FUNC_1(VAR_2);
 const struct zorro_device_id *VAR_5 = VAR_4->id_table;

 if (!VAR_5)
  return 0;

 while (VAR_5->id) {
  if (VAR_5->id == VAR_0 || VAR_5->id == VAR_3->id)
   return 1;
  VAR_5++;
 }
 return 0;
}
