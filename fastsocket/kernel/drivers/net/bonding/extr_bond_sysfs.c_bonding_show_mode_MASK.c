
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {size_t mode; } ;
struct bonding {TYPE_1__ params; } ;
typedef int ssize_t ;
struct TYPE_4__ {char* modename; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*,char*,char*,size_t) ;
 struct bonding* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct bonding *VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(VAR_3, "%s %d\n",
   VAR_0[VAR_4->params.mode].modename,
   VAR_4->params.mode);
}
