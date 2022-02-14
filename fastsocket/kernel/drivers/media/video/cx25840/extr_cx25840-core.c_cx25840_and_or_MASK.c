
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;


 unsigned int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,unsigned int) ;

int FUNC_2(struct i2c_client *VAR_0, u16 VAR_1, unsigned VAR_2,
     u8 VAR_3)
{
 return FUNC_1(VAR_0, VAR_1,
        (FUNC_0(VAR_0, VAR_1) & VAR_2) |
        VAR_3);
}
