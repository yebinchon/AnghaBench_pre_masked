
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mspro_block_data {int cylinders; int sectors_per_track; int heads; } ;
struct hd_geometry {int cylinders; int sectors; int heads; } ;
struct block_device {TYPE_1__* bd_disk; } ;
struct TYPE_2__ {struct mspro_block_data* private_data; } ;



__attribute__((used)) static int FUNC_0(struct block_device *VAR_0,
     struct hd_geometry *VAR_1)
{
 struct mspro_block_data *VAR_2 = VAR_0->bd_disk->private_data;

 VAR_1->heads = VAR_2->heads;
 VAR_1->sectors = VAR_2->sectors_per_track;
 VAR_1->cylinders = VAR_2->cylinders;

 return 0;
}
