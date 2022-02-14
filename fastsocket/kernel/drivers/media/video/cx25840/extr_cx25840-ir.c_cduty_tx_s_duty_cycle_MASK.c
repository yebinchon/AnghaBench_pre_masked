
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,int) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static unsigned int FUNC_2(struct i2c_client *VAR_1,
       unsigned int VAR_2)
{
 u32 VAR_3;
 VAR_3 = FUNC_0(VAR_2 * 100, 625);
 if (VAR_3 != 0)
  VAR_3--;
 if (VAR_3 > 15)
  VAR_3 = 15;
 FUNC_1(VAR_1, VAR_0, VAR_3);
 return FUNC_0((VAR_3 + 1) * 100, 16);
}
