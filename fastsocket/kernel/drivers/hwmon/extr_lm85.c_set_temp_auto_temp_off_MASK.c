
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lm85_data {int update_lock; TYPE_1__* zone; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int index; } ;
struct TYPE_3__ {int hyst; int off_desired; int limit; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (long) ;
 struct lm85_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 long FUNC_7 (char const*,int *,int) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 TYPE_2__* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = FUNC_9(VAR_3)->index;
 struct i2c_client *VAR_7 = FUNC_8(VAR_2);
 struct lm85_data *VAR_8 = FUNC_3(VAR_7);
 int VAR_9;
 long VAR_10 = FUNC_7(VAR_4, ((void*)0), 10);

 FUNC_5(&VAR_8->update_lock);
 VAR_9 = FUNC_1(VAR_8->zone[VAR_6].limit);
 VAR_8->zone[VAR_6].off_desired = FUNC_2(VAR_10);
 VAR_8->zone[VAR_6].hyst = FUNC_0(VAR_9 - VAR_10);
 if (VAR_6 == 0 || VAR_6 == 1) {
  FUNC_4(VAR_7, VAR_0,
   (VAR_8->zone[0].hyst << 4)
   | VAR_8->zone[1].hyst);
 } else {
  FUNC_4(VAR_7, VAR_1,
   (VAR_8->zone[2].hyst << 4));
 }
 FUNC_6(&VAR_8->update_lock);
 return VAR_5;
}
