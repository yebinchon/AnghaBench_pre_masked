
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct max1586_data {unsigned int max_uV; unsigned int min_uV; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct max1586_data*,unsigned int) ;
 struct max1586_data* FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_3, int VAR_4, int VAR_5)
{
 struct max1586_data *VAR_6 = FUNC_3(VAR_3);
 struct i2c_client *VAR_7 = VAR_6->client;
 unsigned VAR_8 = VAR_6->max_uV - VAR_6->min_uV;
 unsigned VAR_9;
 u8 VAR_10;

 if (VAR_4 > VAR_6->max_uV || VAR_5 < VAR_6->min_uV)
  return -VAR_0;
 if (VAR_4 < VAR_6->min_uV)
  VAR_4 = VAR_6->min_uV;

 VAR_9 = ((VAR_4 - VAR_6->min_uV) * VAR_2 +
   VAR_8 - 1) / VAR_8;
 if (FUNC_2(VAR_6, VAR_9) > VAR_5)
  return -VAR_0;

 FUNC_0(&VAR_7->dev, "changing voltage v3 to %dmv\n",
  FUNC_2(VAR_6, VAR_9) / 1000);

 VAR_10 = VAR_1 | (u8) VAR_9;
 return FUNC_1(VAR_7, VAR_10);
}
