
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int max_user_freq; } ;


 int FUNC_0 (char*,char*,int) ;
 TYPE_1__* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
  char *VAR_2)
{
 return FUNC_0(VAR_2, "%d\n", FUNC_1(VAR_0)->max_user_freq);
}
