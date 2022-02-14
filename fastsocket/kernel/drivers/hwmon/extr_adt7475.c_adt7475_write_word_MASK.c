
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int,int) ;

__attribute__((used)) static void FUNC_1(struct i2c_client *VAR_0, int VAR_1, u16 VAR_2)
{
 FUNC_0(VAR_0, VAR_1 + 1, VAR_2 >> 8);
 FUNC_0(VAR_0, VAR_1, VAR_2 & 0xFF);
}
