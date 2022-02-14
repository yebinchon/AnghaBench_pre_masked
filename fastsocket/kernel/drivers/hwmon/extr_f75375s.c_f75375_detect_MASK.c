
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,int ,int) ;
 int FUNC_1 (int *,char*,char const*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_7, int VAR_8,
    struct i2c_board_info *VAR_9)
{
 struct i2c_adapter *VAR_10 = VAR_7->adapter;
 u8 VAR_11 = 0;
 const char *VAR_12 = "";

 if (VAR_8 < 0) {
  u16 VAR_13 = FUNC_2(VAR_7, VAR_2);
  u16 VAR_14 = FUNC_2(VAR_7, VAR_1);
  VAR_11 = FUNC_3(VAR_7, VAR_3);
  if (VAR_14 == 0x0306 && VAR_13 == 0x1934) {
   VAR_8 = VAR_6;
  } else if (VAR_14 == 0x0204 && VAR_13 == 0x1934) {
   VAR_8 = VAR_5;
  } else {
   FUNC_0(&VAR_10->dev,
    "failed,%02X,%02X,%02X\n",
    VAR_14, VAR_11, VAR_13);
   return -VAR_0;
  }
 }

 if (VAR_8 == VAR_6) {
  VAR_12 = "f75375";
 } else if (VAR_8 == VAR_5) {
  VAR_12 = "f75373";
 }
 FUNC_1(&VAR_10->dev, "found %s version: %02X\n", VAR_12, VAR_11);
 FUNC_4(VAR_9->type, VAR_12, VAR_4);

 return 0;
}
