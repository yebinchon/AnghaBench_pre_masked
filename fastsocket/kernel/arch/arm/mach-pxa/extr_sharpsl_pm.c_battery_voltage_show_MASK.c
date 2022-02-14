
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int mainbat_voltage; } ;
struct TYPE_4__ {TYPE_1__ battstat; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 return FUNC_0(VAR_3, "%d\n",VAR_0.battstat.mainbat_voltage);
}
