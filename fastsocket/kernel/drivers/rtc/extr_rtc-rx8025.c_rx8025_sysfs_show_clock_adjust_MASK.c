
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*,int*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
           struct device_attribute *VAR_1,
           char *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_0, &VAR_4);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_2, "%d\n", VAR_4);
}
