
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int,int,void*) ;
 int FUNC_1 (struct i2c_client*,int,int,void*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1, int VAR_2,
   unsigned int VAR_3, void *VAR_4)
{
 int VAR_5;

 if (VAR_3 < 8)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_1, VAR_2, 4, VAR_4);
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_1, VAR_2+4, 4, VAR_4);
}
