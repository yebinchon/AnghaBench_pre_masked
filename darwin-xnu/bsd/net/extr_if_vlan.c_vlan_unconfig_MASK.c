
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef TYPE_1__* vlan_parent_ref ;
struct ifnet {int dummy; } ;
typedef TYPE_2__* ifvlan_ref ;
struct TYPE_18__ {scalar_t__ ifv_flags; scalar_t__ ifv_mtufudge; int ifv_multicast; TYPE_1__* ifv_vlp; struct ifnet* ifv_ifp; } ;
struct TYPE_17__ {int vlp_vlan_list; struct ifnet* vlp_ifp; } ;
struct TYPE_16__ {scalar_t__ verbose; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_8 ;
 TYPE_14__* VAR_9 ;
 TYPE_2__* FUNC_3 (struct ifnet*) ;
 char* FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*,int ,int ) ;
 int FUNC_6 (struct ifnet*,int ,int) ;
 int FUNC_7 (struct ifnet*,int *,int ,int ) ;
 int FUNC_8 (struct ifnet*,int ) ;
 int FUNC_9 (struct ifnet*,int ) ;
 int FUNC_10 (struct ifnet*) ;
 int VAR_10 ;
 int FUNC_11 (TYPE_2__*,scalar_t__) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,char*,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (struct ifnet*) ;
 int FUNC_17 () ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*,char*) ;
 int FUNC_23 (TYPE_1__*,char*) ;
 int FUNC_24 () ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_25(ifvlan_ref VAR_12, int VAR_13)
{
    struct ifnet * VAR_14 = VAR_12->ifv_ifp;
    int VAR_15 = VAR_1;
    int VAR_16 = 0;
    int VAR_17 = 0;
    struct ifnet * VAR_18;
    vlan_parent_ref VAR_19;

    FUNC_15();
    VAR_19 = VAR_12->ifv_vlp;
    if (VAR_19 == ((void*)0)) {
 return (0);
    }
    if (VAR_13) {
 VAR_17++;
 FUNC_21(VAR_19);
 FUNC_23(VAR_19, "vlan_unconfig");


 if (VAR_12 != FUNC_3(VAR_14)) {
     goto signal_done;
 }
 if (VAR_12->ifv_vlp != VAR_19) {

     goto signal_done;
 }
    }


    VAR_17++;
    VAR_18 = VAR_19->vlp_ifp;


    if (FUNC_1(FUNC_0(&VAR_19->vlp_vlan_list), VAR_10) == ((void*)0)) {
 if (VAR_9->verbose) {
     FUNC_14("vlan_unconfig: last vlan on %s%d\n",
     FUNC_4(VAR_18), FUNC_10(VAR_18));
 }
 VAR_15 = VAR_8;
    }


    (void)FUNC_11(VAR_12, VAR_0 - VAR_12->ifv_mtufudge);

    FUNC_24();


    (void)FUNC_13(&VAR_12->ifv_multicast);


    FUNC_7(VAR_14, ((void*)0), 0, VAR_7);


    if (VAR_15) {
 (void)FUNC_16(VAR_18);
    }

    FUNC_17();


    FUNC_8(VAR_14, 0);
    FUNC_6(VAR_14, 0,
      VAR_3 | VAR_4 | VAR_6 | VAR_5);
    FUNC_9(VAR_14, 0);
    VAR_12->ifv_mtufudge = 0;


    FUNC_20(VAR_19, VAR_12);
    VAR_12->ifv_flags = 0;


    VAR_16++;


    if (VAR_15 && !FUNC_18(VAR_19)) {

 FUNC_5(VAR_18, 0, VAR_2);
 FUNC_2(VAR_19, VAR_11);


 VAR_17++;


 VAR_17++;
    }

 signal_done:
    if (VAR_13) {
 FUNC_22(VAR_19, "vlan_unconfig");
    }
    FUNC_24();
    while (VAR_16--) {
 FUNC_12(VAR_12);
    }
    while (VAR_17--) {
 FUNC_19(VAR_19);
    }
    FUNC_17();
    return (0);
}
