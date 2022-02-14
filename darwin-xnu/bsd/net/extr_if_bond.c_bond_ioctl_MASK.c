
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int u_long ;
struct TYPE_16__ {int ifdm_max; int ifdm_min; int ifdm_current; } ;
struct ifreq {int ifr_data; int ifr_data64; int ifr_mtu; TYPE_4__ ifr_devmtu; } ;
struct ifnet {int dummy; } ;
struct ifmediareq64 {int ifmu_ulist; } ;
struct ifmediareq32 {int ifmu_ulist; } ;
struct ifmediareq {int ifm_count; void* ifm_current; int ifm_status; void* ifm_active; int ifm_mask; } ;
struct ifaddr {int dummy; } ;
struct TYPE_17__ {int ibru_int_val; int ibru_if_name; } ;
struct if_bond_req {int ibr_op; TYPE_5__ ibr_ibru; } ;
typedef TYPE_6__* ifbond_ref ;
typedef int ibr ;
struct TYPE_19__ {int verbose; } ;
struct TYPE_18__ {int ifb_mode; int ifb_altmtu; TYPE_3__** ifb_distributing_array; int ifb_distributing_count; TYPE_1__* ifb_active_lag; } ;
struct TYPE_14__ {void* mi_active; } ;
struct TYPE_15__ {TYPE_2__ po_media_info; } ;
struct TYPE_13__ {void* lag_active_media; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ifnet*,struct ifnet*) ;
 int FUNC_2 (struct ifnet*,TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,int *,int *) ;
 int FUNC_4 (TYPE_6__*,struct if_bond_req*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_6__*,struct ifnet*) ;
 int FUNC_7 (struct ifnet*,int ) ;
 int FUNC_8 (struct ifnet*,int ,int) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,struct if_bond_req*,int) ;
 int FUNC_13 (void**,int ,int) ;
 int FUNC_14 () ;
 TYPE_8__* VAR_12 ;
 int FUNC_15 (TYPE_6__*) ;
 int FUNC_16 (struct ifnet*,int ,int ) ;
 int FUNC_17 (struct ifnet*) ;
 scalar_t__ FUNC_18 (struct ifnet*) ;
 struct ifnet* FUNC_19 (int ) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static int
