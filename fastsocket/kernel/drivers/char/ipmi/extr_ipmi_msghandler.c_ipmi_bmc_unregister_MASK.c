
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bmc_device {int refcount; TYPE_3__* dev; } ;
typedef TYPE_4__* ipmi_smi_t ;
struct TYPE_9__ {struct bmc_device* bmc; int * my_dev_name; int * sysfs_name; TYPE_1__* si_dev; } ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_8__ {TYPE_2__ dev; } ;
struct TYPE_6__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(ipmi_smi_t VAR_2)
{
 struct bmc_device *VAR_3 = VAR_2->bmc;

 if (VAR_2->sysfs_name) {
  FUNC_4(&VAR_2->si_dev->kobj, VAR_2->sysfs_name);
  FUNC_0(VAR_2->sysfs_name);
  VAR_2->sysfs_name = ((void*)0);
 }
 if (VAR_2->my_dev_name) {
  FUNC_4(&VAR_3->dev->dev.kobj, VAR_2->my_dev_name);
  FUNC_0(VAR_2->my_dev_name);
  VAR_2->my_dev_name = ((void*)0);
 }

 FUNC_2(&VAR_1);
 FUNC_1(&VAR_3->refcount, VAR_0);
 VAR_2->bmc = ((void*)0);
 FUNC_3(&VAR_1);
}
