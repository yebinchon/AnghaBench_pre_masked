
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm78_data {int update_lock; } ;
struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct i2c_adapter*,int ) ;
 int FUNC_4 (struct i2c_client*,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (struct i2c_client*,int) ;
 struct lm78_data* FUNC_6 () ;

 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_7, int VAR_8,
      struct i2c_board_info *VAR_9)
{
 int VAR_10;
 struct lm78_data *VAR_11 = FUNC_6();
 const char *VAR_12;
 struct i2c_adapter *VAR_13 = VAR_7->adapter;
 int VAR_14 = VAR_7->addr;

 if (!FUNC_3(VAR_13, VAR_1))
  return -VAR_0;




 if (VAR_11)
  FUNC_7(&VAR_11->update_lock);

 if (VAR_8 < 0) {
  if ((FUNC_4(VAR_7, VAR_4) & 0x80)
   || FUNC_4(VAR_7, VAR_5)
      != VAR_14)
   goto err_nodev;


  VAR_10 = FUNC_4(VAR_7, 0x4f);
  if (VAR_10 == 0xa3 || VAR_10 == 0x5c)
   goto err_nodev;
 }


 if (VAR_8 <= 0) {
  VAR_10 = FUNC_4(VAR_7, VAR_3);
  if (VAR_10 == 0x00 || VAR_10 == 0x20
   || VAR_10 == 0x40)
   VAR_8 = VAR_6;
  else if ((VAR_10 & 0xfe) == 0xc0)
   VAR_8 = 128;
  else {
   if (VAR_8 == 0)
    FUNC_1(&VAR_13->dev, "Ignoring 'force' "
     "parameter for unknown chip at "
     "adapter %d, address 0x%02x\n",
     FUNC_2(VAR_13), VAR_14);
   goto err_nodev;
  }

  if (FUNC_5(VAR_7, VAR_10)) {
   FUNC_0(&VAR_13->dev, "Device at 0x%02x appears to "
    "be the same as ISA device\n", VAR_14);
   goto err_nodev;
  }
 }

 if (VAR_11)
  FUNC_8(&VAR_11->update_lock);

 switch (VAR_8) {
 case 128:
  VAR_12 = "lm79";
  break;
 default:
  VAR_12 = "lm78";
 }
 FUNC_9(VAR_9->type, VAR_12, VAR_2);

 return 0;

 err_nodev:
 if (VAR_11)
  FUNC_8(&VAR_11->update_lock);
 return -VAR_0;
}
