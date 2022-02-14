
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port {struct aggregator* aggregator; } ;
struct bonding {int dummy; } ;
struct TYPE_2__ {int mac_addr_value; } ;
struct aggregator {TYPE_1__ partner_system; int partner_oper_aggregator_key; int actor_oper_aggregator_key; int num_of_ports; int aggregator_identifier; scalar_t__ is_active; } ;
struct ad_info {int partner_system; int partner_key; int actor_key; int ports; int aggregator_id; } ;


 int VAR_0 ;
 struct port* FUNC_0 (struct bonding*) ;
 struct port* FUNC_1 (struct port*) ;
 int FUNC_2 (int ,int ,int ) ;

int FUNC_3(struct bonding *VAR_1, struct ad_info *VAR_2)
{
 struct aggregator *VAR_3 = ((void*)0);
 struct port *VAR_4;

 for (VAR_4 = FUNC_0(VAR_1); VAR_4; VAR_4 = FUNC_1(VAR_4)) {
  if (VAR_4->aggregator && VAR_4->aggregator->is_active) {
   VAR_3 = VAR_4->aggregator;
   break;
  }
 }

 if (VAR_3) {
  VAR_2->aggregator_id = VAR_3->aggregator_identifier;
  VAR_2->ports = VAR_3->num_of_ports;
  VAR_2->actor_key = VAR_3->actor_oper_aggregator_key;
  VAR_2->partner_key = VAR_3->partner_oper_aggregator_key;
  FUNC_2(VAR_2->partner_system, VAR_3->partner_system.mac_addr_value, VAR_0);
  return 0;
 }

 return -1;
}
