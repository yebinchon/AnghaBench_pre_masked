
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (char*,char*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_3(struct device_driver *VAR_4,
          const char *VAR_5, size_t VAR_6)
{
 unsigned long VAR_7;

 if (FUNC_1(VAR_5, 120, &VAR_7))
  return -VAR_0;

 if (!VAR_2)
  return -VAR_1;

 VAR_3 = VAR_7;
 FUNC_0();

 FUNC_2("fan_watchdog", "set to %lu\n", VAR_7);

 return VAR_6;
}
