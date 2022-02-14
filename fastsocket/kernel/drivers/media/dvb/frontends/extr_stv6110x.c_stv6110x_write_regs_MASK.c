
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stv6110x_state {int i2c; struct stv6110x_config* config; } ;
struct stv6110x_config {int addr; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (int*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct stv6110x_state *VAR_3, int VAR_4, u8 VAR_5[], int VAR_6)
{
 int VAR_7;
 const struct stv6110x_config *VAR_8 = VAR_3->config;
 u8 VAR_9[VAR_6 + 1];
 struct i2c_msg VAR_10 = {
  .addr = VAR_8->addr,
  .flags = 0,
  .buf = VAR_9,
  .len = VAR_6 + 1
 };

 if (VAR_4 + VAR_6 > 8)
  return -VAR_0;

 VAR_9[0] = VAR_4;
 FUNC_2(&VAR_9[1], VAR_5, VAR_6);

 VAR_7 = FUNC_1(VAR_3->i2c, &VAR_10, 1);
 if (VAR_7 != 1) {
  FUNC_0(VAR_2, 1, "I/O Error");
  return -VAR_1;
 }

 return 0;
}
