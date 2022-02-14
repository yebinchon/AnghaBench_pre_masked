
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w83l786ng_data {int* fan_min; int* fan_div; int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned long,int ) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 struct w83l786ng_data* FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*,int *,int) ;
 struct i2c_client* FUNC_9 (struct device*) ;
 TYPE_1__* FUNC_10 (struct device_attribute*) ;
 int FUNC_11 (struct i2c_client*,int ) ;
 int FUNC_12 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_13(struct device *VAR_1, struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = FUNC_10(VAR_2)->index;
 struct i2c_client *VAR_6 = FUNC_9(VAR_1);
 struct w83l786ng_data *VAR_7 = FUNC_5(VAR_6);

 unsigned long VAR_8;
 u8 VAR_9;
 u8 VAR_10;
 u8 VAR_11 = 0;
 u8 VAR_12 = 0;


 FUNC_6(&VAR_7->update_lock);
 VAR_8 = FUNC_2(VAR_7->fan_min[VAR_5], FUNC_0(VAR_7->fan_div[VAR_5]));

 VAR_7->fan_div[VAR_5] = FUNC_1(FUNC_8(VAR_3, ((void*)0), 10));

 switch (VAR_5) {
 case 0:
  VAR_11 = 0xf8;
  VAR_12 = 0;
  break;
 case 1:
  VAR_11 = 0x8f;
  VAR_12 = 4;
  break;
 }

 VAR_10 = FUNC_11(VAR_6, VAR_0)
        & VAR_11;

 VAR_9 = (VAR_7->fan_div[VAR_5] << VAR_12) & ~VAR_11;

 FUNC_12(VAR_6, VAR_0,
         VAR_10 | VAR_9);


 VAR_7->fan_min[VAR_5] = FUNC_3(VAR_8, FUNC_0(VAR_7->fan_div[VAR_5]));
 FUNC_12(VAR_6, FUNC_4(VAR_5),
         VAR_7->fan_min[VAR_5]);
 FUNC_7(&VAR_7->update_lock);

 return VAR_4;
}
