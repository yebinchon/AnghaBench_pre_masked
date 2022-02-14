
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u32 ;
struct i2c_msg {unsigned char* buf; int len; int flags; int addr; } ;
struct IR_i2c {TYPE_1__* c; } ;
struct TYPE_2__ {int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct IR_i2c *VAR_2,
         u32 *VAR_3, u32 *VAR_4)
{
 unsigned char VAR_5, VAR_6, VAR_7;
 struct i2c_msg VAR_8[] = { { .addr = VAR_2->c->addr, .flags = 0,
       .buf = &VAR_5, .len = 1},
     { .addr = VAR_2->c->addr, .flags = VAR_1,
      .buf = &VAR_6, .len = 1} };
 VAR_5 = 0x0d;
 if (2 != FUNC_1(VAR_2->c->adapter, VAR_8, 2)) {
  FUNC_0(1, "read error\n");
  return -VAR_0;
 }

 if (VAR_6 == 0xff)
  return 0;

 VAR_5 = 0x0b;
 VAR_8[1].buf = &VAR_7;
 if (2 != FUNC_1(VAR_2->c->adapter, VAR_8, 2)) {
  FUNC_0(1, "read error\n");
  return -VAR_0;
 }

 if (VAR_7 == 0xff)
  return 0;

 FUNC_0(1, "read key 0x%02x/0x%02x\n", VAR_6, VAR_7);
 if (VAR_7 < 2 || VAR_7 > 3) {

  FUNC_0(1, "warning: invalid key group 0x%02x for key 0x%02x\n",
        VAR_7, VAR_6);
 }
 VAR_6 |= (VAR_7 & 1) << 6;

 *VAR_3 = VAR_6;
 *VAR_4 = VAR_6;
 return 1;
}
