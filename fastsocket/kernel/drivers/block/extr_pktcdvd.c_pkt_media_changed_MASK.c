
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pktcdvd_device {TYPE_1__* bdev; } ;
struct gendisk {TYPE_2__* fops; struct pktcdvd_device* private_data; } ;
struct TYPE_4__ {int (* media_changed ) (struct gendisk*) ;} ;
struct TYPE_3__ {struct gendisk* bd_disk; } ;


 int FUNC_0 (struct gendisk*) ;

__attribute__((used)) static int FUNC_1(struct gendisk *VAR_0)
{
 struct pktcdvd_device *VAR_1 = VAR_0->private_data;
 struct gendisk *VAR_2;

 if (!VAR_1)
  return 0;
 if (!VAR_1->bdev)
  return 0;
 VAR_2 = VAR_1->bdev->bd_disk;
 if (!VAR_2)
  return 0;
 return VAR_2->fops->media_changed(VAR_2);
}
