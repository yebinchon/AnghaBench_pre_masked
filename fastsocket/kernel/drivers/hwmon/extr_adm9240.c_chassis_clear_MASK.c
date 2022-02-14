
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 unsigned long FUNC_2 (char const*,int *,int) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
  struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_3(VAR_1);
 unsigned long VAR_6 = FUNC_2(VAR_3, ((void*)0), 10);

 if (VAR_6 == 1) {
  FUNC_1(VAR_5,
    VAR_0, 0x80);
  FUNC_0(&VAR_5->dev, "chassis intrusion latch cleared\n");
 }
 return VAR_4;
}
