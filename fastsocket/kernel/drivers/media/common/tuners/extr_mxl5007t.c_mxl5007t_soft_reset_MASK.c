
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int adap; int addr; } ;
struct mxl5007t_state {TYPE_1__ i2c_props; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct mxl5007t_state *VAR_1)
{
 u8 VAR_2 = 0xff;
 struct i2c_msg VAR_3 = {
  .addr = VAR_1->i2c_props.addr, .flags = 0,
  .buf = &VAR_2, .len = 1
 };
 int VAR_4 = FUNC_0(VAR_1->i2c_props.adap, &VAR_3, 1);

 if (VAR_4 != 1) {
  FUNC_1("failed!");
  return -VAR_0;
 }
 return 0;
}
