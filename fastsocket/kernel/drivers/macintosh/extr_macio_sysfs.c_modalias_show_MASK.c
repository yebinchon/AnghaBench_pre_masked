
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct of_device*,char*,scalar_t__) ;
 struct of_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2 (struct device *VAR_1, struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct of_device *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_3, VAR_0 - 2);

 VAR_3[VAR_5] = '\n';
 VAR_3[VAR_5+1] = 0;

 return VAR_5+1;
}
