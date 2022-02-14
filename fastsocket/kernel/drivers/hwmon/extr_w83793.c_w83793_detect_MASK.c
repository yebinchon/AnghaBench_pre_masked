
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {unsigned short addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,unsigned short) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_8, int VAR_9,
    struct i2c_board_info *VAR_10)
{
 u8 VAR_11, VAR_12;
 struct i2c_adapter *VAR_13 = VAR_8->adapter;
 unsigned short VAR_14 = VAR_8->addr;

 if (!FUNC_1(VAR_13, VAR_1)) {
  return -VAR_0;
 }

 VAR_12 = FUNC_2(VAR_8, VAR_3);

 if (VAR_9 < 0) {
  VAR_11 = VAR_12 & 0x80 ? 0x5c : 0xa3;

  if (VAR_11 != FUNC_2(VAR_8,
       VAR_6)) {
   FUNC_3("w83793: Detection failed at check "
     "vendor id\n");
   return -VAR_0;
  }



  if ((VAR_12 & 0x07) == 0
   && FUNC_2(VAR_8, VAR_5) !=
      (VAR_14 << 1)) {
   FUNC_3("w83793: Detection failed at check "
     "i2c addr\n");
   return -VAR_0;
  }

 }




 if (VAR_9 <= 0) {
  if (0x7b == FUNC_2(VAR_8,
           VAR_4)) {
   VAR_9 = VAR_7;
  } else {
   if (VAR_9 == 0)
    FUNC_0(&VAR_13->dev, "w83793: Ignoring "
      "'force' parameter for unknown chip "
      "at address 0x%02x\n", VAR_14);
   return -VAR_0;
  }
 }

 FUNC_4(VAR_10->type, "w83793", VAR_2);

 return 0;
}
