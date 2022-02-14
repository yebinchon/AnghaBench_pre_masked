
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sensor_device_attribute_2 {size_t index; size_t nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct abituguru_data {scalar_t__** bank2_settings; int update_lock; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t FUNC_0 (struct abituguru_data*,scalar_t__,size_t,scalar_t__*,int) ;
 struct abituguru_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int *,int) ;
 struct sensor_device_attribute_2* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_6, struct device_attribute
 *VAR_7, const char *VAR_8, size_t VAR_9)
{
 struct sensor_device_attribute_2 *VAR_10 = FUNC_5(VAR_7);
 struct abituguru_data *VAR_11 = FUNC_1(VAR_6);
 u8 VAR_12 = (FUNC_4(VAR_8, ((void*)0), 10)*255 + VAR_0/2) /
  VAR_0;
 ssize_t VAR_13 = VAR_9;


 if ((VAR_12 < VAR_5) ||
   (VAR_12 > VAR_4))
  return -VAR_2;

 FUNC_2(&VAR_11->update_lock);
 if (VAR_11->bank2_settings[VAR_10->index][VAR_10->nr] != VAR_12) {
  u8 VAR_14 = VAR_11->bank2_settings[VAR_10->index][VAR_10->nr];
  VAR_11->bank2_settings[VAR_10->index][VAR_10->nr] = VAR_12;
  if (FUNC_0(VAR_11, VAR_1 + 2,
    VAR_10->index, VAR_11->bank2_settings[VAR_10->index],
    2) <= VAR_10->nr) {
   VAR_11->bank2_settings[VAR_10->index][VAR_10->nr] = VAR_14;
   VAR_13 = -VAR_3;
  }
 }
 FUNC_3(&VAR_11->update_lock);
 return VAR_13;
}
