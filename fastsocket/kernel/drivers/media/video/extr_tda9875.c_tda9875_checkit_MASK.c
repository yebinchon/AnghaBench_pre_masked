
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int,int) ;
 int FUNC_1 (struct i2c_client*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1, 254);
 VAR_3 = FUNC_0(VAR_0, VAR_1, 255);

 if (VAR_2 == 0 || VAR_2 == 2) {
  FUNC_1(VAR_0, "tda9875%s rev. %d detected at 0x%02x\n",
   VAR_2 == 0 ? "" : "A", VAR_3, VAR_1 << 1);
  return 1;
 }
 FUNC_1(VAR_0, "no such chip at 0x%02x (dic=0x%x rev=0x%x)\n",
   VAR_1 << 1, VAR_2, VAR_3);
 return 0;
}
