
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userspace_consumer_data {scalar_t__ enabled; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct userspace_consumer_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 struct userspace_consumer_data *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3->enabled)
  return FUNC_1(VAR_2, "enabled\n");

 return FUNC_1(VAR_2, "disabled\n");
}
