
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wbuf ;
typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int demod_address; } ;
struct jdvbt90502_state {int i2c; TYPE_1__ config; } ;
struct i2c_msg {int* buf; int len; scalar_t__ flags; int addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct jdvbt90502_state *VAR_2,
          const u16 VAR_3, u8 *VAR_4, const size_t VAR_5)
{
 int VAR_6;
 u8 VAR_7[3];
 struct i2c_msg VAR_8[2];

 VAR_7[0] = VAR_3 & 0xFF;
 VAR_7[1] = 0;
 VAR_7[2] = VAR_3 >> 8;

 VAR_8[0].addr = VAR_2->config.demod_address;
 VAR_8[0].flags = 0;
 VAR_8[0].buf = VAR_7;
 VAR_8[0].len = sizeof(VAR_7);

 VAR_8[1].addr = VAR_8[0].addr;
 VAR_8[1].flags = VAR_1;
 VAR_8[1].buf = VAR_4;
 VAR_8[1].len = VAR_5;

 VAR_6 = FUNC_1(VAR_2->i2c, VAR_8, 2);
 if (VAR_6 != 2) {
  FUNC_0(" reg read failed.\n");
  return -VAR_0;
 }
 return 0;
}
