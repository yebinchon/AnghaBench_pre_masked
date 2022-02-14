
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


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4(bondport_ref VAR_1)
{
    if (FUNC_1(VAR_1)) {
 bondport_ref * VAR_2;
 ifbond_ref VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_3 = VAR_1->po_bond;
 VAR_2 = VAR_3->ifb_distributing_array;
 VAR_4 = VAR_3->ifb_distributing_count;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
     if (VAR_2[VAR_5] == VAR_1) {
  int VAR_6;

  for (VAR_6 = VAR_5; VAR_6 < (VAR_4 - 1); VAR_6++) {
      VAR_2[VAR_6] = VAR_2[VAR_6 + 1];
  }
  break;
     }
 }
 VAR_3->ifb_distributing_count--;
 if (VAR_0->verbose) {
     FUNC_3("[%s] Distribution Disabled\n",
        FUNC_2(VAR_1));
 }
 FUNC_0(VAR_1);
    }
    return;
}
