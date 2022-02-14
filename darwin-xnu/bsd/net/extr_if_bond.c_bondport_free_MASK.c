
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* bondport_ref ;
struct TYPE_4__ {int po_transmit_timer; int po_wait_while_timer; int po_periodic_timer; int po_current_while_timer; int po_multicast; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(bondport_ref VAR_1)
{
    FUNC_2(&VAR_1->po_multicast);
    FUNC_1(VAR_1->po_current_while_timer);
    FUNC_1(VAR_1->po_periodic_timer);
    FUNC_1(VAR_1->po_wait_while_timer);
    FUNC_1(VAR_1->po_transmit_timer);
    FUNC_0(VAR_1, VAR_0);
    return;
}
