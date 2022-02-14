
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slave {TYPE_2__* dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int mode; } ;
struct bonding {TYPE_1__ params; int curr_slave_lock; struct slave* curr_active_slave; } ;
typedef int ssize_t ;
struct TYPE_4__ {char* name; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,char*) ;
 struct bonding* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
      struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct slave *VAR_3;
 struct bonding *VAR_4 = FUNC_4(VAR_0);
 int VAR_5 = 0;

 FUNC_1(&VAR_4->curr_slave_lock);
 VAR_3 = VAR_4->curr_active_slave;
 FUNC_2(&VAR_4->curr_slave_lock);

 if (FUNC_0(VAR_4->params.mode) && VAR_3)
  VAR_5 = FUNC_3(VAR_2, "%s\n", VAR_3->dev->name);
 return VAR_5;
}
