
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {struct i2c_adapter* adapter; } ;
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
 int VAR_8 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int VAR_9 ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_10, int VAR_11,
         struct i2c_board_info *VAR_12)
{
 struct i2c_adapter *VAR_13 = VAR_10->adapter;

 if (!FUNC_1(VAR_13, VAR_1))
  return -VAR_0;

 if (VAR_11 < 0) {
  u8 VAR_14, VAR_15, VAR_16, VAR_17;
  u8 VAR_18, VAR_19;

  VAR_14 = FUNC_2(VAR_10,
    VAR_8);
  VAR_15 = FUNC_2(VAR_10,
     VAR_5);
  VAR_16 = FUNC_2(VAR_10,
         VAR_6);
  VAR_17 = FUNC_2(VAR_10,
         VAR_7);
  VAR_18 = FUNC_2(VAR_10,
       VAR_4);
  VAR_19 = FUNC_2(VAR_10,
     VAR_3);

  if (VAR_14 == 0x01
   && VAR_15 == 0x41
   && (VAR_16 & 0x18) == 0x00
   && (VAR_17 & 0xF8) == 0x00
   && (VAR_18 & 0x20) == 0x00
   && (VAR_19 & 0xA4) == 0xA4) {
   VAR_11 = VAR_9;
  } else {
   FUNC_0(&VAR_13->dev, "Unsupported chip "
    "(man_id=0x%02X, chip_id=0x%02X).\n",
    VAR_14, VAR_15);
   return -VAR_0;
  }
 }

 FUNC_3(VAR_12->type, "lm63", VAR_2);

 return 0;
}
