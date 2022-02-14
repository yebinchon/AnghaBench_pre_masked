
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* bondport_ref ;
struct TYPE_4__ {int po_actor_state; int po_partner_state; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(bondport_ref VAR_0)
{
    FUNC_1(&VAR_0->po_partner_state, sizeof(VAR_0->po_partner_state));
    VAR_0->po_actor_state
 = FUNC_2(VAR_0->po_actor_state);
    FUNC_0(VAR_0);
    return;
}
