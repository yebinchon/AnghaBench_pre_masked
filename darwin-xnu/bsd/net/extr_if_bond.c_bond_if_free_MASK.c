
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
typedef int * ifbond_ref ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ifnet*) ;
 scalar_t__ FUNC_4 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_5(struct ifnet * VAR_0)
{
    ifbond_ref VAR_1;

    if (VAR_0 == ((void*)0)) {
 return;
    }
    FUNC_0();
    VAR_1 = (ifbond_ref)FUNC_4(VAR_0);
    if (VAR_1 == ((void*)0)) {
 FUNC_1();
 return;
    }
    FUNC_2(VAR_1);
    FUNC_1();
    FUNC_3(VAR_0);
    return;
}
