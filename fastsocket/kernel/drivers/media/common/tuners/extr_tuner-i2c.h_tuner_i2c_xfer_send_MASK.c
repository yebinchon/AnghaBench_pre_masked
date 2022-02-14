
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuner_i2c_props {int adap; int addr; } ;
struct i2c_msg {char* buf; int len; int flags; int addr; } ;


 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static inline int FUNC_1(struct tuner_i2c_props *VAR_0, char *VAR_1, int VAR_2)
{
 struct i2c_msg VAR_3 = { .addr = VAR_0->addr, .flags = 0,
          .buf = VAR_1, .len = VAR_2 };
 int VAR_4 = FUNC_0(VAR_0->adap, &VAR_3, 1);

 return (VAR_4 == 1) ? VAR_2 : VAR_4;
}
