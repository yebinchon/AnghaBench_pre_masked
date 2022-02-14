
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_17__ {int timer; } ;
struct isci_port {TYPE_4__ timer; } ;
struct TYPE_18__ {int timer; } ;
struct isci_phy {TYPE_5__ sata_timer; } ;
struct TYPE_13__ {int timer; } ;
struct TYPE_12__ {int timer; } ;
struct TYPE_21__ {int timer; } ;
struct TYPE_22__ {TYPE_8__ timer; } ;
struct TYPE_19__ {int timer; } ;
struct TYPE_20__ {TYPE_6__ timer; } ;
struct isci_host {int logical_port_entries; TYPE_11__ phy_timer; TYPE_10__ timer; TYPE_9__ power_control; TYPE_7__ port_agent; struct isci_phy* phys; struct isci_port* ports; int scic_lock; TYPE_3__* scu_registers; int flags; } ;
struct TYPE_14__ {int interface_control; int * output_data_select; } ;
struct TYPE_15__ {TYPE_1__ sgpio; } ;
struct TYPE_16__ {TYPE_2__ peg0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct isci_host*) ;
 int FUNC_2 (struct isci_host*) ;
 int FUNC_3 (struct isci_host*,int ) ;
 int FUNC_4 (struct isci_host*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct isci_host*) ;
 int FUNC_9 (int ,int *) ;

void FUNC_10(struct isci_host *VAR_4)
{
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_4); VAR_5++)
  FUNC_9(VAR_3, &VAR_4->scu_registers->peg0.sgpio.output_data_select[VAR_5]);

 FUNC_5(VAR_0, &VAR_4->flags);

 FUNC_6(&VAR_4->scic_lock);
 FUNC_3(VAR_4, VAR_1);
 FUNC_7(&VAR_4->scic_lock);

 FUNC_8(VAR_4);






 FUNC_4(VAR_4);




 FUNC_9(0, &VAR_4->scu_registers->peg0.sgpio.interface_control);

 FUNC_6(&VAR_4->scic_lock);
 FUNC_2(VAR_4);
 FUNC_7(&VAR_4->scic_lock);


 for (VAR_5 = 0; VAR_5 < VAR_4->logical_port_entries; VAR_5++) {
  struct isci_port *VAR_6 = &VAR_4->ports[VAR_5];
  FUNC_0(&VAR_6->timer.timer);
 }


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  struct isci_phy *VAR_7 = &VAR_4->phys[VAR_5];
  FUNC_0(&VAR_7->sata_timer.timer);
 }

 FUNC_0(&VAR_4->port_agent.timer.timer);

 FUNC_0(&VAR_4->power_control.timer.timer);

 FUNC_0(&VAR_4->timer.timer);

 FUNC_0(&VAR_4->phy_timer.timer);
}
