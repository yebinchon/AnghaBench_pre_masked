
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2o_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (struct i2o_device*,int,int ,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (char*) ;
 struct i2o_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
           struct device_attribute *VAR_1, char *VAR_2)
{
 struct i2o_device *VAR_3 = FUNC_4(VAR_0);
 u16 VAR_4;

 if (!FUNC_0(VAR_3, 0x0000, 0, &VAR_4, 2)) {
  FUNC_2(VAR_2, "0x%04x", FUNC_1(VAR_4));
  return FUNC_3(VAR_2) + 1;
 }

 return 0;
}
