
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct lm93_data {int* auto_pwm_min_hyst; int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 struct lm93_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*,int *,int) ;
 struct i2c_client* FUNC_9 (struct device*) ;
 TYPE_1__* FUNC_10 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 int VAR_7 = (FUNC_10(VAR_4))->index;
 struct i2c_client *VAR_8 = FUNC_9(VAR_3);
 struct lm93_data *VAR_9 = FUNC_3(VAR_8);
 u32 VAR_10 = FUNC_8(VAR_5, ((void*)0), 10);
 u8 VAR_11, VAR_12;

 FUNC_6(&VAR_9->update_lock);
 VAR_11 = FUNC_4(VAR_8, FUNC_2(VAR_7));
 VAR_12 = FUNC_4(VAR_8, FUNC_1(VAR_7,VAR_0));
 VAR_11 = (VAR_11 & 0x0f) |
  FUNC_0(VAR_10, (VAR_12 & 0x07) ?
    VAR_2 :
    VAR_1) << 4;
 VAR_9->auto_pwm_min_hyst[VAR_7/2] = VAR_11;
 FUNC_5(VAR_8, FUNC_2(VAR_7), VAR_11);
 FUNC_7(&VAR_9->update_lock);
 return VAR_6;
}
