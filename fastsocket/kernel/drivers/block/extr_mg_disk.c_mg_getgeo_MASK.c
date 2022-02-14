
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_host {scalar_t__ sectors; scalar_t__ heads; scalar_t__ cyls; } ;
struct hd_geometry {unsigned short cylinders; unsigned char heads; unsigned char sectors; } ;
struct block_device {TYPE_1__* bd_disk; } ;
struct TYPE_2__ {struct mg_host* private_data; } ;



__attribute__((used)) static int FUNC_0(struct block_device *VAR_0, struct hd_geometry *VAR_1)
{
 struct mg_host *VAR_2 = VAR_0->bd_disk->private_data;

 VAR_1->cylinders = (unsigned short)VAR_2->cyls;
 VAR_1->heads = (unsigned char)VAR_2->heads;
 VAR_1->sectors = (unsigned char)VAR_2->sectors;
 return 0;
}
