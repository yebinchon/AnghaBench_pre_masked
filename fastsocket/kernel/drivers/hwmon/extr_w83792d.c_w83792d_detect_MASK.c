
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {unsigned short addr; struct i2c_adapter* adapter; } ;
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
 int FUNC_0 (int *,char*,int ,unsigned short) ;
 int FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_8 ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct i2c_client *VAR_9, int VAR_10, struct i2c_board_info *VAR_11)
{
 struct i2c_adapter *VAR_12 = VAR_9->adapter;
 int VAR_13, VAR_14;
 unsigned short VAR_15 = VAR_9->addr;

 if (!FUNC_2(VAR_12, VAR_1)) {
  return -VAR_0;
 }





 if (VAR_10 < 0) {
  if (FUNC_4(VAR_9, VAR_5) & 0x80) {
   return -VAR_0;
  }
  VAR_13 = FUNC_4(VAR_9, VAR_3);
  VAR_14 = FUNC_4(VAR_9, VAR_4);

  if (!(VAR_13 & 0x07)) {
   if (((!(VAR_13 & 0x80)) && (VAR_14 != 0xa3)) ||
        ((VAR_13 & 0x80) && (VAR_14 != 0x5c))) {
    return -VAR_0;
   }
  }


  if (FUNC_4(VAR_9,
     VAR_6) != VAR_15) {
   return -VAR_0;
  }
 }



 FUNC_5(VAR_9,
       VAR_3,
       (FUNC_4(VAR_9,
    VAR_3) & 0x78) | 0x80);


 if (VAR_10 <= 0) {

  VAR_14 = FUNC_4(VAR_9, VAR_4);
  if (VAR_14 != 0x5c) {
   return -VAR_0;
  }
  VAR_13 = FUNC_4(VAR_9, VAR_7);
  if (VAR_13 == 0x7a) {
   VAR_10 = VAR_8;
  } else {
   if (VAR_10 == 0)
    FUNC_0(&VAR_12->dev,
     "w83792d: Ignoring 'force' parameter for"
     " unknown chip at adapter %d, address"
     " 0x%02x\n", FUNC_1(VAR_12),
     VAR_15);
   return -VAR_0;
  }
 }

 FUNC_3(VAR_11->type, "w83792d", VAR_2);

 return 0;
}
