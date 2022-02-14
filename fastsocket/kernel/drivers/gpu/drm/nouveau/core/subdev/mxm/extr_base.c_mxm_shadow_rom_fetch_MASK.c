
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nouveau_i2c_port {int adapter; } ;
struct i2c_msg {int addr; int len; int* buf; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;

__attribute__((used)) static bool
FUNC_1(struct nouveau_i2c_port *VAR_1, u8 VAR_2,
       u8 VAR_3, u8 VAR_4, u8 *VAR_5)
{
 struct i2c_msg VAR_6[] = {
  { .addr = VAR_2, .flags = 0, .len = 1, .buf = &VAR_3 },
  { .addr = VAR_2, .flags = VAR_0, .len = VAR_4, .buf = VAR_5, },
 };

 return FUNC_0(&VAR_1->adapter, VAR_6, 2) == 2;
}
