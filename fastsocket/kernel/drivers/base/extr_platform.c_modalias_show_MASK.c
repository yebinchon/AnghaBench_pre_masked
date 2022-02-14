
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {char* name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char*) ;
 struct platform_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct platform_device *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = FUNC_0(VAR_3, VAR_0, "platform:%s\n", VAR_4->name);

 return (VAR_5 >= VAR_0) ? (VAR_0 - 1) : VAR_5;
}
