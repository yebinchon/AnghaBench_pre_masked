
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bonding {TYPE_2__* primary_slave; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (char*,char*,char*) ;
 struct bonding* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
        struct device_attribute *VAR_1,
        char *VAR_2)
{
 int VAR_3 = 0;
 struct bonding *VAR_4 = FUNC_1(VAR_0);

 if (VAR_4->primary_slave)
  VAR_3 = FUNC_0(VAR_2, "%s\n", VAR_4->primary_slave->dev->name);

 return VAR_3;
}
