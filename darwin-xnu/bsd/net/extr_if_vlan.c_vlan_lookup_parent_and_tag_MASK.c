
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vlan_parent_ref ;
struct ifnet {int dummy; } ;
typedef int * ifvlan_ref ;


 int * FUNC_0 (struct ifnet*) ;
 int * FUNC_1 (int *,int) ;

__attribute__((used)) static ifvlan_ref
FUNC_2(struct ifnet * VAR_0, int VAR_1)
{
    vlan_parent_ref VAR_2;

    VAR_2 = FUNC_0(VAR_0);
    if (VAR_2 != ((void*)0)) {
 return (FUNC_1(VAR_2, VAR_1));
    }
    return (((void*)0));
}
