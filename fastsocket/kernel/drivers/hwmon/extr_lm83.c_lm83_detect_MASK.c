
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
 int VAR_7 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_10, int VAR_11,
         struct i2c_board_info *VAR_12)
{
 struct i2c_adapter *VAR_13 = VAR_10->adapter;
 const char *VAR_14 = "";

 if (!FUNC_2(VAR_13, VAR_1))
  return -VAR_0;
 if (VAR_11 == 0)
  VAR_11 = VAR_9;

 if (VAR_11 < 0) {
  if (((FUNC_3(VAR_10, VAR_6)
      & 0xA8) != 0x00) ||
      ((FUNC_3(VAR_10, VAR_7)
      & 0x48) != 0x00) ||
      ((FUNC_3(VAR_10, VAR_4)
      & 0x41) != 0x00)) {
   FUNC_0(&VAR_13->dev,
    "LM83 detection failed at 0x%02x.\n",
    VAR_10->addr);
   return -VAR_0;
  }
 }

 if (VAR_11 <= 0) {
  u8 VAR_15, VAR_16;

  VAR_15 = FUNC_3(VAR_10,
      VAR_5);
  VAR_16 = FUNC_3(VAR_10,
      VAR_3);

  if (VAR_15 == 0x01) {
   if (VAR_16 == 0x03) {
    VAR_11 = VAR_9;
   } else
   if (VAR_16 == 0x01) {
    VAR_11 = VAR_8;
   }
  }

  if (VAR_11 <= 0) {
   FUNC_1(&VAR_13->dev,
       "Unsupported chip (man_id=0x%02X, "
       "chip_id=0x%02X).\n", VAR_15, VAR_16);
   return -VAR_0;
  }
 }

 if (VAR_11 == VAR_9) {
  VAR_14 = "lm83";
 } else
 if (VAR_11 == VAR_8) {
  VAR_14 = "lm82";
 }

 FUNC_4(VAR_12->type, VAR_14, VAR_2);

 return 0;
}
