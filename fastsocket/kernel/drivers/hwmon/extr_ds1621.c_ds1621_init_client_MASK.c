
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_5)
{
 u8 VAR_6, VAR_7;

 VAR_7 = VAR_6 = FUNC_0(VAR_5, VAR_1);

 VAR_7 &= ~VAR_2;


 if (VAR_4 == 0)
  VAR_7 &= ~VAR_3;
 else if (VAR_4 == 1)
  VAR_7 |= VAR_3;

 if (VAR_6 != VAR_7)
  FUNC_2(VAR_5, VAR_1, VAR_7);


 FUNC_1(VAR_5, VAR_0);
}
