
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int dummy; } ;
struct gl520_data {int* fan_min; int beep_mask; int alarm_mask; int update_lock; int * fan_div; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 struct gl520_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 unsigned long FUNC_6 (char const*,int *,int) ;
 struct i2c_client* FUNC_7 (struct device*) ;
 TYPE_1__* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_2, struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_7(VAR_2);
 struct gl520_data *VAR_7 = FUNC_3(VAR_6);
 int VAR_8 = FUNC_8(VAR_3)->index;
 unsigned long VAR_9 = FUNC_6(VAR_4, ((void*)0), 10);
 u8 VAR_10;

 FUNC_4(&VAR_7->update_lock);
 VAR_10 = FUNC_0(VAR_9, VAR_7->fan_div[VAR_8]);
 VAR_7->fan_min[VAR_8] = VAR_10;

 if (VAR_8 == 0)
  FUNC_2(VAR_6, VAR_1,
      (FUNC_1(VAR_6, VAR_1)
       & ~0xff00) | (VAR_10 << 8));
 else
  FUNC_2(VAR_6, VAR_1,
      (FUNC_1(VAR_6, VAR_1)
       & ~0xff) | VAR_10);

 VAR_7->beep_mask = FUNC_1(VAR_6, VAR_0);
 if (VAR_7->fan_min[VAR_8] == 0)
  VAR_7->alarm_mask &= (VAR_8 == 0) ? ~0x20 : ~0x40;
 else
  VAR_7->alarm_mask |= (VAR_8 == 0) ? 0x20 : 0x40;
 VAR_7->beep_mask &= VAR_7->alarm_mask;
 FUNC_2(VAR_6, VAR_0, VAR_7->beep_mask);

 FUNC_5(&VAR_7->update_lock);
 return VAR_5;
}
