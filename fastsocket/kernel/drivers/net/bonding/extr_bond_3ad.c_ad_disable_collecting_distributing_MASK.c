
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port {TYPE_1__* aggregator; int actor_port_number; } ;
struct TYPE_2__ {int aggregator_identifier; int partner_system; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (struct port*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct port *VAR_1)
{
 if (VAR_1->aggregator && FUNC_0(&(VAR_1->aggregator->partner_system), &(VAR_0))) {
  FUNC_2("Disabling port %d(LAG %d)\n", VAR_1->actor_port_number, VAR_1->aggregator->aggregator_identifier);
  FUNC_1(VAR_1);
 }
}
