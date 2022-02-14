
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
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,char*,int) ;
 int VAR_7 ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int VAR_8 ;
 int FUNC_4 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_9, int VAR_10,
     struct i2c_board_info *VAR_11)
{
 struct i2c_adapter *VAR_12 = VAR_9->adapter;
 const char *VAR_13 = "";
 int VAR_14 = VAR_9->addr;
 u8 VAR_15, VAR_16;

 if (!FUNC_2(VAR_12, VAR_4))
  return -VAR_3;

 if (VAR_10 == 0) {
  VAR_10 = VAR_6;
 }

 if (VAR_10 < 0) {


  if (FUNC_3(VAR_9, VAR_1)
    != VAR_14) {
   FUNC_0(&VAR_12->dev, "detect fail: address match, "
     "0x%02x\n", VAR_14);
   return -VAR_3;
  }


  VAR_15 = FUNC_3(VAR_9,
    VAR_2);
  if (VAR_15 == 0x23) {
   VAR_10 = VAR_6;
  } else if (VAR_15 == 0xda) {
   VAR_10 = VAR_7;
  } else if (VAR_15 == 0x01) {
   VAR_10 = VAR_8;
  } else {
   FUNC_0(&VAR_12->dev, "detect fail: unknown manuf, "
     "0x%02x\n", VAR_15);
   return -VAR_3;
  }


  VAR_16 = FUNC_3(VAR_9,
    VAR_0);
  FUNC_1(&VAR_12->dev, "found %s revision %u\n",
    VAR_15 == 0x23 ? "ADM9240" :
    VAR_15 == 0xda ? "DS1780" : "LM81", VAR_16);
 }


 if (VAR_10 == VAR_6) {
  VAR_13 = "adm9240";
 } else if (VAR_10 == VAR_7) {
  VAR_13 = "ds1780";
 } else if (VAR_10 == VAR_8) {
  VAR_13 = "lm81";
 }
 FUNC_4(VAR_11->type, VAR_13, VAR_5);

 return 0;
}
