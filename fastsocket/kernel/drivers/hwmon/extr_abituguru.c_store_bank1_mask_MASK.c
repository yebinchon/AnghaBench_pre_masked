
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute_2 {size_t index; int nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct abituguru_data {int update_lock; int ** bank1_settings; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct abituguru_data*,scalar_t__,size_t,int *,int) ;
 struct abituguru_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int *,int) ;
 struct sensor_device_attribute_2* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
 struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute_2 *VAR_6 = FUNC_5(VAR_3);
 struct abituguru_data *VAR_7 = FUNC_1(VAR_2);
 int VAR_8 = FUNC_4(VAR_4, ((void*)0), 10);
 ssize_t VAR_9 = VAR_5;
 u8 VAR_10;

 FUNC_2(&VAR_7->update_lock);
 VAR_10 = VAR_7->bank1_settings[VAR_6->index][0];

 if (VAR_8)
  VAR_7->bank1_settings[VAR_6->index][0] |= VAR_6->nr;
 else
  VAR_7->bank1_settings[VAR_6->index][0] &= ~VAR_6->nr;

 if ((VAR_7->bank1_settings[VAR_6->index][0] != VAR_10) &&
   (FUNC_0(VAR_7,
   VAR_0 + 2, VAR_6->index,
   VAR_7->bank1_settings[VAR_6->index], 3) < 1)) {
  VAR_7->bank1_settings[VAR_6->index][0] = VAR_10;
  VAR_9 = -VAR_1;
 }
 FUNC_3(&VAR_7->update_lock);
 return VAR_9;
}
