
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {scalar_t__ state; } ;
struct gendisk {struct blkfront_info* private_data; } ;
struct block_device {scalar_t__ bd_openers; } ;
struct blkfront_info {int mutex; struct xenbus_device* xbdev; } ;
typedef int fmode_t ;


 scalar_t__ VAR_0 ;
 struct block_device* FUNC_0 (struct gendisk*,int ) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct blkfront_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct xenbus_device*) ;
 int FUNC_6 (struct blkfront_info*) ;

__attribute__((used)) static int FUNC_7(struct gendisk *VAR_1, fmode_t VAR_2)
{
 struct blkfront_info *VAR_3 = VAR_1->private_data;
 struct block_device *VAR_4;
 struct xenbus_device *VAR_5;

 VAR_4 = FUNC_0(VAR_1, 0);

 if (VAR_4->bd_openers)
  goto out;






 FUNC_3(&VAR_3->mutex);
 VAR_5 = VAR_3->xbdev;

 if (VAR_5 && VAR_5->state == VAR_0) {

  FUNC_6(VAR_3);
  FUNC_5(VAR_3->xbdev);
  }

 FUNC_4(&VAR_3->mutex);

 if (!VAR_5) {

  FUNC_6(VAR_3);
  VAR_1->private_data = ((void*)0);
  FUNC_2(VAR_3);
 }

out:
 FUNC_1(VAR_4);
 return 0;
}
