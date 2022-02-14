
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,char*,int) ;
 int FUNC_1 (struct i2c_client*,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0, unsigned char *VAR_1)
{
 unsigned char VAR_2[2];

 VAR_2[0] = 0;
 VAR_2[1] = *VAR_1;
 FUNC_1(VAR_0, *VAR_1);

 return FUNC_0(VAR_0, (char *)VAR_2, 2);
}
