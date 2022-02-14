
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* ifbond_ref ;
typedef TYPE_2__* bondport_ref ;
struct TYPE_11__ {scalar_t__ verbose; } ;
struct TYPE_10__ {int lag_selected_port_count; } ;
struct TYPE_9__ {scalar_t__ po_selected; TYPE_3__* po_lag; TYPE_1__* po_bond; } ;
struct TYPE_8__ {TYPE_3__* ifb_active_lag; } ;
typedef scalar_t__ SelectedState ;
typedef TYPE_3__* LAG_ref ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_4__* VAR_1 ;
 int FUNC_3 (char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(bondport_ref VAR_2, SelectedState VAR_3)
{
    if (VAR_3 != VAR_2->po_selected) {
 ifbond_ref VAR_4 = VAR_2->po_bond;
 LAG_ref VAR_5 = VAR_2->po_lag;

 FUNC_1(VAR_2);
 if (VAR_5 != ((void*)0) && VAR_4->ifb_active_lag == VAR_5) {
     if (VAR_2->po_selected == VAR_0) {
  VAR_5->lag_selected_port_count--;
     }
     else if (VAR_3 == VAR_0) {
  VAR_5->lag_selected_port_count++;
     }
     if (VAR_1->verbose) {
  FUNC_3("[%s] SetSelected: %s (was %s)\n",
     FUNC_2(VAR_2),
     FUNC_0(VAR_3),
     FUNC_0(VAR_2->po_selected));
     }
 }
    }
    VAR_2->po_selected = VAR_3;
    return;
}
