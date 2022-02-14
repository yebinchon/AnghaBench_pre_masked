
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sas_ha_struct {int lock; int eh_active; } ;
struct TYPE_6__ {int eh_list_node; } ;
struct TYPE_5__ {int ap; } ;
struct domain_device {scalar_t__ dev_type; TYPE_3__ ssp_dev; TYPE_2__ sata_dev; int dev_list_node; int siblings; TYPE_1__* port; int parent; } ;
struct asd_sas_port {int dev_list_lock; struct sas_ha_struct* ha; } ;
struct TYPE_4__ {int * port_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct domain_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct domain_device*) ;
 int FUNC_5 (struct domain_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct asd_sas_port *VAR_1, struct domain_device *VAR_2)
{
 struct sas_ha_struct *VAR_3 = VAR_1->ha;

 FUNC_4(VAR_2);
 if (!VAR_2->parent)
  VAR_2->port->port_dev = ((void*)0);
 else
  FUNC_1(&VAR_2->siblings);

 FUNC_6(&VAR_1->dev_list_lock);
 FUNC_1(&VAR_2->dev_list_node);
 if (FUNC_0(VAR_2))
  FUNC_3(VAR_2->sata_dev.ap);
 FUNC_7(&VAR_1->dev_list_lock);

 FUNC_6(&VAR_3->lock);
 if (VAR_2->dev_type == VAR_0 &&
     !FUNC_2(&VAR_2->ssp_dev.eh_list_node)) {
  FUNC_1(&VAR_2->ssp_dev.eh_list_node);
  VAR_3->eh_active--;
 }
 FUNC_7(&VAR_3->lock);

 FUNC_5(VAR_2);
}
