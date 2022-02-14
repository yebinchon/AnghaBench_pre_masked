
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vlan_parent_ref ;
typedef TYPE_2__* ifvlan_ref ;
struct TYPE_7__ {int ifv_tag; TYPE_1__* ifv_vlp; } ;
struct TYPE_6__ {int vlp_vlan_list; } ;


 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(vlan_parent_ref VAR_1, ifvlan_ref VAR_2, int VAR_3)
{
    FUNC_0(&VAR_1->vlp_vlan_list, VAR_2, VAR_0);
    VAR_2->ifv_vlp = VAR_1;
    VAR_2->ifv_tag = VAR_3;
    return;
}
