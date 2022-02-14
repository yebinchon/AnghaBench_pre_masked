
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct isl29003_data {int* reg_cache; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct isl29003_data* FUNC_0 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_2)
{
 struct isl29003_data *VAR_3 = FUNC_0(VAR_2);
 u8 VAR_4 = VAR_3->reg_cache[VAR_1];
 return ~VAR_4 & VAR_0;
}
