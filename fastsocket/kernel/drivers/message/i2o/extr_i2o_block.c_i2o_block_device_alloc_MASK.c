
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct i2o_block_device {struct gendisk* gd; int lock; int wcache; int rcache; int open_queue; } ;
struct gendisk {struct i2o_block_device* private_data; int * fops; struct request_queue* queue; int major; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct i2o_block_device* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 struct gendisk* FUNC_2 (int) ;
 struct request_queue* FUNC_3 (int ,int *) ;
 int FUNC_4 (struct request_queue*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct i2o_block_device*) ;
 struct i2o_block_device* FUNC_6 (int,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct gendisk*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct i2o_block_device *FUNC_10(void)
{
 struct i2o_block_device *VAR_8;
 struct gendisk *VAR_9;
 struct request_queue *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_6(sizeof(*VAR_8), VAR_3);
 if (!VAR_8) {
  FUNC_7("Insufficient memory to allocate I2O Block disk.\n");
  VAR_11 = -VAR_2;
  goto exit;
 }

 FUNC_1(&VAR_8->open_queue);
 FUNC_9(&VAR_8->lock);
 VAR_8->rcache = VAR_0;
 VAR_8->wcache = VAR_1;


 VAR_9 = FUNC_2(16);
 if (!VAR_9) {
  FUNC_7("Insufficient memory to allocate gendisk.\n");
  VAR_11 = -VAR_2;
  goto cleanup_dev;
 }


 VAR_10 = FUNC_3(VAR_7, &VAR_8->lock);
 if (!VAR_10) {
  FUNC_7("Insufficient memory to allocate request queue.\n");
  VAR_11 = -VAR_2;
  goto cleanup_queue;
 }

 FUNC_4(VAR_10, VAR_6);

 VAR_9->major = VAR_4;
 VAR_9->queue = VAR_10;
 VAR_9->fops = &VAR_5;
 VAR_9->private_data = VAR_8;

 VAR_8->gd = VAR_9;

 return VAR_8;

      cleanup_queue:
 FUNC_8(VAR_9);

      cleanup_dev:
 FUNC_5(VAR_8);

      exit:
 return FUNC_0(VAR_11);
}
