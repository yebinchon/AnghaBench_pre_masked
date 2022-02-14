
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct request {int q; struct i2o_block_request* special; TYPE_1__* rq_disk; } ;
struct TYPE_10__ {void* tcntxt; void* icntxt; } ;
struct TYPE_11__ {int* head; TYPE_4__ s; } ;
struct i2o_message {int* body; TYPE_5__ u; } ;
struct i2o_controller {scalar_t__ adaptec; } ;
struct i2o_block_request {int queue; } ;
struct i2o_block_device {int rcache; int wcache; int open_queue_depth; int open_queue; TYPE_3__* i2o_dev; } ;
struct TYPE_12__ {int context; } ;
struct TYPE_8__ {int tid; } ;
struct TYPE_9__ {struct i2o_controller* iop; TYPE_2__ lct_data; } ;
struct TYPE_7__ {struct i2o_block_device* private_data; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct i2o_message*) ;
 int VAR_8 ;
 int FUNC_2 (struct i2o_message*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (struct request*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 void* FUNC_8 (int) ;
 TYPE_6__ VAR_14 ;
 int FUNC_9 (struct i2o_controller*,struct i2o_block_request*,int**) ;
 int FUNC_10 (struct i2o_controller*,struct request*) ;
 int FUNC_11 (struct i2o_controller*,struct request*) ;
 struct i2o_message* FUNC_12 (struct i2o_controller*) ;
 int FUNC_13 (struct i2o_controller*,struct i2o_message*) ;
 int FUNC_14 (struct i2o_controller*,struct i2o_message*) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int*,int *,int) ;
 int FUNC_17 (int *,int ,int) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (struct request*) ;
 scalar_t__ FUNC_21 (int) ;

__attribute__((used)) static int FUNC_22(struct request *VAR_15)
{
 struct i2o_block_device *VAR_16 = VAR_15->rq_disk->private_data;
 struct i2o_controller *VAR_17;
 u32 VAR_18 = VAR_16->i2o_dev->lct_data.tid;
 struct i2o_message *VAR_19;
 u32 *VAR_20;
 struct i2o_block_request *VAR_21 = VAR_15->special;
 u32 VAR_22;
 u32 VAR_23 = VAR_12;
 u32 VAR_24 = 0x00000000;
 int VAR_25;
 u32 VAR_26;

 if (FUNC_21(!VAR_16->i2o_dev)) {
  FUNC_18("transfer to removed drive\n");
  VAR_25 = -VAR_0;
  goto exit;
 }

 VAR_17 = VAR_16->i2o_dev->iop;

 VAR_19 = FUNC_12(VAR_17);
 if (FUNC_1(VAR_19)) {
  VAR_25 = FUNC_2(VAR_19);
  goto exit;
 }

 VAR_22 = FUNC_10(VAR_17, VAR_15);
 if (!VAR_22) {
  VAR_25 = -VAR_1;
  goto nop_msg;
 }

 VAR_19->u.s.icntxt = FUNC_8(VAR_14.context);
 VAR_19->u.s.tcntxt = FUNC_8(VAR_22);

 VAR_20 = &VAR_19->body[0];

 if (FUNC_20(VAR_15) == VAR_9) {
  VAR_26 = VAR_3 << 24;

  switch (VAR_16->rcache) {
  case 133:
   VAR_24 = 0x201F0008;
   break;

  case 131:
   if (FUNC_5(VAR_15) > 16)
    VAR_24 = 0x201F0008;
   else
    VAR_24 = 0x001F0000;
   break;

  default:
   break;
  }
 } else {
  VAR_26 = VAR_4 << 24;

  switch (VAR_16->wcache) {
  case 128:
   VAR_24 = 0x001F0008;
   break;
  case 129:
   VAR_24 = 0x001F0010;
   break;
  case 132:
   if (FUNC_5(VAR_15) > 16)
    VAR_24 = 0x001F0004;
   else
    VAR_24 = 0x001F0010;
   break;
  case 130:
   if (FUNC_5(VAR_15) > 16)
    VAR_24 = 0x001F0004;
   else
    VAR_24 = 0x001F0010;
  default:
   break;
  }
 }
 {
  VAR_19->u.head[1] = FUNC_8(VAR_26 | VAR_2 << 12 | VAR_18);
  *VAR_20++ = FUNC_8(VAR_24);
  *VAR_20++ = FUNC_8(FUNC_3(VAR_15));
  *VAR_20++ =
      FUNC_8((u32) (FUNC_4(VAR_15) << VAR_8));
  *VAR_20++ =
      FUNC_8(FUNC_4(VAR_15) >> (32 - VAR_8));
 }

 if (!FUNC_9(VAR_17, VAR_21, &VAR_20)) {
  VAR_25 = -VAR_1;
  goto context_remove;
 }

 VAR_19->u.head[0] =
     FUNC_8(FUNC_0(VAR_20 - &VAR_19->u.head[0]) | VAR_23);

 FUNC_15(&VAR_21->queue, &VAR_16->open_queue);
 VAR_16->open_queue_depth++;

 FUNC_14(VAR_17, VAR_19);

 return 0;

      context_remove:
 FUNC_11(VAR_17, VAR_15);

      nop_msg:
 FUNC_13(VAR_17, VAR_19);

      exit:
 return VAR_25;
}
