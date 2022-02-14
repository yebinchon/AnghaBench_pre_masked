
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct TYPE_6__ {void** head; } ;
struct i2o_message {void** body; TYPE_3__ u; } ;
struct TYPE_5__ {int tid; } ;
struct i2o_device {TYPE_2__ lct_data; struct i2o_controller* iop; } ;
struct i2o_controller {int dummy; } ;
struct TYPE_4__ {struct i2o_device* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct i2o_message*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct i2o_controller*,struct scsi_cmnd*) ;
 struct i2o_message* FUNC_3 (struct i2o_controller*,int ) ;
 int FUNC_4 (struct i2o_controller*,struct i2o_message*,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_9)
{
 struct i2o_device *VAR_10;
 struct i2o_controller *VAR_11;
 struct i2o_message *VAR_12;
 int VAR_13;
 int VAR_14 = VAR_0;

 FUNC_5("Aborting command block.\n");

 VAR_10 = VAR_9->device->hostdata;
 VAR_11 = VAR_10->iop;
 VAR_13 = VAR_10->lct_data.tid;

 VAR_12 = FUNC_3(VAR_11, VAR_4);
 if (FUNC_0(VAR_12))
  return VAR_6;

 VAR_12->u.head[0] = FUNC_1(VAR_1 | VAR_7);
 VAR_12->u.head[1] =
     FUNC_1(VAR_3 << 24 | VAR_2 << 12 | VAR_13);
 VAR_12->body[0] = FUNC_1(FUNC_2(VAR_11, VAR_9));

 if (!FUNC_4(VAR_11, VAR_12, VAR_5))
  VAR_14 = VAR_8;

 return VAR_14;
}
