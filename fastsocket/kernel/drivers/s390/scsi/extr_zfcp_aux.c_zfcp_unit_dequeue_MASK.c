
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct zfcp_unit {TYPE_2__ sysfs_device; int port; int list; int refcount; int remove_wq; } ;
struct TYPE_3__ {int config_lock; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_7 (int ) ;
 int VAR_1 ;

void FUNC_8(struct zfcp_unit *VAR_2)
{
 FUNC_4(VAR_2->remove_wq, FUNC_0(&VAR_2->refcount) == 0);
 FUNC_5(&VAR_0.config_lock);
 FUNC_2(&VAR_2->list);
 FUNC_6(&VAR_0.config_lock);
 FUNC_7(VAR_2->port);
 FUNC_3(&VAR_2->sysfs_device.kobj, &VAR_1);
 FUNC_1(&VAR_2->sysfs_device);
}
