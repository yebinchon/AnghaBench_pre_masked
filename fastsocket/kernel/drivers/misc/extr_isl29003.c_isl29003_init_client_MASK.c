
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29003_data {int* reg_cache; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 struct isl29003_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_1)
{
 struct isl29003_data *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;



 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->reg_cache); VAR_3++) {
  int VAR_4 = FUNC_2(VAR_1, VAR_3);
  if (VAR_4 < 0)
   return -VAR_0;

  VAR_2->reg_cache[VAR_3] = VAR_4;
 }


 FUNC_5(VAR_1, 0);
 FUNC_6(VAR_1, 0);
 FUNC_3(VAR_1, 0);
 FUNC_4(VAR_1, 0);

 return 0;
}
