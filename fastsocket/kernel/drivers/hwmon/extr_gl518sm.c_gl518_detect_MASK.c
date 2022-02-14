
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
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct i2c_adapter*,int) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_9, int VAR_10,
   struct i2c_board_info *VAR_11)
{
 struct i2c_adapter *VAR_12 = VAR_9->adapter;
 int VAR_13;

 if (!FUNC_3(VAR_12, VAR_4 |
         VAR_5))
  return -VAR_0;



 if (VAR_10 < 0) {
  if ((FUNC_1(VAR_9, VAR_1) != 0x80)
   || (FUNC_1(VAR_9, VAR_2) & 0x80))
   return -VAR_0;
 }


 if (VAR_10 <= 0) {
  VAR_13 = FUNC_1(VAR_9, VAR_3);
  if (VAR_13 == 0x00) {
   VAR_10 = VAR_7;
  } else if (VAR_13 == 0x80) {
   VAR_10 = VAR_8;
  } else {
   if (VAR_10 <= 0)
    FUNC_0(&VAR_12->dev,
        "Ignoring 'force' parameter for unknown "
        "chip at adapter %d, address 0x%02x\n",
        FUNC_2(VAR_12), VAR_9->addr);
   return -VAR_0;
  }
 }

 FUNC_4(VAR_11->type, "gl518sm", VAR_6);

 return 0;
}
