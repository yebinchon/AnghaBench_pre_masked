
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;


 scalar_t__ FUNC_0 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_0, u8 *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_1[VAR_3] != 0xff; VAR_3 += 2)
  if (FUNC_0(VAR_0,
    VAR_1[VAR_3] | (VAR_2 << 6), VAR_1[VAR_3 + 1]) < 0)
   return -1;
 return 0;
}
