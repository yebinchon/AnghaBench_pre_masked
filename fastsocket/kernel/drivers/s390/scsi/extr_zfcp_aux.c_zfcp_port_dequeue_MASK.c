
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct zfcp_port {TYPE_2__ sysfs_device; int adapter; int refcount; int remove_wq; int test_link_work; int rport_work; int gid_pn_work; int list; } ;
struct TYPE_3__ {int config_lock; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_9 (struct zfcp_port*) ;
 int VAR_1 ;

void FUNC_10(struct zfcp_port *VAR_2)
{
 FUNC_6(&VAR_0.config_lock);
 FUNC_3(&VAR_2->list);
 FUNC_7(&VAR_0.config_lock);
 if (FUNC_1(&VAR_2->gid_pn_work))
  FUNC_9(VAR_2);
 if (FUNC_1(&VAR_2->rport_work))
  FUNC_9(VAR_2);
 if (FUNC_1(&VAR_2->test_link_work))
  FUNC_9(VAR_2);
 FUNC_5(VAR_2->remove_wq, FUNC_0(&VAR_2->refcount) == 0);
 FUNC_8(VAR_2->adapter);
 FUNC_4(&VAR_2->sysfs_device.kobj, &VAR_1);
 FUNC_2(&VAR_2->sysfs_device);
}
