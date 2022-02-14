
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport_driver {char* description; } ;
struct device_driver {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,char*) ;
 struct gameport_driver* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device_driver *VAR_0, char *VAR_1)
{
 struct gameport_driver *VAR_2 = FUNC_1(VAR_0);
 return FUNC_0(VAR_1, "%s\n", VAR_2->description ? VAR_2->description : "(none)");
}
