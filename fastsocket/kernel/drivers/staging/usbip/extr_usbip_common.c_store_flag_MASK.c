
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char const*,char*,unsigned long*) ;
 unsigned long VAR_0 ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;

 FUNC_0(VAR_3, "%lx", &VAR_5);
 VAR_0 = VAR_5;

 return VAR_4;
}
