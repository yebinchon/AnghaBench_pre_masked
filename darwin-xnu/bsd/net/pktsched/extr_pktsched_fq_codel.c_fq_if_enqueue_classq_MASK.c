
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct ifclassq {scalar_t__ ifcq_disc; } ;
typedef int pktsched_pkt_t ;
typedef TYPE_2__* mbuf_t ;
typedef scalar_t__ mbuf_svc_class_t ;
struct TYPE_12__ {int fqs_throttle; int fqs_flags; int* fqs_bitmaps; TYPE_4__* fqs_classq; } ;
typedef TYPE_3__ fq_if_t ;
struct TYPE_10__ {int fcl_throttle_drops; } ;
struct TYPE_13__ {TYPE_1__ fcl_stat; } ;
typedef TYPE_4__ fq_if_classq_t ;
typedef int classq_pkt_type_t ;
typedef int boolean_t ;
struct TYPE_11__ {int m_flags; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_1 (struct ifclassq*) ;
 int FUNC_2 (struct ifclassq*,int) ;
 int FUNC_3 (struct ifclassq*) ;
 int FUNC_4 (struct ifclassq*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*,int *,TYPE_4__*) ;
 size_t FUNC_7 (TYPE_3__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (size_t,int*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,void*) ;

int
FUNC_14(struct ifclassq *VAR_14, void *VAR_15, classq_pkt_type_t VAR_16,
    boolean_t *VAR_17)
{
 u_int32_t VAR_18;
 fq_if_t *VAR_19;
 fq_if_classq_t *VAR_20;
 int VAR_21, VAR_22;
 mbuf_svc_class_t VAR_23;
 pktsched_pkt_t VAR_24;

 FUNC_4(VAR_14);
 if ((VAR_16 == VAR_12) && !(((mbuf_t)VAR_15)->m_flags & VAR_11)) {
  FUNC_1(VAR_14);
  FUNC_8((mbuf_t)VAR_15);
  *VAR_17 = VAR_13;
  return (VAR_1);
 }
 FUNC_13(&VAR_24, VAR_16, VAR_15);

 VAR_19 = (fq_if_t *)VAR_14->ifcq_disc;
 VAR_23 = FUNC_12(&VAR_24);
 VAR_18 = FUNC_7(VAR_19, VAR_23);
 FUNC_5(VAR_18 >= 0 && VAR_18 < VAR_9);
 VAR_20 = &VAR_19->fqs_classq[VAR_18];

 if (VAR_23 == VAR_10 && VAR_19->fqs_throttle == 1) {

  VAR_20->fcl_stat.fcl_throttle_drops++;
  FUNC_1(VAR_14);
  FUNC_10(&VAR_24);
  *VAR_17 = VAR_13;
  return (VAR_3);
 }

 VAR_22 = FUNC_11(&VAR_24);
 VAR_21 = FUNC_6(VAR_19, &VAR_24, VAR_20);
 if (!(VAR_19->fqs_flags & VAR_5) &&
     !FUNC_0(VAR_20)) {
  if (((VAR_19->fqs_bitmaps[VAR_7] | VAR_19->fqs_bitmaps[VAR_6]) &
      (1 << VAR_18)) == 0) {




   FUNC_9(VAR_18, &VAR_19->fqs_bitmaps[VAR_8]);
  }
 }

 if (VAR_21 != 0) {
  if (VAR_21 == VAR_0) {

   VAR_21 = VAR_2;
   *VAR_17 = VAR_4;
  } else {
   *VAR_17 = VAR_13;
   FUNC_5(VAR_21 == 130 ||
       VAR_21 == 129 ||
       VAR_21 == 128);
   FUNC_10(&VAR_24);
   switch (VAR_21) {
   case 130:
    return (VAR_1);
   case 129:
    return (VAR_2);
   case 128:
    return (VAR_3);
   }
  }
 } else {
  *VAR_17 = VAR_4;
 }
 FUNC_3(VAR_14);
 FUNC_2(VAR_14, VAR_22);
 return (VAR_21);
}
