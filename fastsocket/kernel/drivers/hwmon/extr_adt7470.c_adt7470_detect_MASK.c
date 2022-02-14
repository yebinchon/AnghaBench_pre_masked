
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {struct i2c_adapter* adapter; } ;
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
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_9, int VAR_10,
     struct i2c_board_info *VAR_11)
{
 struct i2c_adapter *VAR_12 = VAR_9->adapter;

 if (!FUNC_1(VAR_12, VAR_7))
  return -VAR_6;

 if (VAR_10 <= 0) {
  int VAR_13, VAR_14, VAR_15;

  VAR_13 = FUNC_2(VAR_9, VAR_3);
  if (VAR_13 != VAR_5)
   return -VAR_6;

  VAR_14 = FUNC_2(VAR_9, VAR_1);
  if (VAR_14 != VAR_0)
   return -VAR_6;

  VAR_15 = FUNC_2(VAR_9,
          VAR_2);
  if (VAR_15 != VAR_4)
   return -VAR_6;
 } else
  FUNC_0(&VAR_12->dev, "detection forced\n");

 FUNC_3(VAR_11->type, "adt7470", VAR_8);

 return 0;
}
