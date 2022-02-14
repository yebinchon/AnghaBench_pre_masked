
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,unsigned char,unsigned char*) ;
 int FUNC_1 (struct i2c_client*,unsigned char,unsigned char) ;

int FUNC_2(struct i2c_client *VAR_0,
    unsigned char VAR_1,
    unsigned char VAR_2,
    unsigned char VAR_3)
{
 int VAR_4;
 unsigned char VAR_5, VAR_6;

 if (VAR_3 == 0xff) {
  VAR_6 = VAR_2;
 } else {
  VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_5);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_5 &= (~VAR_3);
  VAR_2 &= VAR_3;
  VAR_6 = VAR_5 | VAR_2;
 }

 return FUNC_1(VAR_0, VAR_1, VAR_6);
}
