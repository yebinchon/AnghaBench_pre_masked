
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (int *,char*,char const*,int ) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_10, int VAR_11,
    struct i2c_board_info *VAR_12)
{
 struct i2c_adapter *VAR_13 = VAR_10->adapter;
 const char *VAR_14[] = { "TMP421", "TMP422", "TMP423" };

 if (!FUNC_1(VAR_13, VAR_1))
  return -VAR_0;

 if (VAR_11 <= 0) {
  u8 VAR_15;

  VAR_15 = FUNC_2(VAR_10,
            VAR_5);
  if (VAR_15 != VAR_4)
   return -VAR_0;

  VAR_15 = FUNC_2(VAR_10,
            VAR_3);
  switch (VAR_15) {
  case 130:
   VAR_11 = VAR_6;
   break;
  case 129:
   VAR_11 = VAR_8;
   break;
  case 128:
   VAR_11 = VAR_9;
   break;
  default:
   return -VAR_0;
  }
 }
 FUNC_3(VAR_12->type, VAR_7[VAR_11 - 1].name, VAR_2);
 FUNC_0(&VAR_13->dev, "Detected TI %s chip at 0x%02x\n",
   VAR_14[VAR_11 - 1], VAR_10->addr);

 return 0;
}
