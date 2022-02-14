
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct i2o_block_device* queuedata; } ;
struct request {int cmd_flags; struct i2o_block_request* special; } ;
struct i2o_block_request {struct request* req; struct i2o_block_device* i2o_blk_dev; } ;
struct i2o_block_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct i2o_block_request*) ;
 int VAR_3 ;
 struct i2o_block_request* FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct request_queue *VAR_4, struct request *VAR_5)
{
 struct i2o_block_device *VAR_6 = VAR_4->queuedata;
 struct i2o_block_request *VAR_7;

 if (FUNC_4(!VAR_6)) {
  FUNC_3("block device already removed\n");
  return VAR_1;
 }


 if (!VAR_5->special) {
  VAR_7 = FUNC_1();
  if (FUNC_0(VAR_7)) {
   FUNC_2("unable to allocate i2o_block_request!\n");
   return VAR_0;
  }

  VAR_7->i2o_blk_dev = VAR_6;
  VAR_5->special = VAR_7;
  VAR_7->req = VAR_5;
 }

 VAR_5->cmd_flags |= VAR_3;

 return VAR_2;
}
