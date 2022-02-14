
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void** head; } ;
struct i2o_message {TYPE_1__ u; } ;
struct TYPE_5__ {TYPE_3__* virt; } ;
struct i2o_controller {int name; TYPE_2__ status_block; } ;
struct TYPE_6__ {scalar_t__ iop_state; } ;
typedef TYPE_3__ i2o_status_block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct i2o_message*) ;
 int FUNC_1 (struct i2o_message*) ;
 int VAR_7 ;
 void* FUNC_2 (int) ;
 struct i2o_message* FUNC_3 (struct i2o_controller*,int ) ;
 int FUNC_4 (struct i2o_controller*,struct i2o_message*,int) ;
 int FUNC_5 (struct i2o_controller*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct i2o_controller *VAR_8)
{
 struct i2o_message *VAR_9;
 i2o_status_block *VAR_10 = VAR_8->status_block.virt;
 int VAR_11;

 FUNC_5(VAR_8);


 if ((VAR_10->iop_state != VAR_1) &&
     (VAR_10->iop_state != VAR_0))
  return 0;

 VAR_9 = FUNC_3(VAR_8, VAR_6);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_9->u.head[0] = FUNC_2(VAR_3 | VAR_7);
 VAR_9->u.head[1] =
     FUNC_2(VAR_5 << 24 | VAR_4 << 12 |
   VAR_2);


 if ((VAR_11 = FUNC_4(VAR_8, VAR_9, 240)))
  FUNC_7("%s: Unable to quiesce (status=%#x).\n", VAR_8->name, -VAR_11);
 else
  FUNC_6("%s: Quiesced.\n", VAR_8->name);

 FUNC_5(VAR_8);

 return VAR_11;
}
