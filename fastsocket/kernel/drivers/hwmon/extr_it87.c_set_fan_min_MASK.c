
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct it87_data {int* fan_div; int update_lock; int * fan_min; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 struct it87_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct it87_data*,int ) ;
 int FUNC_4 (struct it87_data*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,int *,int) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_2, struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_8(VAR_3);
 int VAR_7 = VAR_6->index;

 struct it87_data *VAR_8 = FUNC_2(VAR_2);
 int VAR_9 = FUNC_7(VAR_4, ((void*)0), 10);
 u8 VAR_10;

 FUNC_5(&VAR_8->update_lock);
 VAR_10 = FUNC_3(VAR_8, VAR_0);
 switch (VAR_7) {
 case 0: VAR_8->fan_div[VAR_7] = VAR_10 & 0x07; break;
 case 1: VAR_8->fan_div[VAR_7] = (VAR_10 >> 3) & 0x07; break;
 case 2: VAR_8->fan_div[VAR_7] = (VAR_10 & 0x40) ? 3 : 1; break;
 }

 VAR_8->fan_min[VAR_7] = FUNC_1(VAR_9, FUNC_0(VAR_8->fan_div[VAR_7]));
 FUNC_4(VAR_8, VAR_1[VAR_7], VAR_8->fan_min[VAR_7]);
 FUNC_6(&VAR_8->update_lock);
 return VAR_5;
}
