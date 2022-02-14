
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port {TYPE_1__* aggregator; int actor_port_number; } ;
struct TYPE_2__ {int aggregator_identifier; scalar_t__ is_active; } ;


 int FUNC_0 (struct port*) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct port *VAR_0)
{
 if (VAR_0->aggregator->is_active) {
  FUNC_1("Enabling port %d(LAG %d)\n", VAR_0->actor_port_number, VAR_0->aggregator->aggregator_identifier);
  FUNC_0(VAR_0);
 }
}
