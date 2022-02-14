
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smsc47m192_data {int* temp_offset; int update_lock; } ;
struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (long) ;
 struct smsc47m192_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 long FUNC_7 (char const*,int *,int) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 struct sensor_device_attribute* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_1, struct device_attribute
  *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_9(VAR_2);
 int VAR_6 = VAR_5->index;
 struct i2c_client *VAR_7 = FUNC_8(VAR_1);
 struct smsc47m192_data *VAR_8 = FUNC_2(VAR_7);
 u8 VAR_9 = FUNC_3(VAR_7, VAR_0);
 long VAR_10 = FUNC_7(VAR_3, ((void*)0), 10);

 FUNC_5(&VAR_8->update_lock);
 VAR_8->temp_offset[VAR_6] = FUNC_1(VAR_10);
 if (VAR_6>1)
  FUNC_4(VAR_7,
   FUNC_0(VAR_6), VAR_8->temp_offset[VAR_6]);
 else if (VAR_8->temp_offset[VAR_6] != 0) {


  FUNC_4(VAR_7, VAR_0,
     (VAR_9 & 0xef) | (VAR_6==0 ? 0x10 : 0));
  VAR_8->temp_offset[1-VAR_6] = 0;
  FUNC_4(VAR_7,
   FUNC_0(VAR_6), VAR_8->temp_offset[VAR_6]);
 } else if ((VAR_9 & 0x10) == (VAR_6==0 ? 0x10 : 0))
  FUNC_4(VAR_7,
     FUNC_0(VAR_6), 0);
 FUNC_6(&VAR_8->update_lock);
 return VAR_4;
}
