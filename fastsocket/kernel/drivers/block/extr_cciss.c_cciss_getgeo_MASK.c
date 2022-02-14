
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hd_geometry {scalar_t__ cylinders; int sectors; int heads; } ;
struct block_device {int bd_disk; } ;
struct TYPE_3__ {scalar_t__ cylinders; int sectors; int heads; } ;
typedef TYPE_1__ drive_info_struct ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_1, struct hd_geometry *VAR_2)
{
 drive_info_struct *VAR_3 = FUNC_0(VAR_1->bd_disk);

 if (!VAR_3->cylinders)
  return -VAR_0;

 VAR_2->heads = VAR_3->heads;
 VAR_2->sectors = VAR_3->sectors;
 VAR_2->cylinders = VAR_3->cylinders;
 return 0;
}
