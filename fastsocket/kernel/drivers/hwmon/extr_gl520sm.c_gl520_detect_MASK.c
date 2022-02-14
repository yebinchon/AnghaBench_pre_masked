
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_adapter*,int) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_7, int VAR_8,
   struct i2c_board_info *VAR_9)
{
 struct i2c_adapter *VAR_10 = VAR_7->adapter;

 if (!FUNC_2(VAR_10, VAR_4 |
         VAR_5))
  return -VAR_0;


 if (VAR_8 < 0) {
  if ((FUNC_1(VAR_7, VAR_1) != 0x20) ||
      ((FUNC_1(VAR_7, VAR_3) & 0x7f) != 0x00) ||
      ((FUNC_1(VAR_7, VAR_2) & 0x80) != 0x00)) {
   FUNC_0(&VAR_7->dev, "Unknown chip type, skipping\n");
   return -VAR_0;
  }
 }

 FUNC_3(VAR_9->type, "gl520sm", VAR_6);

 return 0;
}
