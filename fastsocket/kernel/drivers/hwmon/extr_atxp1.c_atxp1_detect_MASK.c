
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_client*,int) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_3, int VAR_4,
   struct i2c_board_info *VAR_5)
{
 struct i2c_adapter *VAR_6 = VAR_3->adapter;

 u8 VAR_7;

 if (!FUNC_1(VAR_6, VAR_1))
  return -VAR_0;


 if (!((FUNC_2(VAR_3, 0x3e) == 0) &&
      (FUNC_2(VAR_3, 0x3f) == 0) &&
      (FUNC_2(VAR_3, 0xfe) == 0) &&
      (FUNC_2(VAR_3, 0xff) == 0)))
  return -VAR_0;



 VAR_7 = FUNC_2(VAR_3, 0x00);

 if (!((FUNC_2(VAR_3, 0x10) == VAR_7) &&
       (FUNC_2(VAR_3, 0x11) == VAR_7)))
  return -VAR_0;


 VAR_7 = FUNC_4();

 if ((VAR_7 != 90) && (VAR_7 != 91)) {
  FUNC_0(&VAR_6->dev, "atxp1: Not supporting VRM %d.%d\n",
    VAR_7 / 10, VAR_7 % 10);
  return -VAR_0;
 }

 FUNC_3(VAR_5->type, "atxp1", VAR_2);

 return 0;
}
