
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union i2c_smbus_data {int dummy; } i2c_smbus_data ;
struct i2c_client {int dummy; } ;
struct i2c_board_info {unsigned short addr; } ;
struct i2c_adapter {int dev; } ;


 unsigned short const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,unsigned short const) ;
 scalar_t__ FUNC_3 (struct i2c_adapter*,unsigned short const) ;
 int FUNC_4 (struct i2c_adapter*,int ) ;
 struct i2c_client* FUNC_5 (struct i2c_adapter*,struct i2c_board_info*) ;
 scalar_t__ FUNC_6 (struct i2c_adapter*,unsigned short const,int ,int ,int ,int ,union i2c_smbus_data*) ;

struct i2c_client *
FUNC_7(struct i2c_adapter *VAR_7,
        struct i2c_board_info *VAR_8,
        unsigned short const *VAR_9)
{
 int VAR_10;


 if (!FUNC_4(VAR_7, VAR_2)) {
  FUNC_1(&VAR_7->dev, "Probing not supported\n");
  return ((void*)0);
 }

 for (VAR_10 = 0; VAR_9[VAR_10] != VAR_0; VAR_10++) {

  if (VAR_9[VAR_10] < 0x03 || VAR_9[VAR_10] > 0x77) {
   FUNC_2(&VAR_7->dev, "Invalid 7-bit address "
     "0x%02x\n", VAR_9[VAR_10]);
   continue;
  }


  if (FUNC_3(VAR_7, VAR_9[VAR_10])) {
   FUNC_0(&VAR_7->dev, "Address 0x%02x already in "
    "use, not probing\n", VAR_9[VAR_10]);
   continue;
  }
  if ((VAR_9[VAR_10] & ~0x07) == 0x30
   || (VAR_9[VAR_10] & ~0x0f) == 0x50
   || !FUNC_4(VAR_7, VAR_1)) {
   union i2c_smbus_data VAR_11;

   if (FUNC_6(VAR_7, VAR_9[VAR_10], 0,
        VAR_5, 0,
        VAR_3, &VAR_11) >= 0)
    break;
  } else {
   if (FUNC_6(VAR_7, VAR_9[VAR_10], 0,
        VAR_6, 0,
        VAR_4, ((void*)0)) >= 0)
    break;
  }
 }

 if (VAR_9[VAR_10] == VAR_0) {
  FUNC_0(&VAR_7->dev, "Probing failed, no device found\n");
  return ((void*)0);
 }

 VAR_8->addr = VAR_9[VAR_10];
 return FUNC_5(VAR_7, VAR_8);
}
