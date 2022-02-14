
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int * vlan_parent_ref ;
struct ifnet {int dummy; } ;
typedef TYPE_1__* ifvlan_ref ;
struct TYPE_8__ {int * ifv_vlp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct ifnet*) ;
 TYPE_1__* FUNC_1 (struct ifnet*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 () ;

__attribute__((used)) static int
FUNC_12(struct ifnet * VAR_3, int VAR_4)
{
    int VAR_5 = 0;
    ifvlan_ref VAR_6;
    vlan_parent_ref VAR_7;

    if (VAR_4 < VAR_2) {
 return (VAR_1);
    }
    FUNC_6();
    VAR_6 = FUNC_1(VAR_3);
    if (VAR_6 == ((void*)0)) {
 FUNC_11();
 return (VAR_0);
    }
    VAR_7 = FUNC_3(VAR_6);
    if (VAR_7 == ((void*)0)) {
 FUNC_11();
 FUNC_5(VAR_6);
 if (VAR_4 != 0) {
     return (VAR_1);
 }
 return (0);
    }
    FUNC_10(VAR_7, "vlan_set_mtu");


    if (FUNC_0(VAR_3) != VAR_6
 || FUNC_2(VAR_6)) {
 VAR_5 = VAR_0;
 goto signal_done;
    }
    if (VAR_6->ifv_vlp != VAR_7) {

 goto signal_done;
    }
    if (FUNC_7(VAR_7)) {
 if (VAR_4 != 0) {
     VAR_5 = VAR_1;
 }
 goto signal_done;
    }
    VAR_5 = FUNC_4(VAR_6, VAR_4);

 signal_done:
    FUNC_9(VAR_7, "vlan_set_mtu");
    FUNC_11();
    FUNC_8(VAR_7);
    FUNC_5(VAR_6);

    return (VAR_5);
}
