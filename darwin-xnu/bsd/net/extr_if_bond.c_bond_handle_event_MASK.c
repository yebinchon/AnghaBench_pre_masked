
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct media_info {int member_1; int member_0; } ;
struct ifnet {int dummy; } ;
typedef TYPE_1__* ifbond_ref ;
typedef TYPE_2__* bondport_ref ;
struct TYPE_10__ {scalar_t__ verbose; } ;
struct TYPE_9__ {int po_enabled; struct media_info po_media_info; int po_ifp; TYPE_1__* po_bond; } ;
struct TYPE_8__ {int ifb_distributing_count; scalar_t__ ifb_mode; int ifb_last_link_event; struct ifnet* ifb_ifp; int ifb_name; int * ifb_active_lag; } ;


 scalar_t__ VAR_0 ;



 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (struct ifnet*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_4__* VAR_1 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct ifnet*,int) ;
 struct media_info FUNC_7 (struct ifnet*) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void
FUNC_9(struct ifnet * VAR_2, int VAR_3)
{
    struct ifnet * VAR_4 = ((void*)0);
    ifbond_ref VAR_5;
    int VAR_6;
    bondport_ref VAR_7;
    struct media_info VAR_8 = { 0, 0};

    switch (VAR_3) {
    case 130:
 break;
    case 129:
    case 128:
 VAR_8 = FUNC_7(VAR_2);
 break;
    default:
 return;
    }
    FUNC_0();
    VAR_7 = FUNC_1(VAR_2);
    if (VAR_7 == ((void*)0)) {
 FUNC_3();
 return;
    }
    VAR_5 = VAR_7->po_bond;
    VAR_6 = VAR_5->ifb_distributing_count;
    switch (VAR_3) {
    case 130:
 FUNC_2(VAR_5, VAR_7->po_ifp);
 break;
    case 129:
    case 128:
 VAR_7->po_media_info = VAR_8;
 if (VAR_7->po_enabled) {
     FUNC_4(VAR_7);
 }
 break;
    }

    if (VAR_5->ifb_mode == VAR_0) {
 if (FUNC_5(VAR_5)) {
     VAR_3 = (VAR_5->ifb_active_lag == ((void*)0))
  ? 129
  : 128;

     VAR_4 = VAR_5->ifb_ifp;
     VAR_5->ifb_last_link_event = VAR_3;
 }
 else {
     VAR_3 = (VAR_5->ifb_active_lag == ((void*)0))
  ? 129
  : 128;
     if (VAR_3 != VAR_5->ifb_last_link_event) {
  if (VAR_1->verbose) {
      FUNC_8("%s: (event) generating LINK event\n",
         VAR_5->ifb_name);
  }
  VAR_4 = VAR_5->ifb_ifp;
  VAR_5->ifb_last_link_event = VAR_3;
     }
 }
    }
    else {




 if (VAR_6 == 0
     && VAR_5->ifb_distributing_count != 0) {
     VAR_3 = 128;
 }
 else if (VAR_6 != 0
   && VAR_5->ifb_distributing_count == 0) {
     VAR_3 = 129;
 }
 if (VAR_3 != 0 && VAR_3 != VAR_5->ifb_last_link_event) {
     VAR_4 = VAR_5->ifb_ifp;
     VAR_5->ifb_last_link_event = VAR_3;
 }
    }

    FUNC_3();
    if (VAR_4 != ((void*)0)) {
 FUNC_6(VAR_4, VAR_3);
    }
    return;
}
