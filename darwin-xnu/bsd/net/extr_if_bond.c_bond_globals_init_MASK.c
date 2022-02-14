
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
typedef int lacp_system_ref ;
typedef int ifname ;
typedef int * bond_globals_ref ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ifnet*) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int * VAR_4 ;
 struct ifnet* FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_8(void)
{
    bond_globals_ref VAR_5;
    int VAR_6;
    struct ifnet * VAR_7;

    FUNC_2();

    if (VAR_4 != ((void*)0)) {
 return (0);
    }





    VAR_7 = ((void*)0);
    for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
 char VAR_8[VAR_2+1];
 FUNC_7(VAR_8, sizeof(VAR_8), "en%d", VAR_6);
 VAR_7 = FUNC_6(VAR_8);
 if (VAR_7 != ((void*)0)) {
     break;
 }
    }
    VAR_5 = ((void*)0);
    if (VAR_7 != ((void*)0)) {
 VAR_5 = FUNC_3(0x8000, (lacp_system_ref)FUNC_0(VAR_7));
    }
    FUNC_4();
    if (VAR_4 != ((void*)0)) {
 FUNC_5();
 FUNC_1(VAR_5, VAR_3);
 return (0);
    }
    VAR_4 = VAR_5;
    FUNC_5();
    if (VAR_7 == ((void*)0)) {
 return (VAR_1);
    }
    if (VAR_5 == ((void*)0)) {
 return (VAR_0);
    }
    return (0);
}
