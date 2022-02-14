
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 scalar_t__ FUNC_3 (struct i2c_client*,int ) ;
 int VAR_7 ;
 int FUNC_4 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_8, int VAR_9,
     struct i2c_board_info *VAR_10)
{
 struct i2c_adapter *VAR_11 = VAR_8->adapter;
 int VAR_12 = VAR_8->addr;
 const char *VAR_13 = "";

 if (!FUNC_2(VAR_11, VAR_2))
  return -VAR_1;
 if (VAR_9 < 0) {
  if ((FUNC_3(VAR_8, VAR_5)
       != VAR_6)
  || (FUNC_3(VAR_8, VAR_4)
      < VAR_0)) {
   FUNC_0(&VAR_11->dev,
    "LM95241 detection failed at 0x%02x.\n",
    VAR_12);
   return -VAR_1;
  }
 }

 if (VAR_9 <= 0) {
  if ((FUNC_3(VAR_8, VAR_5)
       == VAR_6)
  && (FUNC_3(VAR_8, VAR_4)
      >= VAR_0)) {

   VAR_9 = VAR_7;

   if (VAR_9 <= 0) {
    FUNC_1(&VAR_11->dev, "Unsupported chip\n");
    return -VAR_1;
   }
  }
 }


 if (VAR_9 == VAR_7)
  VAR_13 = "lm95241";
 FUNC_4(VAR_10->type, VAR_13, VAR_3);
 return 0;
}
