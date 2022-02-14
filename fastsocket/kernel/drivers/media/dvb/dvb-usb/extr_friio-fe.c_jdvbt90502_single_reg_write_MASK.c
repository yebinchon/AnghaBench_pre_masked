
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wbuf ;
typedef int u8 ;
struct TYPE_2__ {int demod_address; } ;
struct jdvbt90502_state {int i2c; TYPE_1__ config; } ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct jdvbt90502_state *VAR_1,
           const u8 VAR_2, const u8 VAR_3)
{
 struct i2c_msg VAR_4;
 u8 VAR_5[2];

 VAR_5[0] = VAR_2;
 VAR_5[1] = VAR_3;

 VAR_4.addr = VAR_1->config.demod_address;
 VAR_4.flags = 0;
 VAR_4.buf = VAR_5;
 VAR_4.len = sizeof(VAR_5);

 if (FUNC_1(VAR_1->i2c, &VAR_4, 1) != 1) {
  FUNC_0(" reg write failed.");
  return -VAR_0;
 }
 return 0;
}
