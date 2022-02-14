
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int array_sectors; } ;
struct hd_geometry {int heads; int sectors; int cylinders; } ;
struct block_device {TYPE_1__* bd_disk; } ;
struct TYPE_2__ {struct mddev* private_data; } ;



__attribute__((used)) static int FUNC_0(struct block_device *VAR_0, struct hd_geometry *VAR_1)
{
 struct mddev *VAR_2 = VAR_0->bd_disk->private_data;

 VAR_1->heads = 2;
 VAR_1->sectors = 4;
 VAR_1->cylinders = VAR_2->array_sectors / 8;
 return 0;
}
