
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct radeon_i2c_chan {int adapter; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *,struct i2c_msg*,int) ;

void FUNC_2(struct radeon_i2c_chan *VAR_0,
    u8 VAR_1,
    u8 VAR_2,
    u8 VAR_3)
{
 uint8_t VAR_4[2];
 struct i2c_msg VAR_5 = {
  .addr = VAR_1,
  .flags = 0,
  .len = 2,
  .buf = VAR_4,
 };

 VAR_4[0] = VAR_2;
 VAR_4[1] = VAR_3;

 if (FUNC_1(&VAR_0->adapter, &VAR_5, 1) != 1)
  FUNC_0("i2c 0x%02x 0x%02x write failed\n",
     VAR_2, VAR_3);
}
