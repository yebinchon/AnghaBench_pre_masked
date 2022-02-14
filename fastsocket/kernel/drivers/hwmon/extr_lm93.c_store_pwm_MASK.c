
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct lm93_data {int update_lock; int * pwm_override; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ) ;
 struct lm93_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*,int *,int) ;
 struct i2c_client* FUNC_9 (struct device*) ;
 TYPE_1__* FUNC_10 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_4, struct device_attribute *VAR_5,
    const char *VAR_6, size_t VAR_7)
{
 int VAR_8 = (FUNC_10(VAR_5))->index;
 struct i2c_client *VAR_9 = FUNC_9(VAR_4);
 struct lm93_data *VAR_10 = FUNC_3(VAR_9);
 u32 VAR_11 = FUNC_8(VAR_6, ((void*)0), 10);
 u8 VAR_12, VAR_13;

 FUNC_6(&VAR_10->update_lock);
 VAR_12 = FUNC_4(VAR_9,FUNC_2(VAR_8,VAR_0));
 VAR_13 = FUNC_4(VAR_9, FUNC_2(VAR_8,VAR_1));
 VAR_12 = (VAR_12 & 0x0f) | FUNC_1(VAR_11,(VAR_13 & 0x07) ?
   VAR_3 : VAR_2) << 4;

 VAR_10->pwm_override[VAR_8] = FUNC_0(VAR_12 >> 4,
   (VAR_13 & 0x07) ? VAR_3 :
   VAR_2);
 FUNC_5(VAR_9,FUNC_2(VAR_8,VAR_0),VAR_12);
 FUNC_7(&VAR_10->update_lock);
 return VAR_7;
}
