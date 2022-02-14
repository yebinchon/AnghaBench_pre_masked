
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_lun {struct ub_dev* udev; } ;
struct ub_dev {int dummy; } ;
struct gendisk {struct ub_lun* private_data; } ;
typedef int fmode_t ;


 int FUNC_0 (struct ub_dev*) ;

__attribute__((used)) static int FUNC_1(struct gendisk *VAR_0, fmode_t VAR_1)
{
 struct ub_lun *VAR_2 = VAR_0->private_data;
 struct ub_dev *VAR_3 = VAR_2->udev;

 FUNC_0(VAR_3);
 return 0;
}
