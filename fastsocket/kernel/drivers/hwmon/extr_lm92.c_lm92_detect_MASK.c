
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct i2c_adapter*,int) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_7, int VAR_8,
         struct i2c_board_info *VAR_9)
{
 struct i2c_adapter *VAR_10 = VAR_7->adapter;

 if (!FUNC_0(VAR_10, VAR_1
         | VAR_2))
  return -VAR_0;



 if (VAR_8 < 0) {
  u8 VAR_11 = FUNC_1(VAR_7,
        VAR_4);
  u16 VAR_12 = FUNC_2(VAR_7,
        VAR_5);

  if ((VAR_11 & 0xe0) == 0x00
   && VAR_12 == 0x0180) {
   FUNC_4("lm92: Found National Semiconductor LM92 chip\n");
    VAR_8 = VAR_6;
  } else
  if (FUNC_3(VAR_7)) {
   FUNC_4("lm92: Found Maxim MAX6635 chip\n");
   VAR_8 = VAR_6;
  }
  else
   return -VAR_0;
 }

 FUNC_5(VAR_9->type, "lm92", VAR_3);

 return 0;
}
