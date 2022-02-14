
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
typedef TYPE_1__* ifvlan_ref ;
struct TYPE_6__ {int verbose; } ;
struct TYPE_5__ {scalar_t__ ifv_signature; char* ifv_name; int ifv_retain_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_4__* VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(ifvlan_ref VAR_3)
{
    u_int32_t VAR_4;

    if (VAR_3->ifv_signature != VAR_0) {
 FUNC_2("ifvlan_release: bad signature\n");
    }
    VAR_4 = FUNC_0(&VAR_3->ifv_retain_count);
    switch (VAR_4) {
    case 0:
 FUNC_2("ifvlan_release: retain count is 0\n");
 break;
    case 1:
 if (VAR_1->verbose) {
     FUNC_3("ifvlan_release(%s)\n", VAR_3->ifv_name);
 }
 VAR_3->ifv_signature = 0;
 FUNC_1(&VAR_2, VAR_3);
 break;
    default:
 break;
    }
    return;
}
