
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int adap; int addr; } ;
struct mxl5007t_state {TYPE_1__ i2c_props; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct mxl5007t_state *VAR_2, u8 VAR_3, u8 *VAR_4)
{
 struct i2c_msg VAR_5[] = {
  { .addr = VAR_2->i2c_props.addr, .flags = 0,
    .buf = &VAR_3, .len = 1 },
  { .addr = VAR_2->i2c_props.addr, .flags = VAR_1,
    .buf = VAR_4, .len = 1 },
 };
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2->i2c_props.adap, VAR_5, 2);
 if (VAR_6 != 2) {
  FUNC_1("failed!");
  return -VAR_0;
 }
 return 0;
}
