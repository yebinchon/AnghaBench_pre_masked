
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*,int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
 struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{

 int VAR_5, VAR_6;

 if (FUNC_1(VAR_3, "%i", &VAR_5) != 1 || (VAR_5 != (VAR_5 & 1)))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 return VAR_4;
}
