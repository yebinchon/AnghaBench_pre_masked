
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct tda18218_priv {int i2c; TYPE_1__* cfg; } ;
struct i2c_msg {int len; char* buf; int flags; int addr; } ;
typedef int buf ;
struct TYPE_2__ {int i2c_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (size_t*,size_t*,size_t) ;
 int FUNC_2 (char*,int,size_t,size_t) ;

__attribute__((used)) static int FUNC_3(struct tda18218_priv *VAR_2, u8 VAR_3, u8 *VAR_4, u8 VAR_5)
{
 int VAR_6;
 u8 VAR_7[VAR_3+VAR_5];
 struct i2c_msg VAR_8[2] = {
  {
   .addr = VAR_2->cfg->i2c_address,
   .flags = 0,
   .len = 1,
   .buf = "\x00",
  }, {
   .addr = VAR_2->cfg->i2c_address,
   .flags = VAR_1,
   .len = sizeof(VAR_7),
   .buf = VAR_7,
  }
 };

 VAR_6 = FUNC_0(VAR_2->i2c, VAR_8, 2);
 if (VAR_6 == 2) {
  FUNC_1(VAR_4, &VAR_7[VAR_3], VAR_5);
  VAR_6 = 0;
 } else {
  FUNC_2("i2c rd failed ret:%d reg:%02x len:%d", VAR_6, VAR_3, VAR_5);
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
