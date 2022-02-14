
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int32_t ;
struct ifnet {int dummy; } ;
typedef int lacp_port_priority ;
typedef scalar_t__ lacp_actor_partner_state ;
typedef TYPE_1__* bondport_ref ;
struct TYPE_9__ {int ifdm_current; } ;
struct TYPE_8__ {scalar_t__ po_actor_state; int po_priority; int po_mux_state; int po_receive_state; int * po_transmit_timer; int * po_wait_while_timer; int * po_periodic_timer; int * po_current_while_timer; int po_media_info; struct ifnet* po_ifp; TYPE_2__ po_devmtu; int po_name; int po_multicast; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 (int,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (TYPE_1__*) ;
 int VAR_7 ;
 void* FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (struct ifnet*) ;
 char* FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (struct ifnet*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (struct ifnet*,TYPE_2__*) ;
 scalar_t__ FUNC_14 (int ,int,char*,char*,int ) ;

__attribute__((used)) static bondport_ref
FUNC_15(struct ifnet * VAR_8, lacp_port_priority VAR_9,
  int VAR_10, int VAR_11, int * VAR_12)
{
    int VAR_13 = 0;
    bondport_ref VAR_14 = ((void*)0);
    lacp_actor_partner_state VAR_15;

    *VAR_12 = 0;
    VAR_14 = FUNC_0(sizeof(*VAR_14), VAR_2, VAR_3 | VAR_4);
    if (VAR_14 == ((void*)0)) {
 *VAR_12 = VAR_1;
 return (((void*)0));
    }
    FUNC_11(&VAR_14->po_multicast);
    if ((u_int32_t)FUNC_14(VAR_14->po_name, sizeof(VAR_14->po_name), "%s%d",
    FUNC_5(VAR_8), FUNC_6(VAR_8))
 >= sizeof(VAR_14->po_name)) {
 FUNC_12("if_bond: name too large\n");
 *VAR_12 = VAR_0;
 goto failed;
    }
    VAR_13 = FUNC_13(VAR_8, &VAR_14->po_devmtu);
    if (VAR_13 != 0) {
 FUNC_12("if_bond: SIOCGIFDEVMTU %s failed, %d\n",
        FUNC_2(VAR_14), VAR_13);
 goto failed;
    }

    VAR_14->po_devmtu.ifdm_current = FUNC_4(VAR_8);
    VAR_14->po_ifp = VAR_8;
    VAR_14->po_media_info = FUNC_7(VAR_8);
    VAR_14->po_current_while_timer = FUNC_3(VAR_7, VAR_14);
    if (VAR_14->po_current_while_timer == ((void*)0)) {
 *VAR_12 = VAR_1;
 goto failed;
    }
    VAR_14->po_periodic_timer = FUNC_3(VAR_7, VAR_14);
    if (VAR_14->po_periodic_timer == ((void*)0)) {
 *VAR_12 = VAR_1;
 goto failed;
    }
    VAR_14->po_wait_while_timer = FUNC_3(VAR_7, VAR_14);
    if (VAR_14->po_wait_while_timer == ((void*)0)) {
 *VAR_12 = VAR_1;
 goto failed;
    }
    VAR_14->po_transmit_timer = FUNC_3(VAR_7, VAR_14);
    if (VAR_14->po_transmit_timer == ((void*)0)) {
 *VAR_12 = VAR_1;
 goto failed;
    }
    VAR_14->po_receive_state = VAR_6;
    VAR_14->po_mux_state = VAR_5;
    VAR_14->po_priority = VAR_9;
    VAR_15 = 0;
    VAR_15 = FUNC_9(VAR_15);
    if (VAR_11) {
 VAR_15 = FUNC_10(VAR_15);
    }
    if (VAR_10) {
 VAR_15 = FUNC_8(VAR_15);
    }
    VAR_14->po_actor_state = VAR_15;
    return (VAR_14);

 failed:
    FUNC_1(VAR_14);
    return (((void*)0));
}
