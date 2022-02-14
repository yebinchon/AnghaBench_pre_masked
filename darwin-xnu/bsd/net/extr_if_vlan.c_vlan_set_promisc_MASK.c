
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vlan_parent_ref ;
struct ifnet {int dummy; } ;
typedef TYPE_2__* ifvlan_ref ;
struct TYPE_9__ {TYPE_1__* ifv_vlp; } ;
struct TYPE_8__ {int vlp_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*) ;
 TYPE_2__* FUNC_1 (struct ifnet*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(struct ifnet * VAR_2)
{
    int VAR_3 = 0;
    ifvlan_ref VAR_4;
    vlan_parent_ref VAR_5;

    FUNC_7();
    VAR_4 = FUNC_1(VAR_2);
    if (VAR_4 == ((void*)0)) {
 VAR_3 = VAR_0;
 goto done;
    }

    VAR_5 = VAR_4->ifv_vlp;
    if (VAR_5 == ((void*)0)) {
 goto done;
    }
    if ((FUNC_0(VAR_2) & VAR_1) != 0) {
 if (!FUNC_4(VAR_4)) {
     VAR_3 = FUNC_2(VAR_5->vlp_ifp, 1);
     if (VAR_3 == 0) {
  FUNC_5(VAR_4);
     }
 }
    } else {
 if (FUNC_4(VAR_4)) {
     VAR_3 = FUNC_2(VAR_5->vlp_ifp, 0);
     if (VAR_3 == 0) {
  FUNC_3(VAR_4);
     }
 }
    }
 done:
    FUNC_8();
    if (VAR_4 != ((void*)0)) {
 FUNC_6(VAR_4);
    }
    return (VAR_3);
}
