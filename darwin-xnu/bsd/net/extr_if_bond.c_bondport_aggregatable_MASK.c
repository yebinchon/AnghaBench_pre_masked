
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* partner_state_ref ;
typedef TYPE_2__* bondport_ref ;
struct TYPE_8__ {int verbose; } ;
struct TYPE_6__ {int ps_state; } ;
struct TYPE_7__ {int po_receive_state; int * po_lag; int po_actor_state; TYPE_1__ po_partner_state; } ;




 int FUNC_0 (TYPE_2__*) ;
 TYPE_3__* VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3(bondport_ref VAR_1)
{
    partner_state_ref VAR_2 = &VAR_1->po_partner_state;

    if (FUNC_1(VAR_1->po_actor_state) == 0
 || FUNC_1(VAR_2->ps_state) == 0) {

 return (0);
    }
    if (VAR_1->po_lag == ((void*)0)) {
 return (0);
    }
    switch (VAR_1->po_receive_state) {
    default:
 if (VAR_0->verbose) {
     FUNC_2("[%s] Port is not selectable\n",
        FUNC_0(VAR_1));
 }
 return (0);
    case 129:
    case 128:
 break;
    }
    return (1);
}
