
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tsl2550_data {int operating_mode; } ;
struct i2c_client {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct tsl2550_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct i2c_client*,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct i2c_client *VAR_2, char *VAR_3)
{
 struct tsl2550_data *VAR_4 = FUNC_0(VAR_2);
 u8 VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_2, VAR_0);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_5 = VAR_7;

 VAR_7 = FUNC_3(VAR_2, VAR_1);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_6 = VAR_7;


 VAR_7 = FUNC_2(VAR_5, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 if (VAR_4->operating_mode == 1)
  VAR_7 *= 5;

 return FUNC_1(VAR_3, "%d\n", VAR_7);
}
