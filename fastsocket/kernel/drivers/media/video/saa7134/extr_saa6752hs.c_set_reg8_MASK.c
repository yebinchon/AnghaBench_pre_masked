
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int *,int) ;

__attribute__((used)) static inline void FUNC_1(struct i2c_client *VAR_0, uint8_t VAR_1, uint8_t VAR_2)
{
 u8 VAR_3[2];

 VAR_3[0] = VAR_1;
 VAR_3[1] = VAR_2;
 FUNC_0(VAR_0, VAR_3, 2);
}
