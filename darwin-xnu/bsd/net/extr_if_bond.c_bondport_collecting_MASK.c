
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* bondport_ref ;
struct TYPE_5__ {int po_actor_state; TYPE_1__* po_bond; } ;
struct TYPE_4__ {scalar_t__ ifb_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static __inline__ int
FUNC_1(bondport_ref VAR_2)
{
    if (VAR_2->po_bond->ifb_mode == VAR_0) {
 return (FUNC_0(VAR_2->po_actor_state));
    }
    return (VAR_1);
}
