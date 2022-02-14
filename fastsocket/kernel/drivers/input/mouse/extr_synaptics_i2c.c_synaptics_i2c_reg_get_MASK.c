
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static s32 FUNC_2(struct i2c_client *VAR_1, u16 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2 >> 8);
 if (VAR_3 == 0)
  VAR_3 = FUNC_0(VAR_1, VAR_2 & 0xff);

 return VAR_3;
}
