
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm92_data {int update_lock; scalar_t__ temp1_hyst; int temp1_crit; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct lm92_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 long FUNC_6 (char const*,int *,int) ;
 int FUNC_7 (int ) ;
 struct i2c_client* FUNC_8 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3,
 size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_8(VAR_1);
 struct lm92_data *VAR_6 = FUNC_2(VAR_5);
 long VAR_7 = FUNC_6(VAR_3, ((void*)0), 10);

 FUNC_4(&VAR_6->update_lock);
 VAR_6->temp1_hyst = FUNC_0(VAR_6->temp1_crit) - VAR_7;
 FUNC_3(VAR_5, VAR_0,
      FUNC_7(FUNC_1(VAR_6->temp1_hyst)));
 FUNC_5(&VAR_6->update_lock);
 return VAR_4;
}
