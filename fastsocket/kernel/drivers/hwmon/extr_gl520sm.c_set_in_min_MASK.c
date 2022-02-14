
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int dummy; } ;
struct gl520_data {int* in_min; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int * VAR_0 ;
 int FUNC_0 (long) ;
 int FUNC_1 (long) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 struct gl520_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 long FUNC_7 (char const*,int *,int) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 TYPE_1__* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_1, struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_8(VAR_1);
 struct gl520_data *VAR_6 = FUNC_4(VAR_5);
 int VAR_7 = FUNC_9(VAR_2)->index;
 long VAR_8 = FUNC_7(VAR_3, ((void*)0), 10);
 u8 VAR_9;

 FUNC_5(&VAR_6->update_lock);

 if (VAR_7 == 0)
  VAR_9 = FUNC_1(VAR_8);
 else
  VAR_9 = FUNC_0(VAR_8);

 VAR_6->in_min[VAR_7] = VAR_9;

 if (VAR_7 < 4)
  FUNC_3(VAR_5, VAR_0[VAR_7],
      (FUNC_2(VAR_5, VAR_0[VAR_7])
       & ~0xff) | VAR_9);
 else
  FUNC_3(VAR_5, VAR_0[VAR_7], VAR_9);

 FUNC_6(&VAR_6->update_lock);
 return VAR_4;
}
