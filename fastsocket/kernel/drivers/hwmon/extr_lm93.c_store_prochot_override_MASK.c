
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct lm93_data {int update_lock; int prochot_override; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 struct lm93_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_1 ;
 scalar_t__ FUNC_4 (char const*,int *,int) ;
 struct i2c_client* FUNC_5 (struct device*) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = (FUNC_6(VAR_3))->index;
 struct i2c_client *VAR_7 = FUNC_5(VAR_2);
 struct lm93_data *VAR_8 = FUNC_0(VAR_7);
 u32 VAR_9 = FUNC_4(VAR_4, ((void*)0), 10);

 FUNC_2(&VAR_8->update_lock);
 if (VAR_9)
  VAR_8->prochot_override |= VAR_1[VAR_6];
 else
  VAR_8->prochot_override &= (~VAR_1[VAR_6]);
 FUNC_1(VAR_7, VAR_0,
   VAR_8->prochot_override);
 FUNC_3(&VAR_8->update_lock);
 return VAR_5;
}
