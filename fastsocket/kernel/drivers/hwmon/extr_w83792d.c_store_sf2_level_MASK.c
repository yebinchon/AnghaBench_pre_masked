
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct w83792d_data {int** sf2_levels; int update_lock; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int,int ,int) ;
 int ** VAR_0 ;
 struct w83792d_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int *,int) ;
 struct i2c_client* FUNC_5 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct i2c_client*,int ) ;
 int FUNC_8 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute_2 *VAR_5 = FUNC_6(VAR_2);
 int VAR_6 = VAR_5->nr;
 int VAR_7 = VAR_5->index - 1;
 struct i2c_client *VAR_8 = FUNC_5(VAR_1);
 struct w83792d_data *VAR_9 = FUNC_1(VAR_8);
 u32 VAR_10;
 u8 VAR_11=0, VAR_12=0;

 VAR_10 = FUNC_4(VAR_3, ((void*)0), 10);
 FUNC_2(&VAR_9->update_lock);
 VAR_9->sf2_levels[VAR_7][VAR_6] = FUNC_0((VAR_10 * 15) / 100, 0, 15);
 VAR_11 = FUNC_7(VAR_8, VAR_0[VAR_7][VAR_6])
  & ((VAR_6==3) ? 0xf0 : 0x0f);
 if (VAR_6==3) {
  VAR_12 = VAR_9->sf2_levels[VAR_7][VAR_6];
 } else {
  VAR_12 = VAR_9->sf2_levels[VAR_7][VAR_6] << 4;
 }
 FUNC_8(VAR_8, VAR_0[VAR_7][VAR_6], VAR_12 | VAR_11);
 FUNC_3(&VAR_9->update_lock);

 return VAR_4;
}
