
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vlan_parent_ref ;
struct ifnet {int dummy; } ;
struct TYPE_6__ {int vlp_retain_count; int vlp_signature; struct ifnet* vlp_ifp; int vlp_vlan_list; int vlp_devmtu; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_2 (int,int ,int) ;
 char* FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (char*,char*,int,int) ;
 int FUNC_7 (struct ifnet*,int *) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_9(struct ifnet * VAR_7, vlan_parent_ref * VAR_8)
{
    int VAR_9;
    vlan_parent_ref VAR_10;

    *VAR_8 = ((void*)0);
    VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_3, VAR_4 | VAR_5);
    if (VAR_10 == ((void*)0)) {
 return (VAR_0);
    }
    VAR_9 = FUNC_7(VAR_7, &VAR_10->vlp_devmtu);
    if (VAR_9 != 0) {
 FUNC_6("vlan_parent_create (%s%d): siocgifdevmtu failed, %d\n",
        FUNC_3(VAR_7), FUNC_5(VAR_7), VAR_9);
 FUNC_0(VAR_10, VAR_3);
 return (VAR_9);
    }
    FUNC_1(&VAR_10->vlp_vlan_list);
    VAR_10->vlp_ifp = VAR_7;
    VAR_10->vlp_retain_count = 1;
    VAR_10->vlp_signature = VAR_6;
    if (FUNC_4(VAR_7)
 & (VAR_1 | VAR_2)) {
 FUNC_8(VAR_10);
    }
    *VAR_8 = VAR_10;
    return (0);
}
