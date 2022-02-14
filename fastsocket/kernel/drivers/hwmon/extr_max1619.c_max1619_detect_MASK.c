
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
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_9, int VAR_10,
     struct i2c_board_info *VAR_11)
{
 struct i2c_adapter *VAR_12 = VAR_9->adapter;
 u8 VAR_13=0, VAR_14=0, VAR_15=0;

 if (!FUNC_2(VAR_12, VAR_1))
  return -VAR_0;
 if (VAR_10 < 0) {
  VAR_13 = FUNC_3(VAR_9,
         VAR_4);
  VAR_14 = FUNC_3(VAR_9,
          VAR_5);
  VAR_15 = FUNC_3(VAR_9,
    VAR_7);
  if ((VAR_13 & 0x03) != 0x00
   || VAR_14 > 0x07 || (VAR_15 & 0x61 ) !=0x00) {
   FUNC_0(&VAR_12->dev,
    "MAX1619 detection failed at 0x%02x.\n",
    VAR_9->addr);
   return -VAR_0;
  }
 }

 if (VAR_10 <= 0) {
  u8 VAR_16, VAR_17;

  VAR_16 = FUNC_3(VAR_9,
    VAR_6);
  VAR_17 = FUNC_3(VAR_9,
     VAR_3);

  if ((VAR_16 == 0x4D) && (VAR_17 == 0x04))
   VAR_10 = VAR_8;

  if (VAR_10 <= 0) {
   FUNC_1(&VAR_12->dev,
       "Unsupported chip (man_id=0x%02X, "
       "chip_id=0x%02X).\n", VAR_16, VAR_17);
   return -VAR_0;
  }
 }

 FUNC_4(VAR_11->type, "max1619", VAR_2);

 return 0;
}
