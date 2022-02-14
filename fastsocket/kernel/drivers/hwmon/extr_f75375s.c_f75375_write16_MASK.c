
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_1(struct i2c_client *VAR_0, u8 VAR_1,
  u16 VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_1, (VAR_2 << 8));
 if (VAR_3)
  return;
 FUNC_0(VAR_0, VAR_1 + 1, (VAR_2 & 0xFF));
}
