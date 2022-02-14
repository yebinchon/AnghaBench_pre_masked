
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int* member_3; int member_2; int member_1; int member_0; } ;
struct i2c_client {int adapter; int addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (int*,int const*,unsigned int) ;

__attribute__((used)) static int
FUNC_3(struct i2c_client *VAR_1, u8 VAR_2, u8 const VAR_3[],
       unsigned VAR_4)
{
 u8 VAR_5[VAR_0 + 2];
 struct i2c_msg VAR_6[1] = {
  {&VAR_1->addr, 0, VAR_4 + 1, VAR_5}
 };
 int VAR_7;

 FUNC_0(VAR_2 > VAR_0);
 FUNC_0(VAR_2 + VAR_4 > VAR_0 + 1);

 VAR_5[0] = VAR_2;
 FUNC_2(&VAR_5[1], &VAR_3[0], VAR_4);

 VAR_7 = FUNC_1(VAR_1->adapter, VAR_6, 1);
 if (VAR_7 > 0)
  VAR_7 = 0;
 return VAR_7;
}
