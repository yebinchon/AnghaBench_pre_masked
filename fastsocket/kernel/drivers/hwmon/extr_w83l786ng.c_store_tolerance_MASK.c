
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct w83l786ng_data {int* tolerance; int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 struct w83l786ng_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int *,int) ;
 struct i2c_client* FUNC_5 (struct device*) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct i2c_client*,int ) ;
 int FUNC_8 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = FUNC_6(VAR_2)->index;
 struct i2c_client *VAR_6 = FUNC_5(VAR_1);
 struct w83l786ng_data *VAR_7 = FUNC_1(VAR_6);
 u32 VAR_8;
 u8 VAR_9, VAR_10;

 VAR_8 = FUNC_4(VAR_3, ((void*)0), 10);

 FUNC_2(&VAR_7->update_lock);
 VAR_10 = FUNC_7(VAR_6,
     VAR_0) & ((VAR_5 == 1) ? 0x0f : 0xf0);
 VAR_9 = FUNC_0(VAR_8, 0, 15);
 VAR_9 &= 0x0f;
 VAR_7->tolerance[VAR_5] = VAR_9;
 if (VAR_5 == 1) {
  VAR_9 <<= 4;
 }

 FUNC_8(VAR_6, VAR_0,
         VAR_10 | VAR_9);
 FUNC_3(&VAR_7->update_lock);
 return VAR_4;
}
