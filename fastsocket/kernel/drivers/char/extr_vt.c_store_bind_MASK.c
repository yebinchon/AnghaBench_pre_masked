
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct con_driver {int dummy; } ;
typedef size_t ssize_t ;


 struct con_driver* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int *,int ) ;
 int FUNC_2 (struct con_driver*) ;
 int FUNC_3 (struct con_driver*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 struct con_driver *VAR_4 = FUNC_0(VAR_0);
 int VAR_5 = FUNC_1(VAR_2, ((void*)0), 0);

 if (VAR_5)
  FUNC_2(VAR_4);
 else
  FUNC_3(VAR_4);

 return VAR_3;
}
