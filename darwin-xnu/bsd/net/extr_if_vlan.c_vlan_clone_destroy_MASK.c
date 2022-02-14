
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
typedef int * ifvlan_ref ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 int * FUNC_1 (struct ifnet*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(struct ifnet *VAR_1)
{
    ifvlan_ref VAR_2;

    FUNC_3();
    VAR_2 = FUNC_1(VAR_1);
    if (VAR_2 == ((void*)0)) {
 FUNC_5();
 return 0;
    }
    if (FUNC_4(VAR_2, VAR_0) == 0) {
 FUNC_5();
 FUNC_2(VAR_2);
 return 0;
    }
    FUNC_5();
    FUNC_2(VAR_2);
    FUNC_0(VAR_1);

    return 0;
}
