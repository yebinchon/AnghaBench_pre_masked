
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;


 int FUNC_0 (struct ifnet*) ;
 char* FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (char*,char*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct ifnet * VAR_0)
{
    int VAR_1;

    VAR_1 = FUNC_0(VAR_0);
    if (VAR_1) {
 FUNC_3("bond_if_detach %s%d: ifnet_detach failed, %d\n",
        FUNC_1(VAR_0), FUNC_2(VAR_0), VAR_1);
    }

    return;
}
