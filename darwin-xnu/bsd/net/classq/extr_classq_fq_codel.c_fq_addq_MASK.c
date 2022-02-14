
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int64_t ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_35__ {scalar_t__ pktsched_ptype; int pktsched_pkt; } ;
typedef TYPE_2__ pktsched_pkt_t ;
struct TYPE_36__ {scalar_t__ fq_ptype; int fq_flags; int fq_deficit; int fq_bytes; } ;
typedef TYPE_3__ fq_t ;
struct TYPE_37__ {int fqs_ifq; TYPE_3__* fqs_large_flow; } ;
typedef TYPE_4__ fq_if_t ;
struct TYPE_34__ {int fcl_newflows_cnt; int fcl_pkt_cnt; int fcl_byte_cnt; int fcl_drop_overflow; int fcl_flow_control_fail; int fcl_drop_early; int fcl_drop_memfailure; } ;
struct TYPE_38__ {int fcl_quantum; TYPE_1__ fcl_stat; int fcl_new_flows; } ;
typedef TYPE_5__ fq_if_classq_t ;


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
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (int *,TYPE_3__*,int ) ;
 int * FUNC_3 (TYPE_3__*,int ) ;
 int VAR_16 ;
 int FUNC_4 (int) ;
 int VAR_17 ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*,TYPE_5__*,scalar_t__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_4__*,TYPE_2__*,int,scalar_t__,TYPE_5__*) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,TYPE_5__*,TYPE_3__*) ;
 int FUNC_12 (TYPE_4__*) ;
 TYPE_3__* FUNC_13 (TYPE_4__*,int,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_14 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_15 (struct timespec*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*,int**,scalar_t__**,int*,scalar_t__*,scalar_t__*,int*) ;

int
FUNC_19(fq_if_t *VAR_18, pktsched_pkt_t *VAR_19, fq_if_classq_t *VAR_20)
{
 int VAR_21 = VAR_6, VAR_22 = 0, VAR_23 = VAR_2;
 u_int64_t VAR_24;
 fq_t *VAR_25 = ((void*)0);
 uint64_t *VAR_26;
 uint32_t *VAR_27;
 uint32_t VAR_28, VAR_29;
 uint8_t VAR_30, VAR_31;

 FUNC_18(VAR_19, &VAR_27, &VAR_26, &VAR_28,
     &VAR_31, &VAR_30, &VAR_29);

 if (VAR_19->pktsched_ptype == VAR_15) {

  FUNC_4(!(*VAR_27 & VAR_14));
  *VAR_27 |= VAR_14;
 }

 if (*VAR_26 > 0) {
  VAR_24 = *VAR_26;
 } else {
  struct timespec VAR_32;
  FUNC_15(&VAR_32);
  VAR_24 = (VAR_32.tv_sec * VAR_12) + VAR_32.tv_nsec;
  *VAR_26 = VAR_24;
 }


 VAR_25 = FUNC_13(VAR_18, VAR_28, FUNC_17(VAR_19),
     VAR_24, VAR_16, VAR_19->pktsched_ptype);
 if (VAR_25 == ((void*)0)) {

  VAR_20->fcl_stat.fcl_drop_memfailure++;
  FUNC_1(VAR_18->fqs_ifq);
  return (VAR_0);
 }
 FUNC_4(VAR_25->fq_ptype == VAR_19->pktsched_ptype);

 FUNC_5(VAR_18, VAR_25, VAR_20, &VAR_24);

 if (FUNC_0(VAR_25)) {
  if ((VAR_25->fq_flags & VAR_7) &&
      (*VAR_27 & VAR_13)) {
   VAR_22 = 1;




   if (VAR_30 != VAR_11) {
    VAR_21 = VAR_4;
    VAR_20->fcl_stat.fcl_drop_early++;
   }
  } else {




   if (!FUNC_6(VAR_25)) {
    FUNC_8(VAR_18, VAR_25);
    VAR_21 = VAR_6;
   } else {
    VAR_21 = VAR_4;
   }
   VAR_20->fcl_stat.fcl_drop_early++;
  }

 }


 if (VAR_22 == 1 && VAR_21 != VAR_5) {
  if (FUNC_9(VAR_18, VAR_19, VAR_28, VAR_31,
      VAR_20)) {
   VAR_25->fq_flags |= VAR_8;

   if (VAR_21 == VAR_6) {
    VAR_23 = VAR_3;
   } else {

    VAR_23 = VAR_1;
   }
  } else {




   VAR_21 = VAR_5;
   VAR_23 = VAR_1;
   VAR_20->fcl_stat.fcl_flow_control_fail++;
  }
 }







 if (VAR_21 == VAR_6 && FUNC_10(VAR_18)) {
  if (VAR_18->fqs_large_flow == VAR_25) {





   FUNC_8(VAR_18, VAR_25);
  } else {
   if (VAR_18->fqs_large_flow == ((void*)0)) {
    VAR_21 = VAR_5;
    VAR_20->fcl_stat.fcl_drop_overflow++;
    VAR_23 = VAR_0;





    if (FUNC_6(VAR_25) && !(VAR_25->fq_flags &
        (VAR_9 | VAR_10))) {
     FUNC_11(VAR_18, VAR_20, VAR_25);
     VAR_25 = ((void*)0);
    }
   } else {
    FUNC_12(VAR_18);
   }
  }
 }

 if (VAR_21 == VAR_6) {
  uint32_t VAR_33 = FUNC_16(VAR_19);
  FUNC_7(VAR_25, VAR_19->pktsched_pkt);
  VAR_25->fq_bytes += VAR_33;
  VAR_20->fcl_stat.fcl_byte_cnt += VAR_33;
  VAR_20->fcl_stat.fcl_pkt_cnt++;





  FUNC_14(VAR_18, VAR_25);
 } else {
  FUNC_1(VAR_18->fqs_ifq);
  return ((VAR_23 != VAR_2) ? VAR_23 : VAR_0);
 }





 if ((VAR_25->fq_flags & (VAR_9|VAR_10)) == 0) {
  FUNC_4(FUNC_3(VAR_25, VAR_17) == ((void*)0));
  FUNC_2(&VAR_20->fcl_new_flows, VAR_25, VAR_17);
  VAR_25->fq_flags |= VAR_9;

  VAR_20->fcl_stat.fcl_newflows_cnt++;

  VAR_25->fq_deficit = VAR_20->fcl_quantum;
 }
 return (VAR_23);
}
