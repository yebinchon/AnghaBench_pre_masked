
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* ifbond_ref ;
typedef TYPE_2__* bondport_ref ;
struct TYPE_10__ {scalar_t__ verbose; } ;
struct TYPE_9__ {TYPE_1__* po_bond; } ;
struct TYPE_8__ {int ifb_distributing_count; TYPE_2__** ifb_distributing_array; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4(bondport_ref VAR_1)
{
    if (FUNC_0(VAR_1) == 0) {
 ifbond_ref VAR_2 = VAR_1->po_bond;

 VAR_2->ifb_distributing_array[VAR_2->ifb_distributing_count++] = VAR_1;
 if (VAR_0->verbose) {
     FUNC_3("[%s] Distribution Enabled\n",
        FUNC_2(VAR_1));
 }
 FUNC_1(VAR_1);
    }
    return;
}
