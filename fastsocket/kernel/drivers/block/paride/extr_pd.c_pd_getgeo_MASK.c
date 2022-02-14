
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pd_unit {int capacity; int heads; int sectors; int cylinders; scalar_t__ alt_geom; } ;
struct hd_geometry {int heads; int sectors; int cylinders; } ;
struct block_device {TYPE_1__* bd_disk; } ;
struct TYPE_2__ {struct pd_unit* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct block_device *VAR_2, struct hd_geometry *VAR_3)
{
 struct pd_unit *VAR_4 = VAR_2->bd_disk->private_data;

 if (VAR_4->alt_geom) {
  VAR_3->heads = VAR_0;
  VAR_3->sectors = VAR_1;
  VAR_3->cylinders = VAR_4->capacity / (VAR_3->heads * VAR_3->sectors);
 } else {
  VAR_3->heads = VAR_4->heads;
  VAR_3->sectors = VAR_4->sectors;
  VAR_3->cylinders = VAR_4->cylinders;
 }

 return 0;
}
