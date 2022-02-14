
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeepc_cpufv {int num; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct eeepc_cpufv*) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
        struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct eeepc_cpufv VAR_4;
 int VAR_5;
 ssize_t VAR_6 = 0;

 if (FUNC_0(&VAR_4))
  return -VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_4.num; VAR_5++)
  VAR_6 += FUNC_1(VAR_3 + VAR_6, "%d ", VAR_5);
 VAR_6 += FUNC_1(VAR_3 + VAR_6, "\n");
 return VAR_6;
}
