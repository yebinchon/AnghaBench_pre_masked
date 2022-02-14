
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 TYPE_1__* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2 (struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4;

 VAR_4 = (FUNC_1(VAR_1)->state == VAR_0);

 return FUNC_0(VAR_3, VAR_4 ? "1\n" : "0\n");
}
