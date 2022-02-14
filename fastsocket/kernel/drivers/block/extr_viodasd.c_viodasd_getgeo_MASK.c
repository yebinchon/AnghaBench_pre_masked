
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viodasd_device {int sectors; int tracks; int cylinders; } ;
struct hd_geometry {int sectors; int heads; int cylinders; } ;
struct gendisk {struct viodasd_device* private_data; } ;
struct block_device {struct gendisk* bd_disk; } ;


 int FUNC_0 (struct gendisk*) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_0, struct hd_geometry *VAR_1)
{
 struct gendisk *VAR_2 = VAR_0->bd_disk;
 struct viodasd_device *VAR_3 = VAR_2->private_data;

 VAR_1->sectors = VAR_3->sectors ? VAR_3->sectors : 32;
 VAR_1->heads = VAR_3->tracks ? VAR_3->tracks : 64;
 VAR_1->cylinders = VAR_3->cylinders ? VAR_3->cylinders :
  FUNC_0(VAR_2) / (VAR_1->sectors * VAR_1->heads);

 return 0;
}
