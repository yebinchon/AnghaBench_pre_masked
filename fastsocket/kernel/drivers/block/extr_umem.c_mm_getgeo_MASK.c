
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hd_geometry {int heads; int sectors; int cylinders; } ;
struct cardinfo {int mm_size; } ;
struct block_device {TYPE_1__* bd_disk; } ;
struct TYPE_2__ {struct cardinfo* private_data; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct block_device *VAR_1, struct hd_geometry *VAR_2)
{
 struct cardinfo *VAR_3 = VAR_1->bd_disk->private_data;
 int VAR_4 = VAR_3->mm_size * (1024 / VAR_0);






 VAR_2->heads = 64;
 VAR_2->sectors = 32;
 VAR_2->cylinders = VAR_4 / (VAR_2->heads * VAR_2->sectors);
 return 0;
}
