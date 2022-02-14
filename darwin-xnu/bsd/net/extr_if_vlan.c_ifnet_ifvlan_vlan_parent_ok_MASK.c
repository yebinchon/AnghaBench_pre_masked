
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlan_parent_ref ;
struct ifnet {int dummy; } ;
typedef TYPE_1__* ifvlan_ref ;
struct TYPE_5__ {scalar_t__ ifv_vlp; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct ifnet*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct ifnet * VAR_2, ifvlan_ref VAR_3,
       vlan_parent_ref VAR_4)
{
    ifvlan_ref VAR_5;

    VAR_5 = FUNC_0(VAR_2);
    if (VAR_5 != VAR_3 || FUNC_1(VAR_3)) {

 return (VAR_0);
    }
    if (VAR_3->ifv_vlp != VAR_4) {

 return (VAR_0);
    }
    if (FUNC_2(VAR_4)) {

 return (VAR_0);
    }
    return (VAR_1);
}
