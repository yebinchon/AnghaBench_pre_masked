
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int VAR_7 ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_8, int VAR_9,
         struct i2c_board_info *VAR_10)
{
 struct i2c_adapter *VAR_11 = VAR_8->adapter;
 static const char *VAR_12[] = { "lm87", "adm1024" };

 if (!FUNC_1(VAR_11, VAR_1))
  return -VAR_0;


 if (VAR_9 == 0)
  VAR_9 = VAR_7;


 if (VAR_9 < 0) {
  u8 VAR_13 = FUNC_2(VAR_8, VAR_3);
  u8 VAR_14 = FUNC_2(VAR_8, VAR_5);

  if (VAR_13 == 0x02
   && (VAR_14 >= 0x01 && VAR_14 <= 0x08))
   VAR_9 = VAR_7;
  else if (VAR_13 == 0x41
        && (VAR_14 & 0xf0) == 0x10)
   VAR_9 = VAR_6;

  if (VAR_9 < 0
   || (FUNC_2(VAR_8, VAR_4) & 0x80)) {
   FUNC_0(&VAR_11->dev,
    "LM87 detection failed at 0x%02x.\n",
    VAR_8->addr);
   return -VAR_0;
  }
 }

 FUNC_3(VAR_10->type, VAR_12[VAR_9 - 1], VAR_2);

 return 0;
}
