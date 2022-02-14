
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* bondport_ref ;
struct TYPE_3__ {int po_transmit_timer; int po_wait_while_timer; int po_periodic_timer; int po_current_while_timer; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(bondport_ref VAR_0)
{
    FUNC_0(VAR_0->po_current_while_timer);
    FUNC_0(VAR_0->po_periodic_timer);
    FUNC_0(VAR_0->po_wait_while_timer);
    FUNC_0(VAR_0->po_transmit_timer);
}
