
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ifnet {int dummy; } ;
typedef int devtimer_ref ;
typedef int devtimer_process_func_event ;
typedef TYPE_1__* bondport_ref ;
struct TYPE_6__ {int verbose; } ;
struct TYPE_5__ {int ifb_last_link_event; struct ifnet* ifb_ifp; int ifb_name; int * ifb_active_lag; } ;
struct TYPE_4__ {TYPE_2__* po_bond; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;


 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_3__* VAR_2 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct ifnet*,int) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void
FUNC_9(devtimer_ref VAR_3,
       devtimer_process_func_event VAR_4)
{
    bondport_ref VAR_5;

    switch (VAR_4) {
    case 129:
 FUNC_0();
 FUNC_4(VAR_3);
 break;
    case 128:
 if (FUNC_5(VAR_3)) {

     int VAR_6 = 0;
     struct ifnet * VAR_7 = ((void*)0);

     VAR_5 = (bondport_ref)FUNC_2(VAR_3);
     if (FUNC_6(VAR_5->po_bond)) {
  VAR_6 = (VAR_5->po_bond->ifb_active_lag == ((void*)0))
      ? VAR_0
      : VAR_1;

  VAR_7 = VAR_5->po_bond->ifb_ifp;
  VAR_5->po_bond->ifb_last_link_event = VAR_6;
     }
     else {
  VAR_6 = (VAR_5->po_bond->ifb_active_lag == ((void*)0))
      ? VAR_0
      : VAR_1;
  if (VAR_6 != VAR_5->po_bond->ifb_last_link_event) {
      if (VAR_2->verbose) {
   FUNC_8("%s: (timer) generating LINK event\n",
      VAR_5->po_bond->ifb_name);
      }
      VAR_7 = VAR_5->po_bond->ifb_ifp;
      VAR_5->po_bond->ifb_last_link_event = VAR_6;
  }
     }
     FUNC_3(VAR_3);
     FUNC_1();
     if (VAR_7 != ((void*)0)) {
  FUNC_7(VAR_7, VAR_6);
     }
 }
 else {

     FUNC_3(VAR_3);
     FUNC_1();
 }
 break;
    default:
 break;
    }
}
