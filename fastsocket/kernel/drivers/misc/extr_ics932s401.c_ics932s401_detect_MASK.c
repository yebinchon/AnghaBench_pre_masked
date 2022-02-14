
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
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_10, int VAR_11,
     struct i2c_board_info *VAR_12)
{
 struct i2c_adapter *VAR_13 = VAR_10->adapter;

 if (!FUNC_2(VAR_13, VAR_1))
  return -VAR_0;

 if (VAR_11 <= 0) {
  int VAR_14, VAR_15, VAR_16;

  VAR_14 = FUNC_3(VAR_10,
        VAR_5);
  VAR_14 >>= 8;
  VAR_16 = VAR_14 >> VAR_7;
  VAR_14 &= VAR_9;
  if (VAR_14 != VAR_8)
   return -VAR_0;

  VAR_15 = FUNC_3(VAR_10,
        VAR_4);
  VAR_15 >>= 8;
  if (VAR_15 != VAR_3)
   return -VAR_0;

  if (VAR_16 != VAR_6)
   FUNC_1(&VAR_13->dev, "Unknown revision %d\n",
     VAR_16);
 } else
  FUNC_0(&VAR_13->dev, "detection forced\n");

 FUNC_4(VAR_12->type, "ics932s401", VAR_2);

 return 0;
}
