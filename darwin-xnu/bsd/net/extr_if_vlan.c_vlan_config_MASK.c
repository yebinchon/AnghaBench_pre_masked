
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int * vlan_parent_ref ;
typedef int u_int16_t ;
struct ifnet {int if_eflags; } ;
typedef TYPE_1__* ifvlan_ref ;
typedef int ifnet_offload_t ;
typedef int caddr_t ;
struct TYPE_12__ {scalar_t__ ifv_mtufudge; scalar_t__ ifv_encaplen; scalar_t__ ifv_flags; int ifv_multicast; int * ifv_vlp; } ;
struct TYPE_11__ {int parent_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_10__* VAR_19 ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*) ;
 TYPE_1__* FUNC_5 (struct ifnet*) ;
 TYPE_1__* FUNC_6 (struct ifnet*) ;
 int FUNC_7 (struct ifnet*,int ,int ,int ) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (struct ifnet*,int ,int ) ;
 int FUNC_12 (struct ifnet*,int,int) ;
 int FUNC_13 (struct ifnet*,int ,int ,int ) ;
 int FUNC_14 (struct ifnet*,scalar_t__) ;
 int FUNC_15 (struct ifnet*,int) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (int *,struct ifnet*,struct ifnet*) ;
 int * FUNC_21 (struct ifnet*) ;
 int FUNC_22 () ;
 int FUNC_23 (struct ifnet*) ;
 int FUNC_24 (struct ifnet*) ;
 int FUNC_25 () ;
 int FUNC_26 (int *,TYPE_1__*,int) ;
 int FUNC_27 (struct ifnet*,int **) ;
 scalar_t__ FUNC_28 (int *) ;
 scalar_t__ FUNC_29 (int *) ;
 int * FUNC_30 (int *,int) ;
 scalar_t__ FUNC_31 (int *) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *,TYPE_1__*) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *,char*) ;
 int FUNC_36 (int *,char*) ;
 int FUNC_37 () ;
 int VAR_20 ;

__attribute__((used)) static int
FUNC_38(struct ifnet * VAR_21, struct ifnet * VAR_22, int VAR_23)
{
    int VAR_24;
    int VAR_25 = VAR_6;
    ifvlan_ref VAR_26 = ((void*)0);
    int VAR_27 = VAR_6;
    int VAR_28 = 0;
    vlan_parent_ref VAR_29 = ((void*)0);
    ifnet_offload_t VAR_30;
    u_int16_t VAR_31;
    vlan_parent_ref VAR_32 = ((void*)0);


    VAR_24 = FUNC_27(VAR_22, &VAR_29);
    if (VAR_24 != 0) {
 return (VAR_24);
    }

    FUNC_25();
    VAR_26 = FUNC_6(VAR_21);
    if (VAR_26 == ((void*)0) || VAR_26->ifv_vlp != ((void*)0)) {
 FUNC_37();
 if (VAR_26 != ((void*)0)) {
     FUNC_18(VAR_26);
 }
 FUNC_32(VAR_29);
 return (VAR_1);
    }
    VAR_32 = FUNC_21(VAR_22);
    if (VAR_32 != ((void*)0)) {
 FUNC_34(VAR_32);
 VAR_28++;
 if (FUNC_30(VAR_32, VAR_23) != ((void*)0)) {

     VAR_24 = VAR_0;
     goto unlock_done;
 }
    }
    else {

 FUNC_34(VAR_29);


 FUNC_1(&VAR_19->parent_list, VAR_29, VAR_20);
 VAR_32 = VAR_29;

 FUNC_34(VAR_32);
 VAR_28++;
    }


    FUNC_36(VAR_32, "vlan_config");

    if (FUNC_5(VAR_21) != VAR_26) {
 VAR_24 = VAR_2;
 goto signal_done;
    }


    if (FUNC_21(VAR_22) != VAR_32) {
 VAR_24 = VAR_1;
 goto signal_done;
    }

    if (FUNC_28(VAR_32)
 || FUNC_16(VAR_26) || VAR_26->ifv_vlp != ((void*)0)) {
 VAR_24 = VAR_1;
 goto signal_done;
    }


    if (FUNC_30(VAR_32, VAR_23) != ((void*)0)) {

 VAR_24 = VAR_0;
 goto signal_done;
    }

    if (FUNC_31(VAR_32)) {
 VAR_25 = VAR_18;
    }
    FUNC_26(VAR_32, VAR_26, VAR_23);
    FUNC_19(VAR_26);
    VAR_27 = VAR_18;


    FUNC_9(VAR_22);
    if ((FUNC_3(VAR_22) & VAR_7) != 0) {
 FUNC_8(VAR_22);

 VAR_24 = VAR_1;
 goto signal_done;
    }


    VAR_22->if_eflags |= VAR_8;
    FUNC_8(VAR_22);
    FUNC_37();

    if (VAR_25) {

 VAR_24 = FUNC_23(VAR_22);
 if (VAR_24) {
     FUNC_25();
     goto signal_done;
 }
    }


    VAR_24 = FUNC_20(&VAR_26->ifv_multicast, VAR_21, VAR_22);
    if (VAR_24 != 0) {
 if (VAR_25) {
     (void)FUNC_24(VAR_22);
 }
 FUNC_25();
 goto signal_done;
    }


    FUNC_13(VAR_21, FUNC_0(VAR_22), VAR_4, VAR_16);


    FUNC_25();

    VAR_26->ifv_encaplen = VAR_5;
    VAR_26->ifv_flags = 0;
    if (FUNC_29(VAR_32)) {
 VAR_26->ifv_mtufudge = 0;
    } else {







 VAR_26->ifv_mtufudge = VAR_26->ifv_encaplen;
    }
    FUNC_14(VAR_21, VAR_3 - VAR_26->ifv_mtufudge);





    VAR_31 = FUNC_4(VAR_22)
 & (VAR_9 | VAR_10 | VAR_12);
    FUNC_12(VAR_21, VAR_31,
      VAR_9 | VAR_10 | VAR_12);


    VAR_30 = FUNC_10(VAR_22) & ~(VAR_15 | VAR_14);
    FUNC_15(VAR_21, VAR_30);

    FUNC_12(VAR_21, VAR_11, VAR_11);
    FUNC_17(VAR_26);
    FUNC_35(VAR_32, "vlan_config");
    FUNC_37();
    if (VAR_29 != VAR_32) {

 FUNC_32(VAR_29);
    }
    if (VAR_26 != ((void*)0)) {
 FUNC_18(VAR_26);
    }
    if (VAR_25) {

 FUNC_12(VAR_22, VAR_13, VAR_13);
 (void)FUNC_7(VAR_22, 0, VAR_17, (caddr_t)((void*)0));
    }
    return 0;

 signal_done:
    FUNC_22();

    if (VAR_27) {
 FUNC_33(VAR_32, VAR_26);
 if (!FUNC_28(VAR_32) && FUNC_31(VAR_32)) {

     FUNC_11(VAR_22, 0, VAR_8);
     FUNC_2(VAR_32, VAR_20);

     VAR_28++;


     VAR_28++;
 }
    }
    FUNC_35(VAR_32, "vlan_config");

 unlock_done:
    FUNC_37();

    while (VAR_28--) {
 FUNC_32(VAR_32);
    }
    if (VAR_29 != VAR_32) {
 FUNC_32(VAR_29);
    }
    if (VAR_26 != ((void*)0)) {
 if (VAR_27) {
     FUNC_18(VAR_26);
 }
 FUNC_18(VAR_26);
    }
    return (VAR_24);
}
