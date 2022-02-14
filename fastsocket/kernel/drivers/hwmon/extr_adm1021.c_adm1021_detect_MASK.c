
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dummy; } ;


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
 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,char const*,int ) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_16, int VAR_17,
     struct i2c_board_info *VAR_18)
{
 struct i2c_adapter *VAR_19 = VAR_16->adapter;
 int VAR_20;
 const char *VAR_21 = "";
 int VAR_22, VAR_23, VAR_24;

 if (!FUNC_1(VAR_19, VAR_6)) {
  FUNC_3("adm1021: detect failed, "
    "smbus byte data not supported!\n");
  return -VAR_5;
 }

 VAR_23 = FUNC_2(VAR_16, VAR_4);
 VAR_22 = FUNC_2(VAR_16,
          VAR_1);
 VAR_24 = FUNC_2(VAR_16, VAR_0);


 if (VAR_17 < 0) {
  if ((VAR_23 & 0x03) != 0x00 || (VAR_24 & 0x3F) != 0x00
      || (VAR_22 & 0xF8) != 0x00) {
   FUNC_3("adm1021: detect failed, "
     "chip not detected!\n");
   return -VAR_5;
  }
 }


 if (VAR_17 <= 0) {
  VAR_20 = FUNC_2(VAR_16, VAR_3);
  if (VAR_20 == 0x41)
   if ((FUNC_2(VAR_16,
     VAR_2) & 0xF0) == 0x30)
    VAR_17 = VAR_9;
   else
    VAR_17 = VAR_8;
  else if (VAR_20 == 0x49)
   VAR_17 = VAR_15;
  else if (VAR_20 == 0x23)
   VAR_17 = VAR_10;
  else if ((VAR_20 == 0x4d) &&
    (FUNC_2(VAR_16,
         VAR_2) == 0x01))
   VAR_17 = VAR_13;
  else if (VAR_20 == 0x54)
   VAR_17 = VAR_14;

  else if (VAR_22 == 0x00
    && (VAR_17 == 0
        || ((VAR_24 & 0x7F) == 0x00
     && (VAR_23 & 0xAB) == 0x00)))
   VAR_17 = VAR_11;
  else
   VAR_17 = VAR_12;
 }

 if (VAR_17 == VAR_12) {
  VAR_21 = "max1617";
 } else if (VAR_17 == VAR_13) {
  VAR_21 = "max1617a";
 } else if (VAR_17 == VAR_8) {
  VAR_21 = "adm1021";
 } else if (VAR_17 == VAR_9) {
  VAR_21 = "adm1023";
 } else if (VAR_17 == VAR_15) {
  VAR_21 = "thmc10";
 } else if (VAR_17 == VAR_11) {
  VAR_21 = "lm84";
 } else if (VAR_17 == VAR_10) {
  VAR_21 = "gl523sm";
 } else if (VAR_17 == VAR_14) {
  VAR_21 = "mc1066";
 }
 FUNC_3("adm1021: Detected chip %s at adapter %d, address 0x%02x.\n",
   VAR_21, FUNC_0(VAR_19), VAR_16->addr);
 FUNC_4(VAR_18->type, VAR_21, VAR_7);

 return 0;
}
