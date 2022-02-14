
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int,int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,char*,long) ;
 struct i2c_client* FUNC_4 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1, struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct sensor_device_attribute_2 *VAR_4 = FUNC_5(VAR_2);
 struct i2c_client *VAR_5 = FUNC_4(VAR_1);
 __le32 VAR_6 = 0;
 int VAR_7;

 FUNC_0(VAR_1, "ds1682_show() called on %s\n", VAR_2->attr.name);


 VAR_7 = FUNC_1(VAR_5, VAR_4->index, VAR_4->nr,
        (u8 *) & VAR_6);
 if (VAR_7 < 0)
  return -VAR_0;



 if (VAR_4->nr == 4)
  return FUNC_3(VAR_3, "%llu\n",
   ((unsigned long long)FUNC_2(VAR_6)) * 250);


 return FUNC_3(VAR_3, "%li\n", (long)FUNC_2(VAR_6));
}
