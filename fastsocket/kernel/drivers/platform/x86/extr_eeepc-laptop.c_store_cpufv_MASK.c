
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eeepc_cpufv {int num; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ cpufv_disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_0 (struct eeepc_cpufv*) ;
 int FUNC_1 (char const*,size_t,int*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_5,
      struct device_attribute *VAR_6,
      const char *VAR_7, size_t VAR_8)
{
 struct eeepc_cpufv VAR_9;
 int VAR_10, VAR_11;

 if (VAR_4->cpufv_disabled)
  return -VAR_3;
 if (FUNC_0(&VAR_9))
  return -VAR_2;
 VAR_10 = FUNC_1(VAR_7, VAR_8, &VAR_11);
 if (VAR_10 < 0)
  return VAR_10;
 if (!VAR_10 || VAR_11 < 0 || VAR_11 >= VAR_9.num)
  return -VAR_1;
 FUNC_2(VAR_0, VAR_11);
 return VAR_10;
}
