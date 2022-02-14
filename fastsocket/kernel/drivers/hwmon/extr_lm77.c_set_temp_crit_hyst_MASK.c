
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm77_data {int update_lock; scalar_t__ temp_hyst; scalar_t__ temp_crit; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct lm77_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (char const*,int *,int) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_6(VAR_1);
 struct lm77_data *VAR_6 = FUNC_1(VAR_5);
 unsigned long VAR_7 = FUNC_5(VAR_3, ((void*)0), 10);

 FUNC_3(&VAR_6->update_lock);
 VAR_6->temp_hyst = VAR_6->temp_crit - VAR_7;
 FUNC_2(VAR_5, VAR_0,
    FUNC_0(VAR_6->temp_hyst));
 FUNC_4(&VAR_6->update_lock);
 return VAR_4;
}
