
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef int __le32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct i2c_client*,int ,int,int *) ;
 int FUNC_5 (char const*,char**,int ) ;
 struct i2c_client* FUNC_6 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2, struct device_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute_2 *VAR_6 = FUNC_7(VAR_3);
 struct i2c_client *VAR_7 = FUNC_6(VAR_2);
 char *VAR_8;
 u64 VAR_9;
 __le32 VAR_10;
 int VAR_11;

 FUNC_1(VAR_2, "ds1682_store() called on %s\n", VAR_3->attr.name);


 VAR_9 = FUNC_5(VAR_4, &VAR_8, 0);
 if (VAR_4 == VAR_8) {
  FUNC_1(VAR_2, "input string not a number\n");
  return -VAR_0;
 }



 if (VAR_6->nr == 4)
  FUNC_3(VAR_9, 250);


 VAR_10 = FUNC_0(VAR_9);
 VAR_11 = FUNC_4(VAR_7, VAR_6->index, VAR_6->nr,
         (u8 *) & VAR_10);
 if (VAR_11 < 0) {
  FUNC_2(VAR_2, "register write failed; reg=0x%x, size=%i\n",
   VAR_6->index, VAR_6->nr);
  return -VAR_1;
 }

 return VAR_5;
}
