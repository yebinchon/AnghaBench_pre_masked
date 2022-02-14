
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83791d_data {int beep_enable; int beep_mask; int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 struct w83791d_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 long FUNC_3 (char const*,int *,int) ;
 struct i2c_client* FUNC_4 (struct device*) ;
 int FUNC_5 (struct i2c_client*,int ,long) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
    struct device_attribute *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_4(VAR_3);
 struct w83791d_data *VAR_8 = FUNC_0(VAR_7);
 long VAR_9 = FUNC_3(VAR_5, ((void*)0), 10);

 FUNC_1(&VAR_8->update_lock);

 VAR_8->beep_enable = VAR_9 ? 1 : 0;


 VAR_8->beep_mask &= ~VAR_0;
 VAR_8->beep_mask |= (VAR_8->beep_enable << VAR_1);



 VAR_9 = (VAR_8->beep_mask >> 8) & 0xff;

 FUNC_5(VAR_7, VAR_2[1], VAR_9);

 FUNC_2(&VAR_8->update_lock);

 return VAR_6;
}
