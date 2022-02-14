
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; int flags; } ;
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
 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (struct i2c_adapter*) ;
 scalar_t__ FUNC_3 (struct i2c_adapter*,int ) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_18, int VAR_19,
         struct i2c_board_info *VAR_20)
{
 struct i2c_adapter *VAR_21 = VAR_18->adapter;
 int VAR_22 = VAR_18->addr;
 const char *VAR_23 = "";

 if (!FUNC_3(VAR_21, VAR_3))
  return -VAR_0;
 if (VAR_19 == 0)
  VAR_19 = VAR_13;

 if (VAR_19 < 0) {
  int VAR_24, VAR_25, VAR_26, VAR_27;

  if ((VAR_24 = FUNC_4(VAR_18,
      VAR_9)) < 0
   || (VAR_25 = FUNC_4(VAR_18,
      VAR_5)) < 0
   || (VAR_26 = FUNC_4(VAR_18,
      VAR_6)) < 0
   || (VAR_27 = FUNC_4(VAR_18,
      VAR_8)) < 0)
   return -VAR_0;

  if ((VAR_22 == 0x4C || VAR_22 == 0x4D)
   && VAR_24 == 0x01) {
   int VAR_28;

   if ((VAR_28 = FUNC_4(VAR_18,
      VAR_7)) < 0)
    return -VAR_0;

   if ((VAR_26 & 0x2A) == 0x00
    && (VAR_28 & 0xF8) == 0x00
    && VAR_27 <= 0x09) {
    if (VAR_22 == 0x4C
     && (VAR_25 & 0xF0) == 0x20) {
     VAR_19 = VAR_13;
    } else
    if ((VAR_25 & 0xF0) == 0x30) {
     VAR_19 = VAR_14;
     FUNC_1(&VAR_21->dev,
       "Assuming LM99 chip at "
       "0x%02x\n", VAR_22);
     FUNC_1(&VAR_21->dev,
       "If it is an LM89, pass "
       "force_lm86=%d,0x%02x when "
       "loading the lm90 driver\n",
       FUNC_2(VAR_21),
       VAR_22);
    } else
    if (VAR_22 == 0x4C
     && (VAR_25 & 0xF0) == 0x10) {
     VAR_19 = VAR_12;
    }
   }
  } else
  if ((VAR_22 == 0x4C || VAR_22 == 0x4D)
   && VAR_24 == 0x41) {
   if ((VAR_25 & 0xF0) == 0x40
    && (VAR_26 & 0x3F) == 0x00
    && VAR_27 <= 0x0A) {
    VAR_19 = VAR_10;
   } else
   if (VAR_25 == 0x51
    && (VAR_26 & 0x1B) == 0x00
    && VAR_27 <= 0x0A) {
    VAR_19 = VAR_11;
   }
  } else
  if (VAR_24 == 0x4D) {
   if (VAR_25 == VAR_24
    && (VAR_22 == 0x4C || VAR_22 == 0x4D)
    && (VAR_26 & 0x1F) == (VAR_24 & 0x0F)
    && VAR_27 <= 0x09) {
     VAR_19 = VAR_16;
   } else






   if (VAR_25 == 0x01
    && (VAR_26 & 0x03) == 0x00
    && VAR_27 <= 0x07) {
     VAR_19 = VAR_17;
   } else





   if (VAR_25 == 0x59
    && (VAR_26 & 0x3f) == 0x00
    && VAR_27 <= 0x07) {
    VAR_19 = VAR_15;
   }
  }

  if (VAR_19 <= 0) {
   FUNC_0(&VAR_21->dev,
    "Unsupported chip at 0x%02x (man_id=0x%02X, "
    "chip_id=0x%02X)\n", VAR_22, VAR_24, VAR_25);
   return -VAR_0;
  }
 }


 if (VAR_19 == VAR_13) {
  VAR_23 = "lm90";
 } else if (VAR_19 == VAR_10) {
  VAR_23 = "adm1032";


  if (FUNC_3(VAR_21, VAR_2))
   VAR_20->flags |= VAR_1;
 } else if (VAR_19 == VAR_14) {
  VAR_23 = "lm99";
 } else if (VAR_19 == VAR_12) {
  VAR_23 = "lm86";
 } else if (VAR_19 == VAR_16) {
  VAR_23 = "max6657";
 } else if (VAR_19 == VAR_17) {
  VAR_23 = "max6680";
 } else if (VAR_19 == VAR_11) {
  VAR_23 = "adt7461";
 } else if (VAR_19 == VAR_15) {
  VAR_23 = "max6646";
 }
 FUNC_5(VAR_20->type, VAR_23, VAR_4);

 return 0;
}
