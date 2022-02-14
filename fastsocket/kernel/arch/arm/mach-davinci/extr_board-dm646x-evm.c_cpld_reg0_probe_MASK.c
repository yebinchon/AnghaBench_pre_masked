
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_4,
      const struct i2c_device_id *VAR_5)
{
 if (VAR_2) {
  u8 VAR_6;
  struct i2c_msg VAR_7[2] = {
   {
    .addr = VAR_4->addr,
    .flags = VAR_3,
    .len = 1,
    .buf = &VAR_6,
   },
   {
    .addr = VAR_4->addr,
    .flags = 0,
    .len = 1,
    .buf = &VAR_6,
   },
  };


  FUNC_0(VAR_4->adapter, VAR_7, 1);
  VAR_6 &= ~(VAR_1 | VAR_0);
  FUNC_0(VAR_4->adapter, VAR_7 + 1, 1);
 }

 return 0;
}
