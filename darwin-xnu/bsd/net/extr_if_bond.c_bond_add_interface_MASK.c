
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct ifnet {int if_eflags; } ;
struct ether_addr {int dummy; } ;
typedef int ifnet_offload_t ;
typedef TYPE_2__* ifbond_ref ;
typedef TYPE_3__* bondport_ref ;
struct TYPE_23__ {int ifdm_max; int ifdm_min; int ifdm_current; } ;
struct TYPE_25__ {int po_enabled; TYPE_1__ po_devmtu; struct ether_addr const po_saved_addr; int po_media_info; int po_multicast; TYPE_2__* po_bond; } ;
struct TYPE_24__ {char* ifb_name; int ifb_port_count; int ifb_distributing_count; scalar_t__ ifb_mode; int ifb_last_link_event; scalar_t__ ifb_altmtu; int ifb_port_list; int * ifb_active_lag; TYPE_3__** ifb_distributing_array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_3__**,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (struct ifnet*) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int * FUNC_2 (struct ifnet*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_3__*,int ) ;
 int FUNC_5 (int *,TYPE_3__*,int ) ;
 int VAR_23 ;
 scalar_t__ FUNC_6 (int,int ,int ) ;
 int FUNC_7 (TYPE_3__**,TYPE_3__**,int) ;
 int FUNC_8 () ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (struct ifnet*,TYPE_2__*) ;
 int FUNC_12 () ;
 int * FUNC_13 (struct ifnet*) ;
 int FUNC_14 () ;
 TYPE_3__* FUNC_15 (struct ifnet*,int,int,int ,int*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*) ;
 char* FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (struct ether_addr const*,int *) ;
 int FUNC_22 (struct ifnet*,struct ether_addr const*) ;
 scalar_t__ FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (TYPE_2__*) ;
 int FUNC_26 (TYPE_2__*) ;
 scalar_t__ FUNC_27 (TYPE_2__*) ;
 int FUNC_28 (TYPE_2__*,char*) ;
 int FUNC_29 (TYPE_2__*,char*) ;
 int FUNC_30 (struct ifnet*) ;
 int FUNC_31 (struct ifnet*,int ,int ,int *) ;
 int FUNC_32 (struct ifnet*) ;
 int FUNC_33 (struct ifnet*) ;
 scalar_t__ FUNC_34 (struct ifnet*) ;
 int FUNC_35 (struct ifnet*) ;
 int FUNC_36 (struct ifnet*,int ,int) ;
 int FUNC_37 (struct ifnet*,int ,int ) ;
 int FUNC_38 (struct ifnet*,int *,int ,int ) ;
 int FUNC_39 (struct ifnet*,int ) ;
 int FUNC_40 (struct ifnet*,int) ;
 scalar_t__ FUNC_41 (struct ifnet*) ;
 int FUNC_42 (struct ifnet*,int) ;
 scalar_t__ FUNC_43 (int *) ;
 int FUNC_44 (int *,struct ifnet*,struct ifnet*) ;
 int VAR_24 ;
 int FUNC_45 (char*,char*,...) ;
 int FUNC_46 (struct ifnet*,int) ;

__attribute__((used)) static int
FUNC_47(struct ifnet * VAR_25, struct ifnet * VAR_26)
{
    int VAR_27;
    int VAR_28 = 0;
    int VAR_29 = 0;
    int VAR_30 = VAR_10;
    ifbond_ref VAR_31;
    bondport_ref * VAR_32 = ((void*)0);
    bondport_ref * VAR_33 = ((void*)0);
    bondport_ref VAR_34;
    int VAR_35 = 0;

    if (FUNC_1(VAR_26)) {
 return (VAR_5);
    }


    VAR_34 = FUNC_15(VAR_26, 0x8000, 1, 0, &VAR_28);
    if (VAR_34 == ((void*)0)) {
 return (VAR_28);
    }
    FUNC_12();
    VAR_31 = (ifbond_ref)FUNC_41(VAR_25);
    if (VAR_31 == ((void*)0) || FUNC_23(VAR_31)) {
 FUNC_14();
 FUNC_18(VAR_34);
 return ((VAR_31 == ((void*)0) ? VAR_7 : VAR_4));
    }


    VAR_27 = FUNC_11(VAR_25, VAR_31);
    if (VAR_27 != 0
 && (VAR_27 > VAR_34->po_devmtu.ifdm_max || VAR_27 < VAR_34->po_devmtu.ifdm_min)) {
 FUNC_14();
 FUNC_45("if_bond: interface %s doesn't support mtu %d",
        FUNC_19(VAR_34), VAR_27);
 FUNC_18(VAR_34);
 return (VAR_5);
    }


    FUNC_26(VAR_31);


    FUNC_29(VAR_31, "bond_add_interface");

    if (FUNC_23(VAR_31)) {

 VAR_28 = VAR_4;
 goto signal_done;
    }
    if (FUNC_13(VAR_26) != ((void*)0)) {

 VAR_28 = VAR_4;
 goto signal_done;
    }
    FUNC_33(VAR_26);
    if ((FUNC_30(VAR_26) & (VAR_12 | VAR_11)) != 0) {

 FUNC_32(VAR_26);
 VAR_28 = VAR_4;
 goto signal_done;
    }



    VAR_26->if_eflags |= VAR_11;
    FUNC_32(VAR_26);

    if (FUNC_3(&VAR_31->ifb_port_list)) {
 FUNC_40(VAR_25, FUNC_35(VAR_26));
 FUNC_37(VAR_25, VAR_13, VAR_13);
 if (FUNC_24(VAR_31) == VAR_10) {
     VAR_30 = VAR_23;
 }
    } else {
 ifnet_offload_t VAR_36;
 ifnet_offload_t VAR_37;

 VAR_36 = FUNC_35(VAR_25);
 VAR_37 = FUNC_35(VAR_26);
 if (VAR_36 != VAR_37) {
     ifnet_offload_t VAR_38;

     VAR_38 = VAR_36 & VAR_37;
     FUNC_45("bond_add_interface(%s, %s)  "
     "hwassist values don't match 0x%x != 0x%x, using 0x%x instead\n",
     VAR_31->ifb_name, FUNC_19(VAR_34),
     VAR_36, VAR_37, VAR_38);





     FUNC_40(VAR_25, VAR_38);
 }
    }
    VAR_34->po_bond = VAR_31;


    FUNC_21(&VAR_34->po_saved_addr, FUNC_2(VAR_26));


    FUNC_4(&VAR_31->ifb_port_list, VAR_34, VAR_24);
    VAR_31->ifb_port_count++;


    if (FUNC_34(VAR_25) == 0) {
 FUNC_39(VAR_25, VAR_8);
    }
    FUNC_14();



    if (VAR_30) {
 FUNC_38(VAR_25, FUNC_2(VAR_26), VAR_9,
      VAR_15);
    }

    VAR_35 |= VAR_0;


    VAR_32 = (bondport_ref *)
 FUNC_6(sizeof(*VAR_32) * VAR_31->ifb_port_count, VAR_20, VAR_21);
    if (VAR_32 == ((void*)0)) {
 VAR_28 = VAR_6;
 goto failed;
    }


    VAR_28 = FUNC_9(VAR_26);
    if (VAR_28) {
 goto failed;
    }
    VAR_35 |= VAR_3;


    VAR_27 = FUNC_11(VAR_25, VAR_31);
    VAR_28 = FUNC_46(VAR_26, VAR_27);
    if (VAR_28 != 0) {
 FUNC_45("bond_add_interface(%s, %s):"
        " SIOCSIFMTU %d failed %d\n",
        VAR_31->ifb_name, FUNC_19(VAR_34), VAR_27, VAR_28);
 goto failed;
    }
    VAR_35 |= VAR_2;


    VAR_28 = FUNC_44(&VAR_34->po_multicast, VAR_25, VAR_26);
    if (VAR_28) {
 FUNC_45("bond_add_interface(%s, %s):"
        " multicast_list_program failed %d\n",
        VAR_31->ifb_name, FUNC_19(VAR_34), VAR_28);
 goto failed;
    }


    FUNC_37(VAR_26, VAR_14, VAR_14);

    VAR_28 = FUNC_31(VAR_26, 0, VAR_22, ((void*)0));
    if (VAR_28 != 0) {
 FUNC_45("bond_add_interface(%s, %s): SIOCSIFFLAGS failed %d\n",
        VAR_31->ifb_name, FUNC_19(VAR_34), VAR_28);
 goto failed;
    }


    VAR_28 = FUNC_22(VAR_26,
    (const struct ether_addr *)FUNC_2(VAR_25));
    if (VAR_28 != 0) {

 FUNC_45("bond_add_interface(%s, %s): if_siflladdr failed %d\n",
        VAR_31->ifb_name, FUNC_19(VAR_34), VAR_28);
 goto failed;
    }
    VAR_35 |= VAR_1;

    FUNC_12();


    VAR_34->po_enabled = 1;


    if (VAR_31->ifb_distributing_count) {
 FUNC_7(VAR_31->ifb_distributing_array, VAR_32,
       sizeof(*VAR_32) * VAR_31->ifb_distributing_count);
    }
    VAR_33 = VAR_31->ifb_distributing_array;
    VAR_31->ifb_distributing_array = VAR_32;

    if (VAR_31->ifb_mode == VAR_17) {
 FUNC_20(VAR_34);


 if (FUNC_27(VAR_31)) {
     VAR_29 = (VAR_31->ifb_active_lag == ((void*)0))
  ? VAR_18
  : VAR_19;
     VAR_31->ifb_last_link_event = VAR_29;
 }
    }
    else {

 if (FUNC_43(&VAR_34->po_media_info)) {
     if (VAR_31->ifb_distributing_count == 0) {
  VAR_31->ifb_last_link_event = VAR_29 = VAR_19;
     }
     FUNC_17(VAR_34);
 }
 else {
     FUNC_16(VAR_34);
 }
    }

    FUNC_28(VAR_31, "bond_add_interface");
    FUNC_14();
    if (VAR_29 != 0) {
 FUNC_42(VAR_25, VAR_29);
    }
    if (VAR_33 != ((void*)0)) {
 FUNC_0(VAR_33, VAR_20);
    }
    return 0;

 failed:
    FUNC_8();


    if (VAR_30) {
 FUNC_38(VAR_25, ((void*)0), 0, VAR_16);
    }

    if (VAR_32 != ((void*)0)) {
 FUNC_0(VAR_32, VAR_20);
    }
    if ((VAR_35 & VAR_1) != 0) {
 int VAR_39;

 VAR_39 = FUNC_22(VAR_26, &VAR_34->po_saved_addr);
 if (VAR_39 != 0) {
     FUNC_45("bond_add_interface(%s, %s): if_siflladdr failed %d\n",
     VAR_31->ifb_name, FUNC_19(VAR_34), VAR_39);
 }
    }
    if ((VAR_35 & VAR_3) != 0) {
 (void)FUNC_10(VAR_26);
    }
    if ((VAR_35 & VAR_2) != 0) {
 int VAR_40;

 VAR_40 = FUNC_46(VAR_26, VAR_34->po_devmtu.ifdm_current);
 if (VAR_40 != 0) {
     FUNC_45("bond_add_interface(%s, %s): SIOCSIFMTU %d failed %d\n",
     VAR_31->ifb_name, FUNC_19(VAR_34),
     VAR_34->po_devmtu.ifdm_current, VAR_40);
 }
    }
    FUNC_12();
    if ((VAR_35 & VAR_0) != 0) {
 FUNC_5(&VAR_31->ifb_port_list, VAR_34, VAR_24);
 VAR_31->ifb_port_count--;
    }
    FUNC_36(VAR_25, 0, VAR_11);
    if (FUNC_3(&VAR_31->ifb_port_list)) {
 VAR_31->ifb_altmtu = 0;
 FUNC_39(VAR_25, 0);
 FUNC_40(VAR_25, 0);
    }

 signal_done:
    FUNC_28(VAR_31, "bond_add_interface");
    FUNC_14();
    FUNC_25(VAR_31);
    FUNC_18(VAR_34);
    return (VAR_28);
}
