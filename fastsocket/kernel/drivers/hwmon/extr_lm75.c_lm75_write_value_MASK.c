
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct i2c_client*,scalar_t__,int ) ;
 int FUNC_1 (struct i2c_client*,scalar_t__,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1, u8 VAR_2, u16 VAR_3)
{
 if (VAR_2 == VAR_0)
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 else
  return FUNC_1(VAR_1, VAR_2, FUNC_2(VAR_3));
}
