
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct isci_port {size_t physical_port_index; int ready_exit; int ** phy_table; int * port_task_scheduler_registers; int timer; int reserved_tag; int reserved_rni; scalar_t__ hang_detect_users; scalar_t__ assigned_device_count; scalar_t__ started_request_count; struct isci_host* owning_controller; scalar_t__ last_active_phy; scalar_t__ enabled_phy_mask; scalar_t__ active_phy_mask; int logical_port_index; int sm; } ;
struct isci_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;

void FUNC_2(struct isci_port *VAR_7, u8 VAR_8,
        struct isci_host *VAR_9)
{
 FUNC_0(&VAR_7->sm, VAR_6, VAR_3);

 VAR_7->logical_port_index = VAR_0;
 VAR_7->physical_port_index = VAR_8;
 VAR_7->active_phy_mask = 0;
 VAR_7->enabled_phy_mask = 0;
 VAR_7->last_active_phy = 0;
 VAR_7->ready_exit = 0;

 VAR_7->owning_controller = VAR_9;

 VAR_7->started_request_count = 0;
 VAR_7->assigned_device_count = 0;
 VAR_7->hang_detect_users = 0;

 VAR_7->reserved_rni = VAR_4;
 VAR_7->reserved_tag = VAR_1;

 FUNC_1(&VAR_7->timer, VAR_5);

 VAR_7->port_task_scheduler_registers = ((void*)0);

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  VAR_7->phy_table[VAR_8] = ((void*)0);
}
