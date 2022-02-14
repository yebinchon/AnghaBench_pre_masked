
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1026_data {int gpio; int alarms; int update_lock; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ,long) ;
 struct adm1026_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int *,int) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3, struct device_attribute *VAR_4, const char *VAR_5,
  size_t VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_5(VAR_3);
 struct adm1026_data *VAR_8 = FUNC_1(VAR_7);
 int VAR_9 = FUNC_4(VAR_5, ((void*)0), 10);
 long VAR_10;

 FUNC_2(&VAR_8->update_lock);
 VAR_8->gpio = VAR_9 & 0x1ffff;
 VAR_10 = VAR_8->gpio;
 FUNC_0(VAR_7, VAR_0, VAR_10 & 0xff);
 VAR_10 >>= 8;
 FUNC_0(VAR_7, VAR_1, VAR_10 & 0xff);
 VAR_10 = ((VAR_10 >> 1) & 0x80) | (VAR_8->alarms >> 24 & 0x7f);
 FUNC_0(VAR_7, VAR_2, VAR_10 & 0xff);
 FUNC_3(&VAR_8->update_lock);
 return VAR_6;
}
