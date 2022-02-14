
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * vlan_parent_ref ;
typedef TYPE_1__* ifvlan_ref ;
struct TYPE_3__ {int * ifv_vlp; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static vlan_parent_ref
FUNC_2(ifvlan_ref VAR_0)
{
    vlan_parent_ref VAR_1 = VAR_0->ifv_vlp;

    if (VAR_1 == ((void*)0) || FUNC_0(VAR_1)) {
 return (((void*)0));
    }
    FUNC_1(VAR_1);
    return (VAR_1);
}
