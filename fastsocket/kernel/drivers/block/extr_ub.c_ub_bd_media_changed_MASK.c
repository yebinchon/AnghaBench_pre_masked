
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_lun {int changed; int udev; int removable; } ;
struct gendisk {struct ub_lun* private_data; } ;


 scalar_t__ FUNC_0 (int ,struct ub_lun*) ;

__attribute__((used)) static int FUNC_1(struct gendisk *VAR_0)
{
 struct ub_lun *VAR_1 = VAR_0->private_data;

 if (!VAR_1->removable)
  return 0;
 if (FUNC_0(VAR_1->udev, VAR_1) != 0) {
  VAR_1->changed = 1;
  return 1;
 }

 return VAR_1->changed;
}
