
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int remote_node_index; } ;
struct isci_remote_device {TYPE_1__ rnc; struct isci_port* owning_port; } ;
struct isci_port {int physical_port_index; int owning_controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;

void FUNC_1(struct isci_remote_device *VAR_3, u32 VAR_4)
{
 struct isci_port *VAR_5 = VAR_3->owning_port;
 u32 VAR_6;

 VAR_6 = VAR_4 |
    (VAR_0 << VAR_2) |
    (VAR_5->physical_port_index << VAR_1) |
    VAR_3->rnc.remote_node_index;

 FUNC_0(VAR_5->owning_controller, VAR_6);
}
