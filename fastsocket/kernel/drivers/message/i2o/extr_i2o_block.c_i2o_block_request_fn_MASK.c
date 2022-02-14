
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {scalar_t__ cmd_type; struct i2o_block_request* special; } ;
struct i2o_block_request {TYPE_1__* i2o_blk_dev; } ;
struct i2o_block_delayed_request {int work; struct request_queue* queue; } ;
struct TYPE_4__ {int event_queue; } ;
struct TYPE_3__ {unsigned int open_queue_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct request*,int ) ;
 struct request* FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (struct request_queue*) ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_6 (struct request*) ;
 int FUNC_7 (struct i2o_block_delayed_request*) ;
 struct i2o_block_delayed_request* FUNC_8 (int,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_11(struct request_queue *VAR_7)
{
 struct request *VAR_8;

 while (!FUNC_3(VAR_7)) {
  VAR_8 = FUNC_2(VAR_7);
  if (!VAR_8)
   break;

  if (VAR_8->cmd_type == VAR_4) {
   struct i2o_block_delayed_request *VAR_9;
   struct i2o_block_request *VAR_10 = VAR_8->special;
   unsigned int VAR_11;

   VAR_11 = VAR_10->i2o_blk_dev->open_queue_depth;

   if (VAR_11 < VAR_2) {
    if (!FUNC_6(VAR_8)) {
     FUNC_4(VAR_8);
     continue;
    } else
     FUNC_9("transfer error\n");
   }

   if (VAR_11)
    break;


   VAR_9 = FUNC_8(sizeof(*VAR_9), VAR_1);
   if (!VAR_9)
    continue;

   VAR_9->queue = VAR_7;
   FUNC_0(&VAR_9->work,
       VAR_5);

   if (!FUNC_10(VAR_6.event_queue,
      &VAR_9->work,
      VAR_3))
    FUNC_7(VAR_9);
   else {
    FUNC_5(VAR_7);
    break;
   }
  } else {
   FUNC_4(VAR_8);
   FUNC_1(VAR_8, -VAR_0);
  }
 }
}
