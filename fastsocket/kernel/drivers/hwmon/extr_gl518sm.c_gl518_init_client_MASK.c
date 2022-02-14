
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_2)
{

 u8 VAR_3 = FUNC_0(VAR_2, VAR_0) & 0x7f;


 FUNC_1(VAR_2, VAR_0, (VAR_3 &= 0x37));


 FUNC_1(VAR_2, VAR_1, 0x00);


 FUNC_1(VAR_2, VAR_0, 0x20 | VAR_3);
 FUNC_1(VAR_2, VAR_0, 0x40 | VAR_3);
}
