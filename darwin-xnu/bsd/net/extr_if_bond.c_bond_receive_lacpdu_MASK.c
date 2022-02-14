
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mbuf {scalar_t__ m_data; } ;
struct ifnet {int dummy; } ;
typedef int lacpdu_ref ;
typedef TYPE_1__* ifbond_ref ;
typedef TYPE_2__* bondport_ref ;
struct TYPE_9__ {scalar_t__ verbose; } ;
struct TYPE_8__ {scalar_t__ po_enabled; TYPE_1__* po_bond; } ;
struct TYPE_7__ {scalar_t__ ifb_mode; int ifb_last_link_event; struct ifnet* ifb_ifp; int ifb_name; int * ifb_active_lag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (struct ifnet*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,int ) ;
 TYPE_4__* VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*,int) ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void
FUNC_9(struct mbuf * VAR_5, struct ifnet * VAR_6)
{
    struct ifnet * VAR_7 = ((void*)0);
    ifbond_ref VAR_8;
    int VAR_9 = 0;
    bondport_ref VAR_10;

    FUNC_0();
    if ((FUNC_5(VAR_6) & VAR_0) == 0) {
 goto done;
    }
    VAR_10 = FUNC_1(VAR_6);
    if (VAR_10 == ((void*)0)) {
 goto done;
    }
    if (VAR_10->po_enabled == 0) {
 goto done;
    }
    VAR_8 = VAR_10->po_bond;
    if (VAR_8->ifb_mode != VAR_1) {
 goto done;
    }
    FUNC_3(VAR_10, (lacpdu_ref)VAR_5->m_data);
    if (FUNC_4(VAR_8)) {
 VAR_9 = (VAR_8->ifb_active_lag == ((void*)0))
     ? VAR_2
     : VAR_3;

 VAR_7 = VAR_8->ifb_ifp;
 VAR_8->ifb_last_link_event = VAR_9;
    }
    else {
 VAR_9 = (VAR_8->ifb_active_lag == ((void*)0))
     ? VAR_2
     : VAR_3;
 if (VAR_9 != VAR_8->ifb_last_link_event) {
     if (VAR_4->verbose) {
  FUNC_8("%s: (receive) generating LINK event\n",
     VAR_8->ifb_name);
     }
     VAR_7 = VAR_8->ifb_ifp;
     VAR_8->ifb_last_link_event = VAR_9;
 }
    }

 done:
    FUNC_2();
    if (VAR_7 != ((void*)0)) {
 FUNC_6(VAR_7, VAR_9);
    }
    FUNC_7(VAR_5);
    return;
}
