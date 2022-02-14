
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_msg {int member_2; scalar_t__* member_3; int member_1; int member_0; } ;
struct i2c_client {int adapter; int addr; } ;
typedef int reg_addr ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int
FUNC_2(struct i2c_client *VAR_2, u8 VAR_3, u8 VAR_4[],
        unsigned VAR_5)
{
 u8 VAR_6[1] = { VAR_3 };
 struct i2c_msg VAR_7[2] = {
  {VAR_2->addr, 0, sizeof(VAR_6), VAR_6}
  ,
  {VAR_2->addr, VAR_0, VAR_5, VAR_4}
 };
 int VAR_8;

 FUNC_0(VAR_3 > VAR_1);
 FUNC_0(VAR_3 + VAR_5 > VAR_1 + 1);

 VAR_8 = FUNC_1(VAR_2->adapter, VAR_7, 2);
 if (VAR_8 > 0)
  VAR_8 = 0;
 return VAR_8;
}
