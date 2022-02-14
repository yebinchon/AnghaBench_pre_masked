
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct s5h1420_state {int CON_1_val; int i2c; TYPE_1__* config; } ;
struct i2c_msg {int* buf; int len; int addr; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct s5h1420_state* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (struct i2c_msg*,struct i2c_msg*,int) ;
 int FUNC_3 (struct i2c_msg*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_2, struct i2c_msg VAR_3[], int VAR_4)
{
 struct s5h1420_state *VAR_5 = FUNC_0(VAR_2);
 struct i2c_msg VAR_6[1 + VAR_4];
 u8 VAR_7[2] = { VAR_0, VAR_5->CON_1_val | 1 };

 FUNC_3(VAR_6, 0, sizeof(struct i2c_msg) * (1 + VAR_4));

 VAR_6[0].addr = VAR_5->config->demod_address;
 VAR_6[0].buf = VAR_7;
 VAR_6[0].len = 2;

 FUNC_2(&VAR_6[1], VAR_3, sizeof(struct i2c_msg) * VAR_4);

 return FUNC_1(VAR_5->i2c, VAR_6, 1+VAR_4) == 1 + VAR_4 ? VAR_4 : -VAR_1;
}
