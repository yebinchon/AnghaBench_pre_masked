
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; } ;
struct request {struct request_queue* q; struct i2o_block_request* special; } ;
struct i2o_block_request {int queue; struct i2o_block_device* i2o_blk_dev; } ;
struct i2o_block_device {int open_queue_depth; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct request*,int,int) ;
 int FUNC_1 (struct request*,int ) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct i2o_block_request*) ;
 int FUNC_4 (struct i2o_block_request*) ;
 scalar_t__ FUNC_5 (struct i2o_block_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct request *VAR_1, int VAR_2,
      int VAR_3)
{
 struct i2o_block_request *VAR_4 = VAR_1->special;
 struct i2o_block_device *VAR_5 = VAR_4->i2o_blk_dev;
 struct request_queue *VAR_6 = VAR_1->q;
 unsigned long VAR_7;

 if (FUNC_0(VAR_1, VAR_2, VAR_3))
  if (VAR_2)
   FUNC_1(VAR_1, -VAR_0);

 FUNC_7(VAR_6->queue_lock, VAR_7);

 if (FUNC_5(VAR_5)) {
  VAR_5->open_queue_depth--;
  FUNC_6(&VAR_4->queue);
 }

 FUNC_2(VAR_6);

 FUNC_8(VAR_6->queue_lock, VAR_7);

 FUNC_4(VAR_4);
 FUNC_3(VAR_4);
}
