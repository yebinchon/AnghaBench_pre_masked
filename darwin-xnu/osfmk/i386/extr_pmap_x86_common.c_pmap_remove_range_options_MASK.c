
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int vm_map_offset_t ;
typedef int uint64_t ;
typedef scalar_t__ queue_entry_t ;
typedef TYPE_3__* pv_hashed_entry_t ;
typedef int pt_entry_t ;
typedef size_t ppnum_t ;
typedef TYPE_4__* pmap_t ;
typedef scalar_t__ pmap_paddr_t ;
typedef int boolean_t ;
struct TYPE_20__ {int wired_mem; int phys_footprint; int alternate_accounting_compressed; int alternate_accounting; int internal_compressed; int internal; int phys_mem; } ;
struct TYPE_17__ {int resident_count; int external; int internal; int reusable; int compressed; int wired_count; } ;
struct TYPE_19__ {TYPE_2__ stats; } ;
struct TYPE_16__ {scalar_t__ next; } ;
struct TYPE_18__ {TYPE_1__ qlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int,int*) ;
 int FUNC_5 (int,int*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_4__*,int ,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 TYPE_3__* VAR_8 ;
 int FUNC_10 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_11 (size_t) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (TYPE_4__*) ;
 scalar_t__ FUNC_15 (int) ;
 TYPE_4__* VAR_9 ;
 int FUNC_16 (int) ;
 size_t FUNC_17 (scalar_t__) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (TYPE_4__*,int ,int ) ;
 int* VAR_10 ;
 TYPE_3__* FUNC_20 (TYPE_4__*,int ,size_t*,int*,int *) ;
 int FUNC_21 (int*,int ) ;
 int FUNC_22 (int*,int,int ) ;
 scalar_t__ FUNC_23 (int) ;
 TYPE_5__ VAR_11 ;

void
FUNC_24(
 pmap_t VAR_12,
 vm_map_offset_t VAR_13,
 pt_entry_t *VAR_14,
 pt_entry_t *VAR_15,
 int VAR_16)
{
 pt_entry_t *VAR_17;
 pv_hashed_entry_t VAR_18 = VAR_8;
 pv_hashed_entry_t VAR_19 = VAR_8;
 pv_hashed_entry_t VAR_20;
 int VAR_21 = 0;
 int VAR_22, VAR_23, VAR_24, VAR_25;
 int VAR_26, VAR_27, VAR_28;
 uint64_t VAR_29;
 int VAR_30, VAR_31;
 uint64_t VAR_32, VAR_33;
 ppnum_t VAR_34;
 pmap_paddr_t VAR_35;
 vm_map_offset_t VAR_36;
 boolean_t VAR_37 = FUNC_14(VAR_12);
 boolean_t VAR_38;

 VAR_22 = 0;
 VAR_23 = 0;
 VAR_24 = 0;
 VAR_25 = 0;
 VAR_26 = 0;
 VAR_27 = 0;
 VAR_28 = 0;
 VAR_29 = 0;
 VAR_30 = 0;
 VAR_32 = 0;
 VAR_31 = 0;
 VAR_33 = 0;

 for (VAR_17 = VAR_14, VAR_36 = VAR_13;
      VAR_17 < VAR_15;
      VAR_17++, VAR_36 += VAR_3) {
  pt_entry_t VAR_39 = *VAR_17;

  VAR_35 = FUNC_23(VAR_39);
  if (VAR_35 == 0) {
   if ((VAR_16 & VAR_6) &&
       (FUNC_8(VAR_39))) {
    FUNC_12(VAR_12 != VAR_9);

    VAR_29++;
    VAR_32++;
    if (VAR_39 & VAR_7) {

     VAR_33++;
    }


    FUNC_22(VAR_17, VAR_2, 0);
   }
   continue;
  }
  VAR_24++;

  if (FUNC_15(VAR_39))
   VAR_23++;

  VAR_34 = FUNC_17(VAR_35);

  if (!FUNC_1(VAR_34)) {




   FUNC_21(VAR_17, 0);
   continue;
  }

  if ((VAR_39 & FUNC_9(VAR_37)) == 0)
   VAR_25++;


  FUNC_22(VAR_17, FUNC_9(VAR_37), 0);
 }

 if (VAR_24 == 0) {

         goto update_counts;
 }



 FUNC_7(VAR_12, VAR_13, VAR_36);

 for (VAR_17 = VAR_14, VAR_36 = VAR_13;
      VAR_17 < VAR_15;
      VAR_17++, VAR_36 += VAR_3) {

  VAR_35 = FUNC_23(*VAR_17);
  if (VAR_35 == 0) {
  check_pte_for_compressed_marker:





   if ((VAR_16 & VAR_6) &&
       (FUNC_8(*VAR_17))) {
    FUNC_12(VAR_12 != VAR_9);

    VAR_29++;
    VAR_32++;
    if (*VAR_17 & VAR_7) {

     VAR_33++;
    }
    FUNC_21(VAR_17, 0);
   }
   continue;
  }

  VAR_34 = FUNC_17(VAR_35);

  FUNC_3(VAR_34);

  VAR_35 = FUNC_23(*VAR_17);
  if (VAR_35 == 0) {
   FUNC_11(VAR_34);
   goto check_pte_for_compressed_marker;
  }




  VAR_20 = FUNC_20(VAR_12, VAR_36, (ppnum_t *) &VAR_34, VAR_17, &VAR_38);

  VAR_22++;

  if (FUNC_2(VAR_34)) {
   VAR_28++;
  } else if (FUNC_0(VAR_34)) {
   VAR_27++;
  } else {
   VAR_26++;
  }

  if (VAR_38) {

   FUNC_12(FUNC_0(VAR_34));
   VAR_30++;
   VAR_31++;
  } else if (FUNC_2(VAR_34)) {

   FUNC_12(!VAR_38);
   FUNC_12(FUNC_0(VAR_34));
  } else if (FUNC_0(VAR_34)) {

   FUNC_12(!VAR_38);
   FUNC_12(!FUNC_2(VAR_34));
   VAR_30++;
  } else {

  }






  if (!VAR_37) {
   VAR_10[VAR_34] |=
    *VAR_17 & (VAR_4 | VAR_5);
  } else {
   VAR_10[VAR_34] |=
    FUNC_13((*VAR_17 & (VAR_1 | VAR_0))) & (VAR_4 | VAR_5);
  }


  FUNC_21(VAR_17, 0);

  FUNC_11(VAR_34);

  if (VAR_20 != VAR_8) {
   VAR_20->qlink.next = (queue_entry_t) VAR_19;
   VAR_19 = VAR_20;

   if (VAR_18 == VAR_8) {
    VAR_18 = VAR_20;
   }
   VAR_21++;
  }
 }

 if (VAR_19 != VAR_8) {
  FUNC_10(VAR_19, VAR_18, VAR_21);
 }
update_counts:







 FUNC_19(VAR_12, VAR_11.phys_mem, FUNC_16(VAR_22));
 FUNC_6((VAR_12->stats.resident_count >= VAR_22,
       "pmap=%p num_removed=%d stats.resident_count=%d",
       VAR_12, VAR_22, VAR_12->stats.resident_count));
 FUNC_4(-VAR_22, &VAR_12->stats.resident_count);

 if (VAR_12 != VAR_9) {
  FUNC_6((VAR_12->stats.external >= VAR_26,
        "pmap=%p stats_external=%d stats.external=%d",
        VAR_12, VAR_26, VAR_12->stats.external));
  FUNC_6((VAR_12->stats.internal >= VAR_27,
        "pmap=%p stats_internal=%d stats.internal=%d",
        VAR_12, VAR_27, VAR_12->stats.internal));
  FUNC_6((VAR_12->stats.reusable >= VAR_28,
        "pmap=%p stats_reusable=%d stats.reusable=%d",
        VAR_12, VAR_28, VAR_12->stats.reusable));
  FUNC_6((VAR_12->stats.compressed >= VAR_29,
        "pmap=%p stats_compressed=%lld, stats.compressed=%lld",
        VAR_12, VAR_29, VAR_12->stats.compressed));


  if (VAR_26) {
   FUNC_4(-VAR_26, &VAR_12->stats.external);
  }
  if (VAR_27) {
   FUNC_4(-VAR_27, &VAR_12->stats.internal);
  }
  if (VAR_28)
   FUNC_4(-VAR_28, &VAR_12->stats.reusable);
  if (VAR_29)
   FUNC_5(-VAR_29, &VAR_12->stats.compressed);

  if (VAR_30) {
   FUNC_19(VAR_12,
       VAR_11.internal,
       FUNC_16(VAR_30));
  }
  if (VAR_32) {
   FUNC_19(VAR_12,
       VAR_11.internal_compressed,
       FUNC_16(VAR_32));
  }
  if (VAR_31) {
   FUNC_19(VAR_12,
       VAR_11.alternate_accounting,
       FUNC_16(VAR_31));
  }
  if (VAR_33) {
   FUNC_19(VAR_12,
       VAR_11.alternate_accounting_compressed,
       FUNC_16(VAR_33));
  }
  FUNC_19(VAR_12,
      VAR_11.phys_footprint,
      FUNC_16((VAR_30 -
      VAR_31) +
            (VAR_32 -
      VAR_33)));
 }





 FUNC_6((VAR_12->stats.wired_count >= VAR_23,
       "pmap=%p num_unwired=%d stats.wired_count=%d",
       VAR_12, VAR_23, VAR_12->stats.wired_count));
 FUNC_4(-VAR_23, &VAR_12->stats.wired_count);
 FUNC_19(VAR_12, VAR_11.wired_mem, FUNC_16(VAR_23));

 return;
}
