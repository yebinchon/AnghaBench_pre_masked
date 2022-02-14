
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
 int VAR_9 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_10, int VAR_11,
     struct i2c_board_info *VAR_12)
{
 struct i2c_adapter *VAR_13 = VAR_10->adapter;

 if (!FUNC_1(VAR_13, VAR_8))
  return -VAR_7;

 if (VAR_11 <= 0) {
  int VAR_14, VAR_15, VAR_16;

  VAR_14 = FUNC_2(VAR_10, VAR_3);
  if (VAR_14 != VAR_6)
   return -VAR_7;

  VAR_15 = FUNC_2(VAR_10, VAR_1);
  if (VAR_15 != VAR_0)
   return -VAR_7;

  VAR_16 = FUNC_2(VAR_10,
          VAR_2);
  if (VAR_16 != VAR_4 && VAR_16 != VAR_5)
   return -VAR_7;
 } else
  FUNC_0(&VAR_13->dev, "detection forced\n");

 FUNC_3(VAR_12->type, "adt7473", VAR_9);

 return 0;
}
