
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_device_info {int cdev; int ro_mode; int min_io_size; int leb_size; int ubi_num; } ;
struct TYPE_2__ {int dev; } ;
struct ubi_device {TYPE_1__ cdev; int ro_mode; int min_io_size; int leb_size; int ubi_num; } ;



void FUNC_0(struct ubi_device *VAR_0, struct ubi_device_info *VAR_1)
{
 VAR_1->ubi_num = VAR_0->ubi_num;
 VAR_1->leb_size = VAR_0->leb_size;
 VAR_1->min_io_size = VAR_0->min_io_size;
 VAR_1->ro_mode = VAR_0->ro_mode;
 VAR_1->cdev = VAR_0->cdev.dev;
}
