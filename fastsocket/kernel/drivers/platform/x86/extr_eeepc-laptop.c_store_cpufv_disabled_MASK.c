
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int cpufv_disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char const*,size_t,int*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
      struct device_attribute *VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 int VAR_7, VAR_8;

 VAR_7 = FUNC_0(VAR_5, VAR_6, &VAR_8);
 if (VAR_7 < 0)
  return VAR_7;

 switch (VAR_8) {
 case 0:
  if (VAR_2->cpufv_disabled)
   FUNC_1("cpufv enabled (not officially supported "
    "on this model)\n");
  VAR_2->cpufv_disabled = 0;
  return VAR_7;
 case 1:
  return -VAR_1;
 default:
  return -VAR_0;
 }
}
