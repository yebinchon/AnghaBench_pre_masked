
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct lm85_data {int update_lock; TYPE_1__* autofan; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int index; } ;
struct TYPE_3__ {int config; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 struct lm85_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 long FUNC_6 (char const*,int *,int) ;
 struct i2c_client* FUNC_7 (struct device*) ;
 TYPE_2__* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1, struct device_attribute
  *VAR_2, const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = FUNC_8(VAR_2)->index;
 struct i2c_client *VAR_6 = FUNC_7(VAR_1);
 struct lm85_data *VAR_7 = FUNC_1(VAR_6);
 long VAR_8 = FUNC_6(VAR_3, ((void*)0), 10);
 u8 VAR_9;

 switch (VAR_8) {
 case 0:
  VAR_9 = 3;
  break;
 case 1:
  VAR_9 = 7;
  break;
 case 2:


  VAR_9 = 6;
  break;
 default:
  return -VAR_0;
 }

 FUNC_4(&VAR_7->update_lock);
 VAR_7->autofan[VAR_5].config = FUNC_2(VAR_6,
  FUNC_0(VAR_5));
 VAR_7->autofan[VAR_5].config = (VAR_7->autofan[VAR_5].config & ~0xe0)
  | (VAR_9 << 5);
 FUNC_3(VAR_6, FUNC_0(VAR_5),
  VAR_7->autofan[VAR_5].config);
 FUNC_5(&VAR_7->update_lock);
 return VAR_4;
}
