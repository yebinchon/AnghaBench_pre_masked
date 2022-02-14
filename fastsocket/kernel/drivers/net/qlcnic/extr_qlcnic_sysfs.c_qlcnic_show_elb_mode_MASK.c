
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct qlcnic_adapter* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct qlcnic_adapter *VAR_4 = FUNC_0(VAR_1);

 if (FUNC_2(VAR_0, &VAR_4->state))
  return FUNC_1(VAR_3, "1\n");

 return FUNC_1(VAR_3, "0\n");
}
