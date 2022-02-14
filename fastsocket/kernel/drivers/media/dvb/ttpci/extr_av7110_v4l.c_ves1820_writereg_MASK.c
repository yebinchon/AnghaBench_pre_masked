
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct saa7146_dev {struct av7110* ext_priv; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct av7110 {int i2c_adap; } ;


 int FUNC_0 (int,char*,struct saa7146_dev*) ;
 int FUNC_1 (int *,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct saa7146_dev *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct av7110 *VAR_4 = VAR_0->ext_priv;
 u8 VAR_5[] = { 0x00, VAR_2, VAR_3 };
 struct i2c_msg VAR_6 = { .addr = VAR_1, .flags = 0, .buf = VAR_5, .len = 3 };

 FUNC_0(4, "dev: %p\n", VAR_0);

 if (1 != FUNC_1(&VAR_4->i2c_adap, &VAR_6, 1))
  return -1;
 return 0;
}
