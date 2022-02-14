
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct ifclassq {scalar_t__ ifcq_disc; } ;
struct TYPE_8__ {int fqs_ptype; int* fqs_bitmaps; TYPE_3__* fqs_classq; } ;
typedef TYPE_2__ fq_if_t ;
struct TYPE_7__ {int fcl_flows_cnt; } ;
struct TYPE_9__ {scalar_t__ fcl_budget; int fcl_quantum; TYPE_1__ fcl_stat; int fcl_drr_max; } ;
typedef TYPE_3__ fq_if_classq_t ;
typedef int (* fq_if_append_pkt_t ) (void*,void*) ;
typedef int classq_pkt_type_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (struct ifclassq*) ;
 int FUNC_3 (struct ifclassq*,scalar_t__,scalar_t__) ;

 int FUNC_4 (int) ;
 int FUNC_5 (void*,void*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,scalar_t__,scalar_t__,void**,void**,scalar_t__*,scalar_t__*,int ,int*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,int*) ;
 int FUNC_9 (int,int*) ;
 int FUNC_10 (int) ;

int
FUNC_11(struct ifclassq *VAR_4, u_int32_t VAR_5,
    u_int32_t VAR_6, void **VAR_7,
    void **VAR_8, u_int32_t *VAR_9, u_int32_t *VAR_10,
    classq_pkt_type_t *VAR_11)
{
 void *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14, *VAR_15;
 u_int32_t VAR_16 = 0, VAR_17 = 0, VAR_18, VAR_19;
 fq_if_t *VAR_20;
 fq_if_classq_t *VAR_21;
 int VAR_22;
 fq_if_append_pkt_t VAR_23;

 FUNC_2(VAR_4);

 VAR_20 = (fq_if_t *)VAR_4->ifcq_disc;

 switch (VAR_20->fqs_ptype) {
 case 128:
  VAR_23 = FUNC_5;
  break;


 default:
  FUNC_4(0);

 }

 VAR_14 = VAR_15 = ((void*)0);
 VAR_18 = VAR_19 = 0;
 *VAR_11 = VAR_20->fqs_ptype;

 for (;;) {
  classq_pkt_type_t VAR_24;
  if (VAR_20->fqs_bitmaps[VAR_2] == 0 &&
      VAR_20->fqs_bitmaps[VAR_1] == 0) {
   VAR_20->fqs_bitmaps[VAR_1] = VAR_20->fqs_bitmaps[VAR_3];
   VAR_20->fqs_bitmaps[VAR_3] = 0;
   if (VAR_20->fqs_bitmaps[VAR_1] == 0)
    break;
  }
  VAR_22 = FUNC_10(VAR_20->fqs_bitmaps[VAR_2]);
  if (VAR_22 == 0) {





   VAR_22 = FUNC_10(VAR_20->fqs_bitmaps[VAR_1]);
   FUNC_4(VAR_22 > 0);
   FUNC_8((VAR_22 - 1),
       &VAR_20->fqs_bitmaps[VAR_1]);
   FUNC_9((VAR_22 - 1),
       &VAR_20->fqs_bitmaps[VAR_2]);
  }
  VAR_22--;
  VAR_21 = &VAR_20->fqs_classq[VAR_22];

  if (VAR_21->fcl_budget <= 0) {

   VAR_21->fcl_budget += (FUNC_7(VAR_21->fcl_drr_max,
       VAR_21->fcl_stat.fcl_flows_cnt) *
       VAR_21->fcl_quantum);
   if (VAR_21->fcl_budget <= 0)
    goto state_change;
  }
  FUNC_6(VAR_20, VAR_21, (VAR_5 - VAR_18),
      (VAR_6 - VAR_19), &VAR_12, &VAR_13, &VAR_16,
      &VAR_17, VAR_0, &VAR_24);
  if (VAR_12 != ((void*)0)) {
   FUNC_0(VAR_24 == *VAR_11);
   FUNC_0(VAR_16 > 0 && VAR_17 > 0);
   if (VAR_14 == ((void*)0)) {
    VAR_14 = VAR_12;
    VAR_15 = VAR_13;
    VAR_18 = VAR_16;
    VAR_19 = VAR_17;
   } else {
    VAR_23(VAR_15, VAR_12);
    VAR_15 = VAR_13;
    VAR_18 += VAR_16;
    VAR_19 += VAR_17;
   }
   VAR_23(VAR_15, ((void*)0));
   VAR_21->fcl_budget -= VAR_17;
   VAR_16 = 0;
   VAR_17 = 0;
  }





state_change:
  if (!FUNC_1(VAR_21)) {
   if (VAR_21->fcl_budget <= 0) {
    FUNC_9(VAR_22,
        &VAR_20->fqs_bitmaps[VAR_3]);
    FUNC_8(VAR_22,
        &VAR_20->fqs_bitmaps[VAR_2]);
   }
  } else {
   FUNC_8(VAR_22, &VAR_20->fqs_bitmaps[VAR_2]);
   FUNC_4(((VAR_20->fqs_bitmaps[VAR_2] |
       VAR_20->fqs_bitmaps[VAR_1] |
       VAR_20->fqs_bitmaps[VAR_3])&(1 << VAR_22)) == 0);
   VAR_21->fcl_budget = 0;
  }
  if (VAR_18 >= VAR_5 || VAR_19 >= VAR_6)
   break;
 }
 if (VAR_14 != ((void*)0)) {
  if (VAR_7 != ((void*)0))
   *VAR_7 = VAR_14;
  if (VAR_8 != ((void*)0))
   *VAR_8 = VAR_15;
  if (VAR_9 != ((void*)0))
   *VAR_9 = VAR_18;
  if (VAR_10 != ((void*)0))
   *VAR_10 = VAR_19;
  FUNC_3(VAR_4, VAR_18, VAR_19);
 } else {
  if (VAR_7 != ((void*)0))
   *VAR_7 = ((void*)0);
  if (VAR_8 != ((void*)0))
   *VAR_8 = ((void*)0);
  if (VAR_9 != ((void*)0))
   *VAR_9 = 0;
  if (VAR_10 != ((void*)0))
   *VAR_10 = 0;
 }
 return (0);
}
