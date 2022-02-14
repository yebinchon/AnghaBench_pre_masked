
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1031_data {int* fan_div; int* fan_min; int update_lock; scalar_t__ valid; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 size_t VAR_0 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 struct adm1031_data* FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*,int *,int) ;
 struct i2c_client* FUNC_9 (struct device*) ;
 TYPE_1__* FUNC_10 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_1, struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_9(VAR_1);
 struct adm1031_data *VAR_6 = FUNC_5(VAR_5);
 int VAR_7 = FUNC_10(VAR_2)->index;
 int VAR_8 = FUNC_8(VAR_3, ((void*)0), 10);
 u8 VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_9 = VAR_8 == 8 ? 0xc0 :
       VAR_8 == 4 ? 0x80 :
       VAR_8 == 2 ? 0x40 :
       VAR_8 == 1 ? 0x00 :
       0xff;
 if (VAR_9 == 0xff)
  return -VAR_0;

 FUNC_6(&VAR_6->update_lock);

 VAR_6->fan_div[VAR_7] = FUNC_3(VAR_5,
            FUNC_0(VAR_7));
 VAR_6->fan_min[VAR_7] = FUNC_3(VAR_5,
            FUNC_1(VAR_7));


 VAR_10 = FUNC_2(VAR_6->fan_div[VAR_7]);
 VAR_6->fan_div[VAR_7] = VAR_9 | (0x3f & VAR_6->fan_div[VAR_7]);
 VAR_11 = VAR_6->fan_min[VAR_7] * VAR_10 / VAR_8;
 VAR_6->fan_min[VAR_7] = VAR_11 > 0xff ? 0xff : VAR_11;

 FUNC_4(VAR_5, FUNC_0(VAR_7),
       VAR_6->fan_div[VAR_7]);
 FUNC_4(VAR_5, FUNC_1(VAR_7),
       VAR_6->fan_min[VAR_7]);


 VAR_6->valid = 0;
 FUNC_7(&VAR_6->update_lock);
 return VAR_4;
}
