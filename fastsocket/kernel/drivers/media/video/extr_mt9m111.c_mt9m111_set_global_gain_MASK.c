
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mt9m111 {int gain; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 struct mt9m111* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2, int VAR_3)
{
 struct mt9m111 *VAR_4 = FUNC_1(VAR_2);
 u16 VAR_5;

 if (VAR_3 > 63 * 2 * 2)
  return -VAR_0;

 VAR_4->gain = VAR_3;
 if ((VAR_3 >= 64 * 2) && (VAR_3 < 63 * 2 * 2))
  VAR_5 = (1 << 10) | (1 << 9) | (VAR_3 / 4);
 else if ((VAR_3 >= 64) && (VAR_3 < 64 * 2))
  VAR_5 = (1 << 9) | (VAR_3 / 2);
 else
  VAR_5 = VAR_3;

 return FUNC_0(VAR_1, VAR_5);
}
