
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct lm93_data {int* vccp_limits; int update_lock; TYPE_1__* block7; int * vid; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int index; } ;
struct TYPE_3__ {int max; } ;


 int FUNC_0 (int ,int,long) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 long FUNC_4 (int ) ;
 struct lm93_data* FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (struct i2c_client*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char const*,int *,int) ;
 struct i2c_client* FUNC_10 (struct device*) ;
 TYPE_2__* FUNC_11 (struct device_attribute*) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static ssize_t FUNC_12(struct device *VAR_1, struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = (FUNC_11(VAR_2))->index;
 struct i2c_client *VAR_6 = FUNC_10(VAR_1);
 struct lm93_data *VAR_7 = FUNC_5(VAR_6);
 u32 VAR_8 = FUNC_9(VAR_3, ((void*)0), 10);
 int VAR_9 = VAR_5 - 6;
 long VAR_10;

 FUNC_7(&VAR_7->update_lock);
 if ((VAR_5==6 || VAR_5==7) && (VAR_0[VAR_9])) {
  VAR_10 = FUNC_4(VAR_7->vid[VAR_9]);
  VAR_7->vccp_limits[VAR_9] = (VAR_7->vccp_limits[VAR_9] & 0x0f) |
    FUNC_0(VAR_8, 1, VAR_10);
  FUNC_6(VAR_6, FUNC_3(VAR_9),
    VAR_7->vccp_limits[VAR_9]);
 }
 else {
  VAR_7->block7[VAR_5].max = FUNC_1(VAR_5,VAR_8);
  FUNC_6(VAR_6, FUNC_2(VAR_5),
    VAR_7->block7[VAR_5].max);
 }
 FUNC_8(&VAR_7->update_lock);
 return VAR_4;
}
