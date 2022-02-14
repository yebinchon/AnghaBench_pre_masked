
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct it87_data {unsigned long* fan_min; int* fan_div; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,int ) ;
 unsigned long FUNC_3 (int,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 struct it87_data* FUNC_4 (struct device*) ;
 int FUNC_5 (struct it87_data*,int ) ;
 int FUNC_6 (struct it87_data*,int ,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 unsigned long FUNC_9 (char const*,int *,int) ;
 struct sensor_device_attribute* FUNC_10 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_2, struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_10(VAR_3);
 int VAR_7 = VAR_6->index;

 struct it87_data *VAR_8 = FUNC_4(VAR_2);
 unsigned long VAR_9 = FUNC_9(VAR_4, ((void*)0), 10);
 int VAR_10;
 u8 VAR_11;

 FUNC_7(&VAR_8->update_lock);
 VAR_11 = FUNC_5(VAR_8, VAR_0);


 VAR_10 = FUNC_2(VAR_8->fan_min[VAR_7], FUNC_0(VAR_8->fan_div[VAR_7]));

 switch (VAR_7) {
 case 0:
 case 1:
  VAR_8->fan_div[VAR_7] = FUNC_1(VAR_9);
  break;
 case 2:
  if (VAR_9 < 8)
   VAR_8->fan_div[VAR_7] = 1;
  else
   VAR_8->fan_div[VAR_7] = 3;
 }
 VAR_9 = VAR_11 & 0x80;
 VAR_9 |= (VAR_8->fan_div[0] & 0x07);
 VAR_9 |= (VAR_8->fan_div[1] & 0x07) << 3;
 if (VAR_8->fan_div[2] == 3)
  VAR_9 |= 0x1 << 6;
 FUNC_6(VAR_8, VAR_0, VAR_9);


 VAR_8->fan_min[VAR_7] = FUNC_3(VAR_10, FUNC_0(VAR_8->fan_div[VAR_7]));
 FUNC_6(VAR_8, VAR_1[VAR_7], VAR_8->fan_min[VAR_7]);

 FUNC_8(&VAR_8->update_lock);
 return VAR_5;
}
