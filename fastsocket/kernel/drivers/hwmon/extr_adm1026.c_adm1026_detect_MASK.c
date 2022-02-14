
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
 int VAR_8 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int VAR_9 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (struct i2c_adapter*,int ) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_10, int VAR_11,
     struct i2c_board_info *VAR_12)
{
 struct i2c_adapter *VAR_13 = VAR_10->adapter;
 int VAR_14 = VAR_10->addr;
 int VAR_15, VAR_16;

 if (!FUNC_4(VAR_13, VAR_6)) {

  return -VAR_5;
 };



 VAR_15 = FUNC_0(VAR_10, VAR_1);
 VAR_16 = FUNC_0(VAR_10, VAR_2);

 FUNC_1(&VAR_13->dev, "Detecting device at %d,0x%02x with"
  " COMPANY: 0x%02x and VERSTEP: 0x%02x\n",
  FUNC_3(VAR_10->adapter), VAR_10->addr,
  VAR_15, VAR_16);


 if (VAR_11 <= 0) {
  FUNC_1(&VAR_13->dev, "Autodetecting device at %d,0x%02x "
   "...\n", FUNC_3(VAR_13), VAR_14);
  if (VAR_15 == VAR_0
      && VAR_16 == VAR_3) {
   VAR_11 = VAR_8;
  } else if (VAR_15 == VAR_0
   && (VAR_16 & 0xf0) == VAR_4) {
   FUNC_2(&VAR_13->dev, "Unrecognized stepping "
    "0x%02x. Defaulting to ADM1026.\n", VAR_16);
   VAR_11 = VAR_8;
  } else if ((VAR_16 & 0xf0) == VAR_4) {
   FUNC_2(&VAR_13->dev, "Found version/stepping "
    "0x%02x. Assuming generic ADM1026.\n",
    VAR_16);
   VAR_11 = VAR_9;
  } else {
   FUNC_1(&VAR_13->dev, "Autodetection failed\n");

   if (VAR_11 == 0) {
    FUNC_2(&VAR_13->dev, "Generic ADM1026 not "
     "found at %d,0x%02x.  Try "
     "force_adm1026.\n",
     FUNC_3(VAR_13), VAR_14);
   }
   return -VAR_5;
  }
 }
 FUNC_5(VAR_12->type, "adm1026", VAR_7);

 return 0;
}
