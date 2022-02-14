
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sensor_device_attribute_2 {size_t index; size_t nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct abituguru_data {int* bank1_max_value; scalar_t__** bank1_settings; int update_lock; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (struct abituguru_data*,scalar_t__,size_t,scalar_t__*,int) ;
 struct abituguru_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int *,int) ;
 struct sensor_device_attribute_2* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2, struct device_attribute
 *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute_2 *VAR_6 = FUNC_5(VAR_3);
 struct abituguru_data *VAR_7 = FUNC_1(VAR_2);
 u8 VAR_8 = (FUNC_4(VAR_4, ((void*)0), 10) * 255 +
  VAR_7->bank1_max_value[VAR_6->index]/2) /
  VAR_7->bank1_max_value[VAR_6->index];
 ssize_t VAR_9 = VAR_5;

 FUNC_2(&VAR_7->update_lock);
 if (VAR_7->bank1_settings[VAR_6->index][VAR_6->nr] != VAR_8) {
  u8 VAR_10 = VAR_7->bank1_settings[VAR_6->index][VAR_6->nr];
  VAR_7->bank1_settings[VAR_6->index][VAR_6->nr] = VAR_8;
  if (FUNC_0(VAR_7, VAR_0 + 2,
    VAR_6->index, VAR_7->bank1_settings[VAR_6->index],
    3) <= VAR_6->nr) {
   VAR_7->bank1_settings[VAR_6->index][VAR_6->nr] = VAR_10;
   VAR_9 = -VAR_1;
  }
 }
 FUNC_3(&VAR_7->update_lock);
 return VAR_9;
}
