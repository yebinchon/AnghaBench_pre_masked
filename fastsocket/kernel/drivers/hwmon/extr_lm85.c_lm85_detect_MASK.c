
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
 int VAR_9 ;




 int VAR_10 ;



 int VAR_11 ;
 int FUNC_0 (int *,char*,...) ;


 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ) ;


 int FUNC_4 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_12, int VAR_13,
         struct i2c_board_info *VAR_14)
{
 struct i2c_adapter *VAR_15 = VAR_12->adapter;
 int VAR_16 = VAR_12->addr;
 const char *VAR_17;

 if (!FUNC_1(VAR_15, VAR_1)) {

  return -VAR_0;
 }


 if (VAR_13 < 0) {
  int VAR_18 = FUNC_3(VAR_12, VAR_6);
  int VAR_19 = FUNC_3(VAR_12, VAR_7);

  FUNC_0(&VAR_15->dev, "Detecting device at 0x%02x with "
   "COMPANY: 0x%02x and VERSTEP: 0x%02x\n",
   VAR_16, VAR_18, VAR_19);


  if ((VAR_19 & VAR_10) != VAR_8 &&
      (VAR_19 & VAR_10) != VAR_9) {
   FUNC_0(&VAR_15->dev, "Autodetection failed: "
    "unsupported version\n");
   return -VAR_0;
  }
  VAR_13 = VAR_11;


  if (VAR_18 == VAR_4) {
   switch (VAR_19) {
   case 137:
    VAR_13 = 128;
    break;
   case 138:
    VAR_13 = 129;
    break;
   case 136:
   case 135:

    if (FUNC_2(VAR_12)) {
     FUNC_0(&VAR_15->dev,
      "Found Winbond WPCD377I, "
      "ignoring\n");
     return -VAR_0;
    }
    break;
   }
  } else if (VAR_18 == VAR_3) {
   switch (VAR_19) {
   case 146:
    VAR_13 = 134;
    break;
   case 145:
   case 144:
    VAR_13 = 133;
    break;
   case 143:
   case 142:
    VAR_13 = 132;
    break;
   }
  } else if (VAR_18 == VAR_5) {
   switch (VAR_19) {
   case 141:
   case 140:

    VAR_13 = 131;
    break;
   case 139:
    VAR_13 = 130;
    break;
   }
  } else {
   FUNC_0(&VAR_15->dev, "Autodetection failed: "
    "unknown vendor\n");
   return -VAR_0;
  }
 }

 switch (VAR_13) {
 case 129:
  VAR_17 = "lm85b";
  break;
 case 128:
  VAR_17 = "lm85c";
  break;
 case 134:
  VAR_17 = "adm1027";
  break;
 case 133:
  VAR_17 = "adt7463";
  break;
 case 132:
  VAR_17 = "adt7468";
  break;
 case 131:
  VAR_17 = "emc6d100";
  break;
 case 130:
  VAR_17 = "emc6d102";
  break;
 default:
  VAR_17 = "lm85";
 }
 FUNC_4(VAR_14->type, VAR_17, VAR_2);

 return 0;
}