FUNC_21(struct ifnet *VAR_13, u_long VAR_14, void * VAR_15)
{
    int VAR_16 = 0;
    struct if_bond_req VAR_17;
    struct ifaddr * VAR_18;
    ifbond_ref VAR_19;
    struct ifreq * VAR_20;
    struct ifmediareq *VAR_21;
    struct ifnet * VAR_22 = ((void*)0);
    user_addr_t VAR_23;

    if (FUNC_18(VAR_13) != VAR_10) {
 return (VAR_3);
    }
    VAR_20 = (struct ifreq *)VAR_15;
    VAR_18 = (struct ifaddr *)VAR_15;

    switch (VAR_14) {
    case 134:
 FUNC_16(VAR_13, VAR_5, VAR_5);
 break;

    case 136:
    case 135:
 FUNC_5();
 VAR_19 = (ifbond_ref)FUNC_17(VAR_13);
 if (VAR_19 == ((void*)0) || FUNC_15(VAR_19)) {
     FUNC_11();
     return (VAR_19 == ((void*)0) ? VAR_3 : VAR_0);
 }
 VAR_21 = (struct ifmediareq *)VAR_15;
 VAR_21->ifm_current = VAR_8;
 VAR_21->ifm_mask = 0;
 VAR_21->ifm_status = VAR_7;
 VAR_21->ifm_active = VAR_8;
 VAR_21->ifm_count = 1;
 if (VAR_19->ifb_mode == 148) {
     if (VAR_19->ifb_active_lag != ((void*)0)) {
  VAR_21->ifm_active = VAR_19->ifb_active_lag->lag_active_media;
  VAR_21->ifm_status |= VAR_6;
     }
 }
 else if (VAR_19->ifb_distributing_count > 0) {
     VAR_21->ifm_active
  = VAR_19->ifb_distributing_array[0]->po_media_info.mi_active;
     VAR_21->ifm_status |= VAR_6;
 }
 FUNC_11();
 VAR_23 = (VAR_14 == 135) ?
     ((struct ifmediareq64 *)VAR_21)->ifmu_ulist :
     FUNC_0(((struct ifmediareq32 *)VAR_21)->ifmu_ulist);
 if (VAR_23 != VAR_11) {
     VAR_16 = FUNC_13(&VAR_21->ifm_current,
       VAR_23,
       sizeof(int));
 }
 break;

    case 129:

 VAR_16 = VAR_1;
 break;

    case 137:
 FUNC_5();
 VAR_19 = (ifbond_ref)FUNC_17(VAR_13);
 if (VAR_19 == ((void*)0) || FUNC_15(VAR_19)) {
     FUNC_11();
     VAR_16 = (VAR_19 == ((void*)0)) ? VAR_3 : VAR_0;
     break;
 }
 VAR_20->ifr_devmtu.ifdm_current = FUNC_2(VAR_13, VAR_19);
 FUNC_3(VAR_19, &VAR_20->ifr_devmtu.ifdm_min,
       &VAR_20->ifr_devmtu.ifdm_max);
 FUNC_11();
 break;

    case 139:
 FUNC_5();
 VAR_19 = (ifbond_ref)FUNC_17(VAR_13);
 if (VAR_19 == ((void*)0) || FUNC_15(VAR_19)) {
     FUNC_11();
     VAR_16 = (VAR_19 == ((void*)0)) ? VAR_3 : VAR_0;
     break;
 }
 VAR_20->ifr_mtu = VAR_19->ifb_altmtu;
 FUNC_11();
 break;

    case 133:
 VAR_16 = FUNC_8(VAR_13, VAR_20->ifr_mtu, 1);
 break;

    case 128:
 VAR_16 = FUNC_8(VAR_13, VAR_20->ifr_mtu, 0);
 break;

    case 132:
 VAR_23 = FUNC_20(FUNC_14())
     ? VAR_20->ifr_data64 : FUNC_0(VAR_20->ifr_data);
 VAR_16 = FUNC_12(VAR_23, &VAR_17, sizeof(VAR_17));
 if (VAR_16) {
     break;
 }
 switch (VAR_17.ibr_op) {
 case 146:
 case 144:
     VAR_22 = FUNC_19(VAR_17.ibr_ibru.ibru_if_name);
     if (VAR_22 == ((void*)0)) {
  VAR_16 = VAR_2;
  break;
     }
     if (FUNC_18(VAR_22) != VAR_9) {
  VAR_16 = VAR_4;
  break;
     }
     break;
 case 142:
 case 143:
     break;
 default:
     VAR_16 = VAR_3;
     break;
 }
 if (VAR_16 != 0) {
     break;
 }
 switch (VAR_17.ibr_op) {
 case 146:
     VAR_16 = FUNC_1(VAR_13, VAR_22);
     break;
 case 144:
     FUNC_5();
     VAR_19 = (ifbond_ref)FUNC_17(VAR_13);
     if (VAR_19 == ((void*)0) || FUNC_15(VAR_19)) {
  FUNC_11();
  return (VAR_19 == ((void*)0) ? VAR_3 : VAR_0);
     }
     VAR_16 = FUNC_6(VAR_19, VAR_22);
     FUNC_11();
     break;
 case 142:
     FUNC_5();
     if (VAR_12 == ((void*)0)) {
  FUNC_11();
  VAR_16 = VAR_2;
  break;
     }
     VAR_12->verbose = VAR_17.ibr_ibru.ibru_int_val;
     FUNC_11();
     break;
 case 143:
     switch (VAR_17.ibr_ibru.ibru_int_val) {
     case 148:
     case 147:
  break;
     default:
  VAR_16 = VAR_1;
  break;
     }
     if (VAR_16 != 0) {
  break;
     }
     VAR_16 = FUNC_7(VAR_13, VAR_17.ibr_ibru.ibru_int_val);
     break;
 }
 break;

    case 138:
 VAR_23 = FUNC_20(FUNC_14())
     ? VAR_20->ifr_data64 : FUNC_0(VAR_20->ifr_data);
 VAR_16 = FUNC_12(VAR_23, &VAR_17, sizeof(VAR_17));
 if (VAR_16) {
     break;
 }
 switch (VAR_17.ibr_op) {
 case 145:
     break;
 default:
     VAR_16 = VAR_3;
     break;
 }
 if (VAR_16 != 0) {
     break;
 }
 FUNC_5();
 VAR_19 = (ifbond_ref)FUNC_17(VAR_13);
 if (VAR_19 == ((void*)0) || FUNC_15(VAR_19)) {
     FUNC_11();
     return (VAR_19 == ((void*)0) ? VAR_3 : VAR_0);
 }
 switch (VAR_17.ibr_op) {
 case 145:
     VAR_16 = FUNC_4(VAR_19, &VAR_17, VAR_23);
     break;
 }
 FUNC_11();
 break;

    case 130:
 VAR_16 = VAR_3;
 break;

    case 131:

 FUNC_5();
 VAR_16 = FUNC_9(VAR_13);
 FUNC_11();
 break;

    case 141:
    case 140:
 VAR_16 = FUNC_10(VAR_13);
 break;
    default:
 VAR_16 = VAR_3;
    }
    return VAR_16;
}
