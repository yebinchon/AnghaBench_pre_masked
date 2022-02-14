
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1026_data {int* fan_div; int update_lock; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 size_t VAR_2 ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (struct device*,int,int) ;
 struct adm1026_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,int *,int) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 struct sensor_device_attribute* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_3, struct device_attribute *VAR_4,
  const char *VAR_5, size_t VAR_6)
{
 struct sensor_device_attribute *VAR_7 = FUNC_9(VAR_4);
 int VAR_8 = VAR_7->index;
 struct i2c_client *VAR_9 = FUNC_8(VAR_3);
 struct adm1026_data *VAR_10 = FUNC_4(VAR_9);
 int VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_11 = FUNC_7(VAR_5, ((void*)0), 10);
 VAR_13 = FUNC_1(VAR_11);
 if (VAR_13 == 0) {
  return -VAR_2;
 }
 FUNC_5(&VAR_10->update_lock);
 VAR_12 = VAR_10->fan_div[VAR_8];
 VAR_10->fan_div[VAR_8] = FUNC_0(VAR_13);

 if (VAR_8 < 4) {
  VAR_14 = 2 * VAR_8;
  FUNC_2(VAR_9, VAR_0,
   ((FUNC_1(VAR_12) & (~(0x03 << VAR_14))) |
   (VAR_13 << VAR_14)));
 } else {
  VAR_14 = 2 * (VAR_8 - 4);
  FUNC_2(VAR_9, VAR_1,
   ((FUNC_1(VAR_12) & (~(0x03 << (2 * VAR_14)))) |
   (VAR_13 << VAR_14)));
 }

 if (VAR_10->fan_div[VAR_8] != VAR_12) {
  FUNC_3(VAR_3, VAR_8, VAR_12);
 }
 FUNC_6(&VAR_10->update_lock);
 return VAR_6;
}
