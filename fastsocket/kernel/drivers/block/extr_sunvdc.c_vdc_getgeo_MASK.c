
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {int num_cyl; scalar_t__ num_sec; scalar_t__ num_hd; } ;
struct vdc_port {TYPE_1__ geom; } ;
struct hd_geometry {int cylinders; void* sectors; void* heads; } ;
struct gendisk {struct vdc_port* private_data; } ;
struct block_device {struct gendisk* bd_disk; } ;



__attribute__((used)) static int FUNC_0(struct block_device *VAR_0, struct hd_geometry *VAR_1)
{
 struct gendisk *VAR_2 = VAR_0->bd_disk;
 struct vdc_port *VAR_3 = VAR_2->private_data;

 VAR_1->heads = (u8) VAR_3->geom.num_hd;
 VAR_1->sectors = (u8) VAR_3->geom.num_sec;
 VAR_1->cylinders = VAR_3->geom.num_cyl;

 return 0;
}
