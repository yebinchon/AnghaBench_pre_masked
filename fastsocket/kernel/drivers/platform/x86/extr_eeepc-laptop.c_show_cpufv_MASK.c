
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeepc_cpufv {int num; int cur; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct eeepc_cpufv*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct eeepc_cpufv VAR_4;

 if (FUNC_0(&VAR_4))
  return -VAR_0;
 return FUNC_1(VAR_3, "%#x\n", (VAR_4.num << 8) | VAR_4.cur);
}
