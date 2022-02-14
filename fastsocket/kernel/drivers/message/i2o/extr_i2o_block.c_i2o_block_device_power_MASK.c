
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {void** head; } ;
struct i2o_message {void** body; TYPE_1__ u; } ;
struct TYPE_4__ {int tid; } ;
struct i2o_device {TYPE_2__ lct_data; struct i2o_controller* iop; } ;
struct i2o_controller {int dummy; } ;
struct i2o_block_device {int power; struct i2o_device* i2o_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct i2o_message*) ;
 int FUNC_1 (struct i2o_message*) ;
 int VAR_4 ;
 void* FUNC_2 (int) ;
 struct i2o_message* FUNC_3 (struct i2o_controller*,int ) ;
 int FUNC_4 (struct i2o_controller*,struct i2o_message*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct i2o_block_device *VAR_5, u8 VAR_6)
{
 struct i2o_device *VAR_7 = VAR_5->i2o_dev;
 struct i2o_controller *VAR_8 = VAR_7->iop;
 struct i2o_message *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_8, VAR_3);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_9->u.head[0] = FUNC_2(VAR_0 | VAR_4);
 VAR_9->u.head[1] =
     FUNC_2(VAR_2 << 24 | VAR_1 << 12 | VAR_7->
   lct_data.tid);
 VAR_9->body[0] = FUNC_2(VAR_6 << 24);
 FUNC_5("Power...\n");

 VAR_10 = FUNC_4(VAR_8, VAR_9, 60);
 if (!VAR_10)
  VAR_5->power = VAR_6;

 return VAR_10;
}
