
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char const*,char**,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 char *VAR_6;

 VAR_5 = FUNC_2(VAR_3, &VAR_6, 0);
 if (*VAR_6 && !FUNC_1(*VAR_6))
  return -VAR_0;

 FUNC_0(VAR_5);

 return VAR_4;
}
