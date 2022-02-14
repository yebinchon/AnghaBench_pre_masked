
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct ifnet {int dummy; } ;
typedef TYPE_1__* ifbond_ref ;
struct TYPE_10__ {int ifb_mode; scalar_t__ ifb_distributing_count; int ifb_last_link_event; int * ifb_active_lag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_10 (struct ifnet*) ;
 int FUNC_11 (struct ifnet*,int) ;

__attribute__((used)) static int
FUNC_12(struct ifnet * VAR_5, int VAR_6)
{
    int VAR_7 = 0;
    int VAR_8 = 0;
    ifbond_ref VAR_9;

    FUNC_0();
    VAR_9 = (ifbond_ref)FUNC_10(VAR_5);
    if (VAR_9 == ((void*)0) || FUNC_4(VAR_9)) {
 FUNC_3();
 return ((VAR_9 == ((void*)0)) ? VAR_1 : VAR_0);
    }
    if (VAR_9->ifb_mode == VAR_6) {
 FUNC_3();
 return (0);
    }

    FUNC_6(VAR_9);
    FUNC_9(VAR_9, "bond_set_mode");


    if (VAR_9->ifb_mode == VAR_6) {

 goto signal_done;
    }

    VAR_9->ifb_mode = VAR_6;
    if (VAR_6 == VAR_2) {
 FUNC_1(VAR_9);


 if (FUNC_7(VAR_9)) {
     VAR_8 = (VAR_9->ifb_active_lag == ((void*)0))
  ? VAR_3
  : VAR_4;
 }
    } else {
 FUNC_2(VAR_9);
 VAR_8 = (VAR_9->ifb_distributing_count == 0)
     ? VAR_3
     : VAR_4;
    }
    VAR_9->ifb_last_link_event = VAR_8;

 signal_done:
    FUNC_8(VAR_9, "bond_set_mode");
    FUNC_3();
    FUNC_5(VAR_9);

    if (VAR_8 != 0) {
 FUNC_11(VAR_5, VAR_8);
    }
    return (VAR_7);
}
