
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
typedef int * ifvlan_ref ;


 int * FUNC_0 (struct ifnet*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ifvlan_ref
FUNC_3(struct ifnet * VAR_0)
{
    ifvlan_ref VAR_1;

    VAR_1 = FUNC_0(VAR_0);
    if (VAR_1 == ((void*)0)) {
 return (((void*)0));
    }
    if (FUNC_1(VAR_1)) {
 return (((void*)0));
    }
    FUNC_2(VAR_1);
    return (VAR_1);
}
