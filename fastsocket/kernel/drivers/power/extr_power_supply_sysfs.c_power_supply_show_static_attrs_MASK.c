
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {size_t type; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct power_supply* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
           struct device_attribute *VAR_1,
           char *VAR_2) {
 static char *VAR_3[] = { "Battery", "UPS", "Mains", "USB" };
 struct power_supply *VAR_4 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "%s\n", VAR_3[VAR_4->type]);
}
