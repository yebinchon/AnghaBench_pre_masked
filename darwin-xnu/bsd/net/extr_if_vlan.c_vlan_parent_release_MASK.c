
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vlan_parent_ref ;
typedef int u_int32_t ;
struct ifnet {int dummy; } ;
struct TYPE_6__ {int verbose; } ;
struct TYPE_5__ {scalar_t__ vlp_signature; struct ifnet* vlp_ifp; int vlp_retain_count; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 char* FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int ) ;

__attribute__((used)) static void
FUNC_6(vlan_parent_ref VAR_3)
{
    u_int32_t VAR_4;

    if (VAR_3->vlp_signature != VAR_1) {
 FUNC_4("vlan_parent_release: signature is bad\n");
    }
    VAR_4 = FUNC_1(&VAR_3->vlp_retain_count);
    switch (VAR_4) {
    case 0:
 FUNC_4("vlan_parent_release: retain count is 0\n");
 break;
    case 1:
 if (VAR_2->verbose) {
     struct ifnet * VAR_5 = VAR_3->vlp_ifp;
     FUNC_5("vlan_parent_release(%s%d)\n", FUNC_2(VAR_5),
     FUNC_3(VAR_5));
 }
 VAR_3->vlp_signature = 0;
 FUNC_0(VAR_3, VAR_0);
 break;
    default:
 break;
    }
    return;
}
