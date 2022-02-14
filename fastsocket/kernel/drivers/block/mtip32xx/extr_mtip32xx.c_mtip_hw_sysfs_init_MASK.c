
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct driver_data {TYPE_1__* pdev; } ;
struct TYPE_4__ {int attr; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct kobject*,int *) ;

__attribute__((used)) static int FUNC_2(struct driver_data *VAR_2, struct kobject *VAR_3)
{
 if (!VAR_3 || !VAR_2)
  return -VAR_0;

 if (FUNC_1(VAR_3, &VAR_1.attr))
  FUNC_0(&VAR_2->pdev->dev,
   "Error creating 'status' sysfs entry\n");
 return 0;
}
