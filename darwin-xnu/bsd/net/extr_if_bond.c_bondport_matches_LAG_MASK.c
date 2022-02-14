
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* partner_state_ref ;
typedef TYPE_2__* bondport_ref ;
struct TYPE_10__ {scalar_t__ li_system_priority; scalar_t__ li_key; int li_system; } ;
struct TYPE_9__ {TYPE_4__ lag_info; } ;
struct TYPE_7__ {TYPE_4__ ps_lag_info; } ;
struct TYPE_8__ {TYPE_1__ po_partner_state; } ;
typedef TYPE_3__* LAG_ref ;
typedef TYPE_4__* LAG_info_ref ;


 scalar_t__ FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_1(bondport_ref VAR_0, LAG_ref VAR_1)
{
    LAG_info_ref VAR_2;
    partner_state_ref VAR_3;
    LAG_info_ref VAR_4;

    VAR_3 = &VAR_0->po_partner_state;
    VAR_4 = &VAR_3->ps_lag_info;
    VAR_2 = &VAR_1->lag_info;
    if (VAR_4->li_system_priority == VAR_2->li_system_priority
 && VAR_4->li_key == VAR_2->li_key
 && (FUNC_0(&VAR_4->li_system, &VAR_2->li_system,
   sizeof(VAR_2->li_system))
     == 0)) {
 return (1);
    }
    return (0);
}
