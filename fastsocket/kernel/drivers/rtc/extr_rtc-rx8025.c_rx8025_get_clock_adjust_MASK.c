
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ,int*) ;
 struct i2c_client* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, int *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_1(VAR_2);
 u8 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_1, &VAR_5);
 if (VAR_6)
  return VAR_6;

 *VAR_3 = VAR_5 >= 64 ? VAR_5 - 128 : VAR_5;
 if (*VAR_3 > 0)
  (*VAR_3)--;
 *VAR_3 *= -VAR_0;

 return 0;
}
