
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device_driver *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;

 if (FUNC_0(VAR_3, 0xffff, &VAR_5))
  return -VAR_0;

 VAR_1 = VAR_5;

 return VAR_4;
}
