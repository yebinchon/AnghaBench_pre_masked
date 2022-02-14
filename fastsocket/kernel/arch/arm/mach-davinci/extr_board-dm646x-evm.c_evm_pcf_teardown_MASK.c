
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*,int,int,void*) ;
 int FUNC_2 (struct i2c_client*,int,int,void*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0, int VAR_1,
   unsigned int VAR_2, void *VAR_3)
{
 FUNC_0(VAR_2 < 8);

 FUNC_2(VAR_0, VAR_1, 4, VAR_3);
 FUNC_1(VAR_0, VAR_1+4, 4, VAR_3);

 return 0;
}
