
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tda18218_priv {int i2c; TYPE_1__* cfg; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct TYPE_2__ {int i2c_wr_max; int i2c_address; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct tda18218_priv *VAR_1, u8 VAR_2, u8 *VAR_3, u8 VAR_4)
{
 int VAR_5 = 0;
 u8 VAR_6[1+VAR_4], VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 struct i2c_msg VAR_12[1] = {
  {
   .addr = VAR_1->cfg->i2c_address,
   .flags = 0,
   .buf = VAR_6,
  }
 };

 VAR_11 = VAR_1->cfg->i2c_wr_max - 1;
 VAR_7 = VAR_4 / VAR_11;
 VAR_8 = VAR_4 % VAR_11;
 VAR_10 = VAR_11;
 for (VAR_9 = 0; (VAR_9 <= VAR_7 && VAR_8); VAR_9++) {
  if (VAR_9 == VAR_7)
   VAR_10 = VAR_8;

  VAR_12[0].len = VAR_10 + 1;
  VAR_6[0] = VAR_2 + VAR_9 * VAR_11;
  FUNC_1(&VAR_6[1], &VAR_3[VAR_9 * VAR_11], VAR_10);

  VAR_5 = FUNC_0(VAR_1->i2c, VAR_12, 1);
  if (VAR_5 != 1)
   break;
 }

 if (VAR_5 == 1) {
  VAR_5 = 0;
 } else {
  FUNC_2("i2c wr failed ret:%d reg:%02x len:%d", VAR_5, VAR_2, VAR_4);
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
