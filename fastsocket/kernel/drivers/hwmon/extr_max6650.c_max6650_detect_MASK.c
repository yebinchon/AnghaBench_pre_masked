
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_8, int VAR_9,
     struct i2c_board_info *VAR_10)
{
 struct i2c_adapter *VAR_11 = VAR_8->adapter;
 int VAR_12 = VAR_8->addr;

 FUNC_0(&VAR_11->dev, "max6650_detect called, kind = %d\n", VAR_9);

 if (!FUNC_2(VAR_11, VAR_1)) {
  FUNC_0(&VAR_11->dev, "max6650: I2C bus doesn't support "
     "byte read mode, skipping.\n");
  return -VAR_0;
 }
 if ((VAR_9 < 0) &&
    ( (FUNC_3(VAR_8, VAR_5) & 0xC0)
     ||(FUNC_3(VAR_8, VAR_7) & 0xE0)
     ||(FUNC_3(VAR_8, VAR_4) & 0xE0)
     ||(FUNC_3(VAR_8, VAR_3) & 0xE0)
     ||(FUNC_3(VAR_8, VAR_6) & 0xFC))) {
  FUNC_0(&VAR_11->dev,
   "max6650: detection failed at 0x%02x.\n", VAR_12);
  return -VAR_0;
 }

 FUNC_1(&VAR_11->dev, "max6650: chip found at 0x%02x.\n", VAR_12);

 FUNC_4(VAR_10->type, "max6650", VAR_2);

 return 0;
}
