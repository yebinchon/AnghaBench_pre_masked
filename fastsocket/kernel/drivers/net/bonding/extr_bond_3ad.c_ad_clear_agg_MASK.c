
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aggregator {int is_individual; int aggregator_identifier; scalar_t__ num_of_ports; scalar_t__ is_active; int * lag_ports; scalar_t__ transmit_state; scalar_t__ receive_state; scalar_t__ partner_oper_aggregator_key; scalar_t__ partner_system_priority; int partner_system; scalar_t__ actor_oper_aggregator_key; scalar_t__ actor_admin_aggregator_key; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(struct aggregator *VAR_1)
{
 if (VAR_1) {
  VAR_1->is_individual = 0;
  VAR_1->actor_admin_aggregator_key = 0;
  VAR_1->actor_oper_aggregator_key = 0;
  VAR_1->partner_system = VAR_0;
  VAR_1->partner_system_priority = 0;
  VAR_1->partner_oper_aggregator_key = 0;
  VAR_1->receive_state = 0;
  VAR_1->transmit_state = 0;
  VAR_1->lag_ports = ((void*)0);
  VAR_1->is_active = 0;
  VAR_1->num_of_ports = 0;
  FUNC_0("LAG %d was cleared\n", VAR_1->aggregator_identifier);
 }
}
