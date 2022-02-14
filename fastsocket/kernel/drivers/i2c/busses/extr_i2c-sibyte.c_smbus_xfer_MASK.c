
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; int word; } ;
typedef int u8 ;
typedef int u16 ;
struct i2c_algo_sibyte_data {int dummy; } ;
struct i2c_adapter {struct i2c_algo_sibyte_data* algo_data; } ;





 char VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i2c_algo_sibyte_data*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_14, u16 VAR_15,
        unsigned short VAR_16, char VAR_17,
        u8 VAR_18, int VAR_19, union i2c_smbus_data * VAR_20)
{
 struct i2c_algo_sibyte_data *VAR_21 = VAR_14->algo_data;
 int VAR_22 = 0;
 int VAR_23;

 while (FUNC_5(FUNC_0(VAR_21, VAR_7)) & VAR_1)
  ;

 switch (VAR_19) {
 case 129:
  FUNC_6((FUNC_1(VAR_15) |
      (VAR_17 == VAR_0 ? VAR_3 : 0) |
      VAR_10), FUNC_0(VAR_21, VAR_6));
  break;
 case 131:
  if (VAR_17 == VAR_0) {
   FUNC_6((FUNC_1(VAR_15) | VAR_11),
      FUNC_0(VAR_21, VAR_6));
   VAR_22 = 1;
  } else {
   FUNC_6(FUNC_2(VAR_18), FUNC_0(VAR_21, VAR_4));
   FUNC_6((FUNC_1(VAR_15) | VAR_12),
      FUNC_0(VAR_21, VAR_6));
  }
  break;
 case 130:
  FUNC_6(FUNC_2(VAR_18), FUNC_0(VAR_21, VAR_4));
  if (VAR_17 == VAR_0) {
   FUNC_6((FUNC_1(VAR_15) | VAR_8),
      FUNC_0(VAR_21, VAR_6));
   VAR_22 = 1;
  } else {
   FUNC_6(FUNC_3(VAR_20->byte),
      FUNC_0(VAR_21, VAR_5));
   FUNC_6((FUNC_1(VAR_15) | VAR_13),
      FUNC_0(VAR_21, VAR_6));
  }
  break;
 case 128:
  FUNC_6(FUNC_2(VAR_18), FUNC_0(VAR_21, VAR_4));
  if (VAR_17 == VAR_0) {
   FUNC_6((FUNC_1(VAR_15) | VAR_9),
      FUNC_0(VAR_21, VAR_6));
   VAR_22 = 2;
  } else {
   FUNC_6(FUNC_3(VAR_20->word & 0xff),
      FUNC_0(VAR_21, VAR_5));
   FUNC_6(FUNC_4(VAR_20->word >> 8),
      FUNC_0(VAR_21, VAR_5));
   FUNC_6((FUNC_1(VAR_15) | VAR_13),
      FUNC_0(VAR_21, VAR_6));
  }
  break;
 default:
  return -1;
 }

 while (FUNC_5(FUNC_0(VAR_21, VAR_7)) & VAR_1)
  ;

 VAR_23 = FUNC_5(FUNC_0(VAR_21, VAR_7));
 if (VAR_23 & VAR_2) {

  FUNC_6(VAR_2, FUNC_0(VAR_21, VAR_7));
  return -1;
 }

 if (VAR_22 == 1)
  VAR_20->byte = FUNC_5(FUNC_0(VAR_21, VAR_5)) & 0xff;
 if (VAR_22 == 2)
  VAR_20->word = FUNC_5(FUNC_0(VAR_21, VAR_5)) & 0xffff;

 return 0;
}
