
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm90_data {scalar_t__ kind; int update_lock; int temp_hyst; int * temp8; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 struct lm90_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 long FUNC_5 (char const*,int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct lm90_data*,int ) ;
 struct i2c_client* FUNC_9 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_3, struct device_attribute *VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_9(VAR_3);
 struct lm90_data *VAR_8 = FUNC_1(VAR_7);
 long VAR_9 = FUNC_5(VAR_5, ((void*)0), 10);
 int VAR_10;

 FUNC_3(&VAR_8->update_lock);
 if (VAR_8->kind == VAR_1)
  VAR_10 = FUNC_8(VAR_8, VAR_8->temp8[2]);
 else if (VAR_8->kind == VAR_2)
  VAR_10 = FUNC_7(VAR_8->temp8[2]);
 else
  VAR_10 = FUNC_6(VAR_8->temp8[2]);

 VAR_8->temp_hyst = FUNC_0(VAR_10 - VAR_9);
 FUNC_2(VAR_7, VAR_0,
      VAR_8->temp_hyst);
 FUNC_4(&VAR_8->update_lock);
 return VAR_6;
}
