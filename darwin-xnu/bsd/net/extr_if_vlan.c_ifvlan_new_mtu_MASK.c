
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vlan_parent_ref ;
struct ifnet {int dummy; } ;
struct ifdevmtu {int ifdm_max; int ifdm_min; int ifdm_current; } ;
typedef TYPE_2__* ifvlan_ref ;
struct TYPE_7__ {int ifv_mtufudge; TYPE_1__* ifv_vlp; struct ifnet* ifv_ifp; } ;
struct TYPE_6__ {struct ifnet* vlp_ifp; struct ifdevmtu vlp_devmtu; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*,int) ;
 int FUNC_1 (struct ifnet*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(ifvlan_ref VAR_1, int VAR_2)
{
    struct ifdevmtu * VAR_3;
    int VAR_4 = 0;
    struct ifnet * VAR_5 = VAR_1->ifv_ifp;
    int VAR_6;
    int VAR_7 = 0;
    int VAR_8;
    vlan_parent_ref VAR_9;

    FUNC_2();
    VAR_9 = VAR_1->ifv_vlp;
    VAR_3 = &VAR_9->vlp_devmtu;
    VAR_8 = VAR_2 + VAR_1->ifv_mtufudge;
    if (VAR_8 > VAR_3->ifdm_max || VAR_8 < VAR_3->ifdm_min) {
 return (VAR_0);
    }
    VAR_6 = FUNC_4(VAR_9, VAR_1);
    if (VAR_8 > VAR_6) {
 VAR_7 = VAR_8;
    }
    else if (VAR_6 < VAR_3->ifdm_current) {
 VAR_7 = VAR_6;
    }
    if (VAR_7 != 0) {
 struct ifnet * VAR_10 = VAR_9->vlp_ifp;
 FUNC_5();
 VAR_4 = FUNC_1(VAR_10, VAR_7);
 FUNC_3();
    }
    if (VAR_4 == 0) {
 if (VAR_7 != 0) {
     VAR_3->ifdm_current = VAR_7;
 }
 FUNC_0(VAR_5, VAR_2);
    }
    return (VAR_4);
}
