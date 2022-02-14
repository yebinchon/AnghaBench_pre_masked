
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vlan_parent_ref ;
struct ifnet {int dummy; } ;
struct TYPE_8__ {scalar_t__ verbose; } ;
struct TYPE_7__ {struct ifnet* vlp_ifp; } ;


 int VAR_0 ;
 TYPE_6__* VAR_1 ;
 char* FUNC_0 (struct ifnet*) ;
 char* FUNC_1 (struct ifnet*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,char const*,int ) ;
 int FUNC_3 (char*,char*,char*,char const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(vlan_parent_ref VAR_3, const char * VAR_4)
{
    int VAR_5 = 0;


    while (FUNC_4(VAR_3)) {
 if (VAR_1->verbose) {
     struct ifnet * VAR_6 = VAR_3->vlp_ifp;

     FUNC_3("%s%d: %s msleep\n", FUNC_0(VAR_6), FUNC_1(VAR_6), VAR_4);
 }
 VAR_5 = 1;
 (void)FUNC_2(VAR_3, VAR_2, VAR_0, VAR_4, 0);
    }

    FUNC_5(VAR_3);
    if (VAR_1->verbose && VAR_5) {
 struct ifnet * VAR_7 = VAR_3->vlp_ifp;

 FUNC_3("%s%d: %s woke up\n", FUNC_0(VAR_7), FUNC_1(VAR_7), VAR_4);
    }
    return;
}
