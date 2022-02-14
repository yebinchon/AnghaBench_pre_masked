
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*,int,int,int*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2, u32 *VAR_3,
                           int VAR_4, int VAR_5)
{
 u8 VAR_6[4];
 int VAR_7;
 int VAR_8;

 if (VAR_5 > 4) {
  FUNC_0(1);
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_2, VAR_4, VAR_5, VAR_6);

 if (VAR_7 < 0)
  return VAR_7;
 if (VAR_7 < VAR_5)
  return -VAR_1;

 for (VAR_8 = VAR_5 - 1, *VAR_3 = 0; VAR_8 >= 0; VAR_8--)
  *VAR_3 = (*VAR_3 << 8) | VAR_6[VAR_8];

 return 0;
}
