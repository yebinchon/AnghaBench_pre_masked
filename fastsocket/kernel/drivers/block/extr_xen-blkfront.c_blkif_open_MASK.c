
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct blkfront_info* private_data; } ;
struct block_device {struct gendisk* bd_disk; } ;
struct blkfront_info {int mutex; int gd; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct block_device *VAR_1, fmode_t VAR_2)
{
 struct gendisk *VAR_3 = VAR_1->bd_disk;
 struct blkfront_info *VAR_4;
 int VAR_5 = 0;

 VAR_4 = VAR_3->private_data;
 if (!VAR_4) {

  VAR_5 = -VAR_0;
  goto out;
 }

 FUNC_0(&VAR_4->mutex);

 if (!VAR_4->gd)

  VAR_5 = -VAR_0;

 FUNC_1(&VAR_4->mutex);

out:
 return VAR_5;
}
