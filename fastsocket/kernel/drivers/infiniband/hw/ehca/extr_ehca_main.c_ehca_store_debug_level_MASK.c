
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;

__attribute__((used)) static ssize_t FUNC_0(struct device_driver *VAR_1,
          const char *VAR_2, size_t VAR_3)
{
 int VAR_4 = (*VAR_2) - '0';
 if (VAR_4 >= 0 && VAR_4 <= 9)
  VAR_0 = VAR_4;
 return 1;
}
