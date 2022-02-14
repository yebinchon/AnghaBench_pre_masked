
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lm93_data {int update_lock; int ** block9; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,size_t) ;
 int FUNC_1 (int ,int ,int) ;
 struct lm93_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int *,int) ;
 struct i2c_client* FUNC_7 (struct device*) ;
 TYPE_1__* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = (FUNC_8(VAR_2))->index;
 struct i2c_client *VAR_6 = FUNC_7(VAR_1);
 struct lm93_data *VAR_7 = FUNC_2(VAR_6);
 u32 VAR_8 = FUNC_6(VAR_3, ((void*)0), 10);

 FUNC_4(&VAR_7->update_lock);
 VAR_7->block9[VAR_5][VAR_0] = FUNC_1(VAR_8, 0, 255);
 FUNC_3(VAR_6, FUNC_0(VAR_5,VAR_0),
    VAR_7->block9[VAR_5][VAR_0]);
 FUNC_5(&VAR_7->update_lock);
 return VAR_4;
}
