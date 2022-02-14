
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct cx24110_state {int i2c; TYPE_1__* config; } ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1 (struct cx24110_state* VAR_1, u8 VAR_2)
{
 int VAR_3;
 u8 VAR_4 [] = { VAR_2 };
 u8 VAR_5 [] = { 0 };
 struct i2c_msg VAR_6 [] = { { .addr = VAR_1->config->demod_address, .flags = 0, .buf = VAR_4, .len = 1 },
      { .addr = VAR_1->config->demod_address, .flags = VAR_0, .buf = VAR_5, .len = 1 } };

 VAR_3 = FUNC_0(VAR_1->i2c, VAR_6, 2);

 if (VAR_3 != 2) return VAR_3;

 return VAR_5[0];
}
