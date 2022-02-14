
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {int addr; TYPE_1__ dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct eeprom_data {int nature; int update_lock; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_client*,struct eeprom_data*) ;
 char FUNC_3 (struct i2c_client*,int) ;
 int FUNC_4 (struct eeprom_data*) ;
 struct eeprom_data* FUNC_5 (int,int ) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)
{
 struct i2c_adapter *VAR_9 = VAR_7->adapter;
 struct eeprom_data *VAR_10;
 int VAR_11;

 if (!(VAR_10 = FUNC_5(sizeof(struct eeprom_data), VAR_2))) {
  VAR_11 = -VAR_1;
  goto exit;
 }

 FUNC_7(VAR_10->data, 0xff, VAR_0);
 FUNC_2(VAR_7, VAR_10);
 FUNC_8(&VAR_10->update_lock);
 VAR_10->nature = VAR_4;



 if (VAR_7->addr == 0x57
  && FUNC_1(VAR_9, VAR_3)) {
  char VAR_12[4];

  VAR_12[0] = FUNC_3(VAR_7, 0x80);
  VAR_12[1] = FUNC_3(VAR_7, 0x81);
  VAR_12[2] = FUNC_3(VAR_7, 0x82);
  VAR_12[3] = FUNC_3(VAR_7, 0x83);

  if (!FUNC_6(VAR_12, "PCG-", 4) || !FUNC_6(VAR_12, "VGN-", 4)) {
   FUNC_0(&VAR_7->dev, "Vaio EEPROM detected, "
     "enabling privacy protection\n");
   VAR_10->nature = VAR_5;
  }
 }


 VAR_11 = FUNC_9(&VAR_7->dev.kobj, &VAR_6);
 if (VAR_11)
  goto exit_kfree;

 return 0;

exit_kfree:
 FUNC_4(VAR_10);
exit:
 return VAR_11;
}
