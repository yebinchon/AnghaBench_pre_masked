
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* virt; } ;
struct i2o_controller {int name; TYPE_1__ status_block; } ;
struct TYPE_4__ {scalar_t__ i2o_version; int iop_state; } ;
typedef TYPE_2__ i2o_status_block ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct i2o_controller*) ;
 int FUNC_1 (struct i2o_controller*) ;
 int FUNC_2 (struct i2o_controller*) ;
 int FUNC_3 (struct i2o_controller*) ;
 int FUNC_4 (struct i2o_controller*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int FUNC_8(struct i2o_controller *VAR_5)
{
 i2o_status_block *VAR_6 = VAR_5->status_block.virt;
 int VAR_7;
 int VAR_8;




 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7) {
  FUNC_7("%s: Unable to obtain status, attempting a reset.\n",
    VAR_5->name);
  VAR_7 = FUNC_3(VAR_5);
  if (VAR_7)
   return VAR_7;
 }

 if (VAR_6->i2o_version > VAR_4) {
  FUNC_6("%s: Not running version 1.5 of the I2O Specification."
   "\n", VAR_5->name);
  return -VAR_3;
 }

 switch (VAR_6->iop_state) {
 case 131:
  FUNC_6("%s: hardware fault\n", VAR_5->name);
  return -VAR_1;

 case 128:
 case 129:
 case 130:
 case 132:
  FUNC_5("%s: already running, trying to reset...\n", VAR_5->name);
  VAR_7 = FUNC_3(VAR_5);
  if (VAR_7)
   return VAR_7;
 }


 VAR_8 = VAR_6->iop_state;

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7)
  return VAR_7;


 if (VAR_8 != VAR_0)
  FUNC_1(VAR_5);

 FUNC_4(VAR_5);

 if (VAR_6->iop_state != 130) {
  FUNC_6("%s: failed to bring IOP into HOLD state\n", VAR_5->name);
  return -VAR_2;
 }

 return FUNC_0(VAR_5);
}
