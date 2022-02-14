
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int remote_node_index; int nexus_loss_timer_enable; int check_bit; int is_valid; int is_remote_node_context; scalar_t__ oaf_more_compatibility_features; scalar_t__ oaf_source_zone_group; scalar_t__ oaf_features; int oaf_connection_rate; scalar_t__ initial_arbitration_wait_time; int connection_inactivity_timeout; int connection_occupancy_timeout; scalar_t__ arbitration_wait_time; scalar_t__ function_number; int remote_sas_address_lo; int remote_sas_address_hi; int logical_port_index; int remote_node_port_width; } ;
union scu_remote_node_context {TYPE_3__ ssp; } ;
struct sci_remote_node_context {int remote_node_index; } ;
struct isci_remote_device {int connection_rate; TYPE_1__* owning_port; int device_port_width; struct domain_device* domain_dev; } ;
struct TYPE_5__ {int ssp_inactivity_timeout; int ssp_max_occupancy_timeout; int stp_inactivity_timeout; int stp_max_occupancy_timeout; } ;
struct isci_host {TYPE_2__ user_parameters; } ;
struct domain_device {int sas_addr; } ;
typedef int __le64 ;
struct TYPE_4__ {int physical_port_index; struct isci_host* owning_controller; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct domain_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (union scu_remote_node_context*,int ,int) ;
 struct isci_remote_device* FUNC_5 (struct sci_remote_node_context*) ;
 int FUNC_6 (struct isci_remote_device*) ;
 union scu_remote_node_context* FUNC_7 (struct isci_host*,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct sci_remote_node_context *VAR_0)
{
 struct isci_remote_device *VAR_1 = FUNC_5(VAR_0);
 struct domain_device *VAR_2 = VAR_1->domain_dev;
 int VAR_3 = VAR_0->remote_node_index;
 union scu_remote_node_context *VAR_4;
 struct isci_host *VAR_5;
 __le64 VAR_6;

 VAR_5 = VAR_1->owning_port->owning_controller;
 VAR_4 = FUNC_7(VAR_5, VAR_3);

 FUNC_4(VAR_4, 0, sizeof(union scu_remote_node_context)
  * FUNC_6(VAR_1));

 VAR_4->ssp.remote_node_index = VAR_3;
 VAR_4->ssp.remote_node_port_width = VAR_1->device_port_width;
 VAR_4->ssp.logical_port_index = VAR_1->owning_port->physical_port_index;


 VAR_6 = FUNC_1(FUNC_0(VAR_2->sas_addr));
 VAR_4->ssp.remote_sas_address_hi = FUNC_8(VAR_6);
 VAR_4->ssp.remote_sas_address_lo = FUNC_3(VAR_6);

 VAR_4->ssp.nexus_loss_timer_enable = 1;
 VAR_4->ssp.check_bit = 0;
 VAR_4->ssp.is_valid = 0;
 VAR_4->ssp.is_remote_node_context = 1;
 VAR_4->ssp.function_number = 0;

 VAR_4->ssp.arbitration_wait_time = 0;

 if (FUNC_2(VAR_2)) {
  VAR_4->ssp.connection_occupancy_timeout =
   VAR_5->user_parameters.stp_max_occupancy_timeout;
  VAR_4->ssp.connection_inactivity_timeout =
   VAR_5->user_parameters.stp_inactivity_timeout;
 } else {
  VAR_4->ssp.connection_occupancy_timeout =
   VAR_5->user_parameters.ssp_max_occupancy_timeout;
  VAR_4->ssp.connection_inactivity_timeout =
   VAR_5->user_parameters.ssp_inactivity_timeout;
 }

 VAR_4->ssp.initial_arbitration_wait_time = 0;


 VAR_4->ssp.oaf_connection_rate = VAR_1->connection_rate;
 VAR_4->ssp.oaf_features = 0;
 VAR_4->ssp.oaf_source_zone_group = 0;
 VAR_4->ssp.oaf_more_compatibility_features = 0;
}
