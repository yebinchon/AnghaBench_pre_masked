
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
 int FUNC_0 (struct i2c_adapter*,int) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4, int VAR_5,
         struct i2c_board_info *VAR_6)
{
 struct i2c_adapter *VAR_7 = VAR_4->adapter;
 int VAR_8;

 if (!FUNC_0(VAR_7, VAR_1 |
         VAR_2))
  return -VAR_0;
 if (VAR_5 < 0) {
  int VAR_9, VAR_10, VAR_11, VAR_12;


  VAR_9 = FUNC_2(VAR_4, 0);
  VAR_10 = FUNC_1(VAR_4, 1);
  VAR_11 = FUNC_2(VAR_4, 2);
  if (FUNC_2(VAR_4, 4) != VAR_11
   || FUNC_2(VAR_4, 5) != VAR_11
   || FUNC_2(VAR_4, 6) != VAR_11
   || FUNC_2(VAR_4, 7) != VAR_11)
   return -VAR_0;
  VAR_12 = FUNC_2(VAR_4, 3);
  if (FUNC_2(VAR_4, 4) != VAR_12
   || FUNC_2(VAR_4, 5) != VAR_12
   || FUNC_2(VAR_4, 6) != VAR_12
   || FUNC_2(VAR_4, 7) != VAR_12)
   return -VAR_0;


  if (VAR_10 & 0xe0)
   return -VAR_0;


  for (VAR_8 = 8; VAR_8 < 0xff; VAR_8 += 8)
   if (FUNC_1(VAR_4, VAR_8 + 1) != VAR_10
    || FUNC_2(VAR_4, VAR_8 + 2) != VAR_11
    || FUNC_2(VAR_4, VAR_8 + 3) != VAR_12)
    return -VAR_0;
 }




 FUNC_3(VAR_6->type, "lm75", VAR_3);

 return 0;
}
