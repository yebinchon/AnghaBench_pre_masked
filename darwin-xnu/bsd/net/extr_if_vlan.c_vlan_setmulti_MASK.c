
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* vlan_parent_ref ;
struct ifnet {int dummy; } ;
typedef TYPE_2__* ifvlan_ref ;
struct TYPE_13__ {int ifv_multicast; } ;
struct TYPE_12__ {struct ifnet* vlp_ifp; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (struct ifnet*) ;
 scalar_t__ FUNC_1 (struct ifnet*,TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,struct ifnet*,struct ifnet*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(struct ifnet * VAR_1)
{
    int VAR_2 = 0;
    ifvlan_ref VAR_3;
    struct ifnet * VAR_4;
    vlan_parent_ref VAR_5 = ((void*)0);

    FUNC_5();
    VAR_3 = FUNC_0(VAR_1);
    if (VAR_3 == ((void*)0)) {
 goto unlock_done;
    }
    VAR_5 = FUNC_2(VAR_3);
    if (VAR_5 == ((void*)0)) {

 goto unlock_done;
    }
    FUNC_8(VAR_5, "vlan_setmulti");


    if (FUNC_1(VAR_1, VAR_3, VAR_5) == VAR_0) {
 goto signal_done;
    }
    VAR_4 = VAR_5->vlp_ifp;
    FUNC_9();


    VAR_2 = FUNC_4(&VAR_3->ifv_multicast, VAR_1, VAR_4);

    FUNC_5();

 signal_done:
    FUNC_7(VAR_5, "vlan_setmulti");

 unlock_done:
    FUNC_9();
    if (VAR_3 != ((void*)0)) {
 FUNC_3(VAR_3);
    }
    if (VAR_5 != ((void*)0)) {
 FUNC_6(VAR_5);
    }
    return (VAR_2);
}
