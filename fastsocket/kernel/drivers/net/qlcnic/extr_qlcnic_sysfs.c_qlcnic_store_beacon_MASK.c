
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ op_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct qlcnic_adapter* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*,char const*,size_t) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
       struct device_attribute *VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 struct qlcnic_adapter *VAR_7 = FUNC_0(VAR_3);
 int VAR_8 = 0;

 if (VAR_7->ahw->op_mode == VAR_2) {
  FUNC_1(VAR_3,
    "LED test not supported in non privileged mode\n");
  return -VAR_1;
 }

 if (FUNC_2(VAR_7))
  VAR_8 = FUNC_3(VAR_7, VAR_5, VAR_6);
 else if (FUNC_4(VAR_7))
  VAR_8 = FUNC_5(VAR_7, VAR_5, VAR_6);
 else
  return -VAR_0;

 return VAR_8;
}
