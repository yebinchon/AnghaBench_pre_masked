
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isci_remote_device {int dummy; } ;
struct isci_port {int active_phy_mask; int state; } ;
struct isci_host {int scic_lock; } ;
struct domain_device {TYPE_1__* port; } ;
struct TYPE_2__ {struct isci_port* lldd_port; } ;


 int VAR_0 ;
 struct isci_host* FUNC_0 (struct domain_device*) ;
 struct isci_remote_device* FUNC_1 (struct domain_device*) ;
 int FUNC_2 (struct isci_remote_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct domain_device *VAR_1)
{
 struct isci_port *VAR_2 = VAR_1->port->lldd_port;
 struct isci_host *VAR_3 = FUNC_0(VAR_1);
 struct isci_remote_device *VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_3(&VAR_3->scic_lock, VAR_5);
 VAR_4 = FUNC_1(VAR_1);
 FUNC_4(&VAR_3->scic_lock, VAR_5);

 if (!VAR_4)
  goto out;

 if (FUNC_5(VAR_0, &VAR_2->state))
  goto out;

 VAR_6 = !!VAR_2->active_phy_mask;
 out:
 FUNC_2(VAR_4);

 return VAR_6;
}
