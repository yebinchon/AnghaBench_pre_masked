
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* vlan_parent_ref ;
struct ifnet {int dummy; } ;
typedef TYPE_2__* ifvlan_ref ;
struct TYPE_16__ {struct ifnet* ifv_ifp; } ;
struct TYPE_15__ {int vlp_vlan_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*,int ,int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_5 (struct ifnet*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,char*) ;
 int FUNC_12 (TYPE_1__*,char*) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 () ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_15(struct ifnet * VAR_4)
{
    ifvlan_ref VAR_5;
    int VAR_6 = 0;
    ifvlan_ref VAR_7;
    vlan_parent_ref VAR_8;

    FUNC_6();
    VAR_8 = FUNC_5(VAR_4);
    if (VAR_8 == ((void*)0) || FUNC_7(VAR_8)) {

 FUNC_14();
 return;
    }
    FUNC_8(VAR_8);
    FUNC_10(VAR_8);
    FUNC_12(VAR_8, "vlan_parent_remove_all_vlans");
    VAR_6++;


    if (FUNC_5(VAR_4) != VAR_8) {
 goto signal_done;
    }

    for (VAR_5 = FUNC_0(&VAR_8->vlp_vlan_list); VAR_5 != ((void*)0); VAR_5 = VAR_7) {
 struct ifnet * VAR_9 = VAR_5->ifv_ifp;
 int VAR_10;

 VAR_7 = FUNC_1(VAR_5, VAR_2);
 VAR_10 = FUNC_13(VAR_5, VAR_0);
 if (VAR_10) {
     FUNC_14();
     FUNC_3(VAR_9);
     FUNC_6();
 }
    }


    FUNC_4(VAR_4, 0, VAR_1);

    FUNC_2(VAR_8, VAR_3);
    VAR_6++;
    VAR_6++;

 signal_done:
    FUNC_11(VAR_8, "vlan_parent_remove_all_vlans");
    FUNC_14();

    while (VAR_6--) {
 FUNC_9(VAR_8);
    }
    return;
}
