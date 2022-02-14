
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vlan_parent_ref ;
typedef int u_int32_t ;
struct ifnet {int dummy; } ;
struct TYPE_9__ {int vlp_event_code; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 TYPE_1__* FUNC_1 (struct ifnet*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 () ;

__attribute__((used)) static void
FUNC_10(struct ifnet * VAR_1, u_int32_t VAR_2)
{
    vlan_parent_ref VAR_3;

    FUNC_2();
    if ((FUNC_0(VAR_1) & VAR_0) == 0) {
 FUNC_9();

 return;
    }
    VAR_3 = FUNC_1(VAR_1);
    if (VAR_3 == ((void*)0)) {

 FUNC_9();
 return;
    }
    FUNC_4(VAR_3);
    VAR_3->vlp_event_code = VAR_2;
    if (FUNC_3(VAR_3)) {

 FUNC_9();
 return;
    }
    FUNC_6(VAR_3);
    FUNC_8(VAR_3, "vlan_parent_link_event");
    FUNC_7(VAR_3, "vlan_parent_link_event");
    FUNC_9();
    FUNC_5(VAR_3);
    return;

}
