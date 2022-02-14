
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_adapter*,int ) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4, int VAR_5,
         struct i2c_board_info *VAR_6)
{
 struct i2c_adapter *VAR_7 = VAR_4->adapter;
 int VAR_8, VAR_9;

 if (!FUNC_0(VAR_7, VAR_1))
  return -VAR_0;


 if (FUNC_2(VAR_4, VAR_3) & 0xc0)
  return -VAR_0;
 for (VAR_8 = 0x2a; VAR_8 <= 0x3d; VAR_8++) {
  VAR_9 = FUNC_1(VAR_4, VAR_8);
  if ((FUNC_1(VAR_4, VAR_8 + 0x40) != VAR_9)
   || (FUNC_1(VAR_4, VAR_8 + 0x80) != VAR_9)
   || (FUNC_1(VAR_4, VAR_8 + 0xc0) != VAR_9))
      return -VAR_0;
 }

 FUNC_3(VAR_6->type, "lm80", VAR_2);

 return 0;
}
