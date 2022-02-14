
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
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
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_7 ;
 int FUNC_4 (struct i2c_client*,int ) ;

__attribute__((used)) static int
FUNC_5(struct i2c_client *VAR_8, int VAR_9,
   struct i2c_board_info *VAR_10)
{
 struct i2c_adapter *VAR_11 = VAR_8->adapter;

 if (!FUNC_2(VAR_11, VAR_1)) {
  return -VAR_0;
 }
 if (VAR_9 < 0) {
  if (((FUNC_4(VAR_8,
      VAR_4) & 0x80) != 0x00)) {
   FUNC_0(&VAR_11->dev,
    "W83L786NG detection failed at 0x%02x.\n",
    VAR_8->addr);
   return -VAR_0;
  }
 }

 if (VAR_9 <= 0) {
  u16 VAR_12;
  u8 VAR_13;

  VAR_12 = (FUNC_4(VAR_8,
      VAR_5) << 8) +
      FUNC_4(VAR_8, VAR_6);
  VAR_13 = FUNC_4(VAR_8, VAR_3);

  if (VAR_12 == 0x5CA3) {
   if (VAR_13 == 0x80) {
    VAR_9 = VAR_7;
   }
  }

  if (VAR_9 <= 0) {
   FUNC_1(&VAR_11->dev,
       "Unsupported chip (man_id=0x%04X, "
       "chip_id=0x%02X).\n", VAR_12, VAR_13);
   return -VAR_0;
  }
 }

 FUNC_3(VAR_10->type, "w83l786ng", VAR_2);

 return 0;
}
