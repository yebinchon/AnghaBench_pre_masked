
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83781d_data {int update_lock; } ;
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
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char const*,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (struct i2c_client*,int) ;
 struct w83781d_data* FUNC_9 () ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_10(struct i2c_client *VAR_12, int VAR_13,
        struct i2c_board_info *VAR_14)
{
 int VAR_15 = 0, VAR_16;
 struct w83781d_data *VAR_17 = FUNC_9();
 struct i2c_adapter *VAR_18 = VAR_12->adapter;
 int VAR_19 = VAR_12->addr;
 const char *VAR_20 = "";
 enum vendor { winbond, asus } VAR_21;

 if (!FUNC_2(VAR_18, VAR_1))
  return -VAR_0;




 if (VAR_17)
  FUNC_5(&VAR_17->update_lock);





 if (VAR_13 < 0) {
  if (FUNC_3
      (VAR_12, VAR_5) & 0x80) {
   FUNC_0(&VAR_18->dev, "Detection of w83781d chip "
    "failed at step 3\n");
   goto err_nodev;
  }
  VAR_15 = FUNC_3(VAR_12, VAR_3);
  VAR_16 = FUNC_3(VAR_12, VAR_4);

  if ((!(VAR_15 & 0x07)) &&
      (((!(VAR_15 & 0x80)) && (VAR_16 != 0xa3) && (VAR_16 != 0xc3))
       || ((VAR_15 & 0x80) && (VAR_16 != 0x5c) && (VAR_16 != 0x12)))) {
   FUNC_0(&VAR_18->dev, "Detection of w83781d chip "
    "failed at step 4\n");
   goto err_nodev;
  }


  if ((!(VAR_15 & 0x80) && (VAR_16 == 0xa3)) ||
      ((VAR_15 & 0x80) && (VAR_16 == 0x5c))) {
   if (FUNC_3
       (VAR_12, VAR_6) != VAR_19) {
    FUNC_0(&VAR_18->dev, "Detection of w83781d "
     "chip failed at step 5\n");
    goto err_nodev;
   }
  }
 }



 FUNC_4(VAR_12, VAR_3,
  (FUNC_3(VAR_12, VAR_3)
   & 0x78) | 0x80);


 if (VAR_13 <= 0) {

  VAR_16 = FUNC_3(VAR_12, VAR_4);
  if (VAR_16 == 0x5c)
   VAR_21 = winbond;
  else if (VAR_16 == 0x12)
   VAR_21 = asus;
  else {
   FUNC_0(&VAR_18->dev, "w83781d chip vendor is "
    "neither Winbond nor Asus\n");
   goto err_nodev;
  }

  VAR_15 = FUNC_3(VAR_12, VAR_7);
  if ((VAR_15 == 0x10 || VAR_15 == 0x11) && VAR_21 == winbond)
   VAR_13 = VAR_9;
  else if (VAR_15 == 0x30 && VAR_21 == winbond)
   VAR_13 = VAR_10;
  else if (VAR_15 == 0x40 && VAR_21 == winbond && VAR_19 == 0x2d)
   VAR_13 = VAR_11;
  else if (VAR_15 == 0x31)
   VAR_13 = VAR_8;
  else {
   if (VAR_13 == 0)
    FUNC_1(&VAR_18->dev, "Ignoring 'force' "
      "parameter for unknown chip at "
      "address 0x%02x\n", VAR_19);
   goto err_nodev;
  }

  if ((VAR_13 == VAR_9 || VAR_13 == VAR_10)
   && FUNC_8(VAR_12, VAR_15)) {
   FUNC_0(&VAR_18->dev, "Device at 0x%02x appears to "
    "be the same as ISA device\n", VAR_19);
   goto err_nodev;
  }
 }

 if (VAR_17)
  FUNC_6(&VAR_17->update_lock);

 if (VAR_13 == VAR_9) {
  VAR_20 = "w83781d";
 } else if (VAR_13 == VAR_10) {
  VAR_20 = "w83782d";
 } else if (VAR_13 == VAR_11) {
  VAR_20 = "w83783s";
 } else if (VAR_13 == VAR_8) {
  VAR_20 = "as99127f";
 }

 FUNC_7(VAR_14->type, VAR_20, VAR_2);

 return 0;

 err_nodev:
 if (VAR_17)
  FUNC_6(&VAR_17->update_lock);
 return -VAR_0;
}
