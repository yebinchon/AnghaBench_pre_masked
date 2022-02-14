
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s35390a {struct i2c_client** client; } ;
struct i2c_msg {int member_2; char* member_3; int member_1; int member_0; } ;
struct i2c_client {int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct s35390a *VAR_2, int VAR_3, char *VAR_4, int VAR_5)
{
 struct i2c_client *VAR_6 = VAR_2->client[VAR_3];
 struct i2c_msg VAR_7[] = {
  { VAR_6->addr, VAR_1, VAR_5, VAR_4 },
 };

 if ((FUNC_0(VAR_6->adapter, VAR_7, 1)) != 1)
  return -VAR_0;

 return 0;
}
