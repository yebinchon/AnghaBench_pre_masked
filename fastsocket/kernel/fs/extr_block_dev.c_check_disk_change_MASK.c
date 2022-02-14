
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct block_device_operations* fops; } ;
struct block_device_operations {int (* revalidate_disk ) (struct gendisk*) ;int (* media_changed ) (struct gendisk*) ;} ;
struct block_device {struct gendisk* bd_disk; } ;


 int FUNC_0 (struct block_device*,int) ;
 int FUNC_1 (struct gendisk*) ;
 int FUNC_2 (struct gendisk*) ;

int FUNC_3(struct block_device *VAR_0)
{
 struct gendisk *VAR_1 = VAR_0->bd_disk;
 const struct block_device_operations *VAR_2 = VAR_1->fops;

 if (!VAR_2->media_changed)
  return 0;
 if (!VAR_2->media_changed(VAR_0->bd_disk))
  return 0;

 FUNC_0(VAR_0, 1);
 if (VAR_2->revalidate_disk)
  VAR_2->revalidate_disk(VAR_0->bd_disk);
 return 1;
}
