
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
typedef int * ifbond_ref ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (struct ifnet*) ;
 scalar_t__ FUNC_6 (struct ifnet*) ;

__attribute__((used)) static int
FUNC_7(struct ifnet * VAR_1)
{
    ifbond_ref VAR_2;

    FUNC_1();
    VAR_2 = FUNC_5(VAR_1);
    if (VAR_2 == ((void*)0) || FUNC_6(VAR_1) != VAR_0) {
 FUNC_3();
 return 0;
    }
    if (FUNC_4(VAR_2)) {
 FUNC_3();
 return 0;
    }
    FUNC_2(VAR_2);
    FUNC_3();
    FUNC_0(VAR_1);
    return 0;
}
