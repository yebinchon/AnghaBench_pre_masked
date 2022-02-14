
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1026_data {int alarm_mask; int gpio_mask; int update_lock; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*,int ,unsigned long) ;
 struct adm1026_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int *,int) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4, struct device_attribute *VAR_5, const char *VAR_6,
  size_t VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_5(VAR_4);
 struct adm1026_data *VAR_9 = FUNC_1(VAR_8);
 int VAR_10 = FUNC_4(VAR_6, ((void*)0), 10);
 unsigned long VAR_11;

 FUNC_2(&VAR_9->update_lock);
 VAR_9->alarm_mask = VAR_10 & 0x7fffffff;
 VAR_11 = VAR_9->alarm_mask
  | (VAR_9->gpio_mask & 0x10000 ? 0x80000000 : 0);
 FUNC_0(VAR_8, VAR_0,
  VAR_11 & 0xff);
 VAR_11 >>= 8;
 FUNC_0(VAR_8, VAR_1,
  VAR_11 & 0xff);
 VAR_11 >>= 8;
 FUNC_0(VAR_8, VAR_2,
  VAR_11 & 0xff);
 VAR_11 >>= 8;
 FUNC_0(VAR_8, VAR_3,
  VAR_11 & 0xff);
 FUNC_3(&VAR_9->update_lock);
 return VAR_7;
}
