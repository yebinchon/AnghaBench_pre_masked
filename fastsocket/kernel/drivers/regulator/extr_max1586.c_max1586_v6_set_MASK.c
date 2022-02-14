
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (unsigned int) ;
 struct i2c_client* FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_4, int VAR_5, int VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_3(VAR_4);
 unsigned VAR_8;
 u8 VAR_9;

 if (VAR_5 < VAR_3 || VAR_5 > VAR_2)
  return -VAR_0;
 if (VAR_6 < VAR_3 || VAR_6 > VAR_2)
  return -VAR_0;

 if (VAR_5 >= 3000000)
  VAR_8 = 3;
 if (VAR_5 < 3000000)
  VAR_8 = 2;
 if (VAR_5 < 2500000)
  VAR_8 = 1;
 if (VAR_5 < 1800000)
  VAR_8 = 0;

 if (FUNC_2(VAR_8) > VAR_6)
  return -VAR_0;

 FUNC_0(&VAR_7->dev, "changing voltage v6 to %dmv\n",
  FUNC_2(VAR_8) / 1000);

 VAR_9 = VAR_1 | (u8) VAR_8;
 return FUNC_1(VAR_7, VAR_9);
}
