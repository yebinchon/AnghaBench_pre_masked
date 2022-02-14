
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max6650_data {int speed; int update_lock; int config; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_3 ;
 struct max6650_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int *,int) ;
 struct i2c_client* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_4, struct device_attribute *VAR_5,
    const char *VAR_6, size_t VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_7(VAR_4);
 struct max6650_data *VAR_9 = FUNC_2(VAR_8);
 int VAR_10 = FUNC_6(VAR_6, ((void*)0), 10);
 int VAR_11, VAR_12;

 VAR_10 = FUNC_1(VAR_10, VAR_1, VAR_0);
 FUNC_4(&VAR_9->update_lock);

 VAR_11 = FUNC_0(VAR_9->config);
 VAR_12 = ((VAR_3 * VAR_11) / (256 * VAR_10 / 60)) - 1;
 if (VAR_12 < 0)
  VAR_12 = 0;
 if (VAR_12 > 255)
  VAR_12 = 255;
 VAR_9->speed = VAR_12;

 FUNC_3(VAR_8, VAR_2, VAR_9->speed);

 FUNC_5(&VAR_9->update_lock);

 return VAR_7;
}
