
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct asb100_data {int* fan_min; int* fan_div; int update_lock; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (int,int ) ;
 int FUNC_4 (unsigned long,int ) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct i2c_client*,int ,int) ;
 struct asb100_data* FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 unsigned long FUNC_10 (char const*,int *,int) ;
 struct i2c_client* FUNC_11 (struct device*) ;
 TYPE_1__* FUNC_12 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_13(struct device *VAR_2, struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = FUNC_12(VAR_3)->index;
 struct i2c_client *VAR_7 = FUNC_11(VAR_2);
 struct asb100_data *VAR_8 = FUNC_7(VAR_7);
 unsigned long VAR_9;
 unsigned long VAR_10 = FUNC_10(VAR_4, ((void*)0), 10);
 int VAR_11;

 FUNC_8(&VAR_8->update_lock);

 VAR_9 = FUNC_3(VAR_8->fan_min[VAR_6],
   FUNC_1(VAR_8->fan_div[VAR_6]));
 VAR_8->fan_div[VAR_6] = FUNC_2(VAR_10);

 switch (VAR_6) {
 case 0:
  VAR_11 = FUNC_5(VAR_7, VAR_1);
  VAR_11 = (VAR_11 & 0xcf) | (VAR_8->fan_div[0] << 4);
  FUNC_6(VAR_7, VAR_1, VAR_11);
  break;

 case 1:
  VAR_11 = FUNC_5(VAR_7, VAR_1);
  VAR_11 = (VAR_11 & 0x3f) | (VAR_8->fan_div[1] << 6);
  FUNC_6(VAR_7, VAR_1, VAR_11);
  break;

 case 2:
  VAR_11 = FUNC_5(VAR_7, VAR_0);
  VAR_11 = (VAR_11 & 0x3f) | (VAR_8->fan_div[2] << 6);
  FUNC_6(VAR_7, VAR_0, VAR_11);
  break;
 }

 VAR_8->fan_min[VAR_6] =
  FUNC_4(VAR_9, FUNC_1(VAR_8->fan_div[VAR_6]));
 FUNC_6(VAR_7, FUNC_0(VAR_6), VAR_8->fan_min[VAR_6]);

 FUNC_9(&VAR_8->update_lock);

 return VAR_5;
}
