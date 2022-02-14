
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int detected; } ;
struct i2c_board_info {int addr; int type; } ;
struct i2c_adapter {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,char*,...) ;
 int FUNC_1 (struct device*,char*,char*,int ,int) ;
 int FUNC_2 (struct device*,char*) ;
 struct i2c_client* FUNC_3 (struct i2c_adapter*,struct i2c_board_info*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (struct i2c_board_info*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,char*,int*,char*) ;
 char* FUNC_10 (char const*,char) ;
 struct i2c_adapter* FUNC_11 (struct device*) ;
 int VAR_4 ;

__attribute__((used)) static ssize_t
FUNC_12(struct device *VAR_5, struct device_attribute *VAR_6,
       const char *VAR_7, size_t VAR_8)
{
 struct i2c_adapter *VAR_9 = FUNC_11(VAR_5);
 struct i2c_board_info VAR_10;
 struct i2c_client *VAR_11;
 char *VAR_12, VAR_13;
 int VAR_14;

 FUNC_2(VAR_5, "The new_device interface is still experimental "
   "and may change in a near future\n");
 FUNC_6(&VAR_10, 0, sizeof(struct i2c_board_info));

 VAR_12 = FUNC_10(VAR_7, ' ');
 if (!VAR_12) {
  FUNC_0(VAR_5, "%s: Missing parameters\n", "new_device");
  return -VAR_1;
 }
 if (VAR_12 - VAR_7 > VAR_2 - 1) {
  FUNC_0(VAR_5, "%s: Invalid device name\n", "new_device");
  return -VAR_1;
 }
 FUNC_5(VAR_10.type, VAR_7, VAR_12 - VAR_7);


 VAR_14 = FUNC_9(++VAR_12, "%hi%c", &VAR_10.addr, &VAR_13);
 if (VAR_14 < 1) {
  FUNC_0(VAR_5, "%s: Can't parse I2C address\n", "new_device");
  return -VAR_1;
 }
 if (VAR_14 > 1 && VAR_13 != '\n') {
  FUNC_0(VAR_5, "%s: Extra parameters\n", "new_device");
  return -VAR_1;
 }

 if (VAR_10.addr < 0x03 || VAR_10.addr > 0x77) {
  FUNC_0(VAR_5, "%s: Invalid I2C address 0x%hx\n", "new_device",
   VAR_10.addr);
  return -VAR_1;
 }

 VAR_11 = FUNC_3(VAR_9, &VAR_10);
 if (!VAR_11)
  return -VAR_0;


 FUNC_7(&VAR_3);
 FUNC_4(&VAR_11->detected, &VAR_4);
 FUNC_8(&VAR_3);
 FUNC_1(VAR_5, "%s: Instantiated device %s at 0x%02hx\n", "new_device",
   VAR_10.type, VAR_10.addr);

 return VAR_8;
}
