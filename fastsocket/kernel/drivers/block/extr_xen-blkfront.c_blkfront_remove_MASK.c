
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int nodename; int dev; } ;
struct gendisk {struct blkfront_info* private_data; } ;
struct block_device {int bd_mutex; int bd_openers; } ;
struct blkfront_info {int mutex; int * xbdev; struct gendisk* gd; } ;


 struct block_device* FUNC_0 (struct gendisk*,int ) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct blkfront_info*,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 struct blkfront_info* FUNC_4 (int *) ;
 int FUNC_5 (struct blkfront_info*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct blkfront_info*) ;

__attribute__((used)) static int FUNC_9(struct xenbus_device *VAR_0)
{
 struct blkfront_info *VAR_1 = FUNC_4(&VAR_0->dev);
 struct block_device *VAR_2 = ((void*)0);
 struct gendisk *VAR_3;

 FUNC_3(&VAR_0->dev, "%s removed", VAR_0->nodename);

 FUNC_2(VAR_1, 0);

 FUNC_6(&VAR_1->mutex);

 VAR_3 = VAR_1->gd;
 if (VAR_3)
  VAR_2 = FUNC_0(VAR_3, 0);

 VAR_1->xbdev = ((void*)0);
 FUNC_7(&VAR_1->mutex);

 if (!VAR_2) {
  FUNC_5(VAR_1);
  return 0;
 }







 FUNC_6(&VAR_2->bd_mutex);
 VAR_1 = VAR_3->private_data;

 if (VAR_1 && !VAR_2->bd_openers) {
  FUNC_8(VAR_1);
  VAR_3->private_data = ((void*)0);
  FUNC_5(VAR_1);
 }

 FUNC_7(&VAR_2->bd_mutex);
 FUNC_1(VAR_2);

 return 0;
}
