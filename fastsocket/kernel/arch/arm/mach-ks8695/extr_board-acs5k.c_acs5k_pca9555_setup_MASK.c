
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (unsigned int,char*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0,
          unsigned VAR_1, unsigned VAR_2,
          void *VAR_3)
{
 static int VAR_4[] = {
  -1, -1, -1, -1, -1, -1, -1, 0, 1, 1, -1, 0, 1, 0, -1, -1
 };
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); ++VAR_5) {
  FUNC_4(VAR_1 + VAR_5, "ACS-5000 GPIO Expander");
  if (VAR_4[VAR_5] < 0)
   FUNC_1(VAR_1 + VAR_5);
  else
   FUNC_2(VAR_1 + VAR_5,
           VAR_4[VAR_5]);
  FUNC_3(VAR_1 + VAR_5, 0);
 }

 return 0;
}
