
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {int owned; } ;
typedef TYPE_1__ cap_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (struct device*,int ,TYPE_1__*,char*) ;

ssize_t FUNC_2(struct device * VAR_1, struct device_attribute * VAR_2,
   char *VAR_3)
{
 cap_t VAR_4;
 ssize_t VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_0, &VAR_4,
    "attempting to determine the owner state");
 if (VAR_5)
  return 0;

 VAR_5 = FUNC_0(VAR_3, "%d\n", VAR_4.owned);
 return VAR_5;
}
