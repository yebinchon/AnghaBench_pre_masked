
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
 int FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_7, int VAR_8,
    struct i2c_board_info *VAR_9)
{
 struct i2c_adapter *VAR_10 = VAR_7->adapter;

 if (!FUNC_2(VAR_10, VAR_4)) {
  FUNC_5("asb100.o: detect failed, "
    "smbus byte data not supported!\n");
  return -VAR_3;
 }





 if (VAR_8 < 0) {

  int VAR_11 = FUNC_3(VAR_7, VAR_0);
  int VAR_12 = FUNC_3(VAR_7, VAR_1);


  if ((!(VAR_11 & 0x07)) &&

    (((!(VAR_11 & 0x80)) && (VAR_12 != 0x94)) ||

    ((VAR_11 & 0x80) && (VAR_12 != 0x06)))) {
   FUNC_5("asb100.o: detect failed, "
     "bad chip id 0x%02x!\n", VAR_12);
   return -VAR_3;
  }

 }



 FUNC_4(VAR_7, VAR_0,
  (FUNC_3(VAR_7, VAR_0) & 0x78)
  | 0x80);


 if (VAR_8 <= 0) {
  int VAR_13 = FUNC_3(VAR_7, VAR_2);
  int VAR_14 = FUNC_3(VAR_7, VAR_1);

  if ((VAR_13 == 0x31) && (VAR_14 == 0x06))
   VAR_8 = VAR_6;
  else {
   if (VAR_8 == 0)
    FUNC_0(&VAR_10->dev, "ignoring "
     "'force' parameter for unknown chip "
     "at adapter %d, address 0x%02x.\n",
     FUNC_1(VAR_10), VAR_7->addr);
   return -VAR_3;
  }
 }

 FUNC_6(VAR_9->type, "asb100", VAR_5);

 return 0;
}
