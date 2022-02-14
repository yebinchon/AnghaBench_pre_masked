
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sensor_device_attribute_2 {int index; int nr; } ;
struct TYPE_2__ {int* offset; } ;
struct lm93_data {int sfc2; int update_lock; TYPE_1__ block10; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int,int) ;
 struct lm93_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,int *,int) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute_2 *VAR_5 = FUNC_9(VAR_2);
 int VAR_6 = VAR_5->index;
 int VAR_7 = VAR_5->nr;
 struct i2c_client *VAR_8 = FUNC_8(VAR_1);
 struct lm93_data *VAR_9 = FUNC_2(VAR_8);
 u32 VAR_10 = FUNC_7(VAR_3, ((void*)0), 10);

 FUNC_5(&VAR_9->update_lock);

 VAR_9->sfc2 = FUNC_3(VAR_8, VAR_0);
 VAR_9->sfc2 |= ((VAR_6 < 2) ? 0x10 : 0x20);
 FUNC_4(VAR_8, VAR_0, VAR_9->sfc2);
 VAR_9->block10.offset[VAR_7] = FUNC_1(
   VAR_9->block10.offset[VAR_7], VAR_10, VAR_6, 1);
 FUNC_4(VAR_8, FUNC_0(VAR_7),
   VAR_9->block10.offset[VAR_7]);
 FUNC_6(&VAR_9->update_lock);
 return VAR_4;
}
