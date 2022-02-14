
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct cx_drv {struct cx_device_id* id_table; } ;
struct cx_device_id {scalar_t__ part_num; } ;
struct TYPE_2__ {scalar_t__ part_num; } ;
struct cx_dev {TYPE_1__ cx_id; } ;


 struct cx_dev* FUNC_0 (struct device*) ;
 struct cx_drv* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct cx_dev *VAR_2 = FUNC_0(VAR_0);
 struct cx_drv *VAR_3 = FUNC_1(VAR_1);
 const struct cx_device_id *VAR_4 = VAR_3->id_table;

 if (!VAR_4)
  return 0;

 while (VAR_4->part_num) {
  if (VAR_4->part_num == VAR_2->cx_id.part_num)
   return 1;
  VAR_4++;
 }
 return 0;

}
