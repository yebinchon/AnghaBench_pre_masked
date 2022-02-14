
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct lm93_data {int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 struct lm93_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int *,int) ;
 struct i2c_client* FUNC_7 (struct device*) ;
 TYPE_1__* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_2,
    struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = (FUNC_8(VAR_3))->index;
 struct i2c_client *VAR_7 = FUNC_7(VAR_2);
 struct lm93_data *VAR_8 = FUNC_1(VAR_7);
 u32 VAR_9 = FUNC_6(VAR_4, ((void*)0), 10);
 u8 VAR_10;

 FUNC_4(&VAR_8->update_lock);
 VAR_10 = FUNC_2(VAR_7,FUNC_0(VAR_6,VAR_1));

 switch (VAR_9) {
 case 0:
  VAR_10 |= 0xF1;
  break;
 case 1: VAR_10 |= 0x01;
  break;
 case 2: VAR_10 &= ~0x01;
  break;
 default:
  FUNC_5(&VAR_8->update_lock);
  return -VAR_0;
 }

 FUNC_3(VAR_7,FUNC_0(VAR_6,VAR_1),VAR_10);
 FUNC_5(&VAR_8->update_lock);
 return VAR_5;
}
