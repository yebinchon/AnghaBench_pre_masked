
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {void* tcntxt; void* icntxt; } ;
struct TYPE_6__ {TYPE_2__ s; void** head; } ;
struct i2o_message {void** body; TYPE_3__ u; } ;
struct i2o_driver {int context; } ;
struct TYPE_4__ {int tid; } ;
struct i2o_device {TYPE_1__ lct_data; struct i2o_controller* iop; } ;
struct i2o_controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct i2o_message*) ;
 int FUNC_1 (struct i2o_message*) ;
 int VAR_4 ;
 void* FUNC_2 (int) ;
 struct i2o_message* FUNC_3 (struct i2o_controller*,int ) ;
 int FUNC_4 (struct i2o_controller*,struct i2o_message*) ;

int FUNC_5(struct i2o_device *VAR_5, struct i2o_driver *VAR_6,
         int VAR_7, u32 VAR_8)
{
 struct i2o_controller *VAR_9 = VAR_5->iop;
 struct i2o_message *VAR_10;

 VAR_10 = FUNC_3(VAR_9, VAR_3);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_10->u.head[0] = FUNC_2(VAR_0 | VAR_4);
 VAR_10->u.head[1] =
     FUNC_2(VAR_2 << 24 | VAR_1 << 12 | VAR_5->
   lct_data.tid);
 VAR_10->u.s.icntxt = FUNC_2(VAR_6->context);
 VAR_10->u.s.tcntxt = FUNC_2(VAR_7);
 VAR_10->body[0] = FUNC_2(VAR_8);

 FUNC_4(VAR_9, VAR_10);

 return 0;
}
