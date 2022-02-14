
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s921_state {int i2c; int addr; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, u8 VAR_2) {
 struct s921_state *VAR_3 = VAR_1;
 u8 VAR_4;
 int VAR_5;
 struct i2c_msg VAR_6[2] = { { .addr = VAR_3->addr,
        .flags = 0,
        .buf = &VAR_2, .len = 1 },
      { .addr = VAR_3->addr,
        .flags = VAR_0,
        .buf = &VAR_4, .len = 1 } };

 VAR_5 = FUNC_0(VAR_3->i2c, VAR_6, 2);
 if (VAR_5 != 2)
  return VAR_5;
 return VAR_4;
}
