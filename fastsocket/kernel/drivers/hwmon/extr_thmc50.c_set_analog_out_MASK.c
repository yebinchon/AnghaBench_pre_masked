
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thmc50_data {int analog_out; int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct thmc50_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int *,int) ;
 struct i2c_client* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3,
         struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_7(VAR_3);
 struct thmc50_data *VAR_8 = FUNC_1(VAR_7);
 int VAR_9 = FUNC_6(VAR_5, ((void*)0), 10);
 int VAR_10;

 FUNC_4(&VAR_8->update_lock);
 VAR_8->analog_out = FUNC_0(VAR_9, 0, 255);
 FUNC_3(VAR_7, VAR_0,
      VAR_8->analog_out);

 VAR_10 = FUNC_2(VAR_7, VAR_1);
 if (VAR_8->analog_out == 0)
  VAR_10 &= ~VAR_2;
 else
  VAR_10 |= VAR_2;
 FUNC_3(VAR_7, VAR_1, VAR_10);

 FUNC_5(&VAR_8->update_lock);
 return VAR_6;
}
