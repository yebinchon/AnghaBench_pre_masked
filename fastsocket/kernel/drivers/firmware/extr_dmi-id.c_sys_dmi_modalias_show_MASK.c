
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 ssize_t VAR_4;
 VAR_4 = FUNC_0(VAR_3, VAR_0-1);
 VAR_3[VAR_4] = '\n';
 VAR_3[VAR_4+1] = 0;
 return VAR_4+1;
}
