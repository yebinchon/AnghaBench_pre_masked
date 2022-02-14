
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_2__* pv_rooted_entry_t ;
typedef TYPE_3__* pv_hashed_entry_t ;
typedef char pt_entry_t ;
typedef scalar_t__ ppnum_t ;
typedef TYPE_4__* pmap_t ;
typedef int pmap_flush_context ;
typedef scalar_t__ boolean_t ;
struct TYPE_20__ {int phys_footprint; int internal; } ;
struct TYPE_16__ {scalar_t__ reusable; scalar_t__ internal; scalar_t__ external; } ;
struct TYPE_19__ {TYPE_1__ stats; } ;
struct TYPE_18__ {int qlink; TYPE_4__* pmap; } ;
struct TYPE_17__ {scalar_t__ pmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char VAR_3 ;
 scalar_t__ FUNC_0 (int,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char VAR_7 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,...) ;
 int FUNC_9 (TYPE_4__*,scalar_t__,scalar_t__) ;
 int FUNC_10 (TYPE_4__*,scalar_t__,scalar_t__,int *) ;
 int VAR_13 ;
 char FUNC_11 (scalar_t__) ;
 char FUNC_12 (scalar_t__) ;
 char FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 scalar_t__ VAR_14 ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 char FUNC_17 (char) ;
 scalar_t__ FUNC_18 (TYPE_4__*) ;
 TYPE_4__* VAR_15 ;
 TYPE_2__* FUNC_19 (int) ;
 int FUNC_20 (char*,scalar_t__,int,unsigned int,void*) ;
 scalar_t__ FUNC_21 (int) ;
 int VAR_16 ;
 int FUNC_22 () ;
 int FUNC_23 (TYPE_4__*,int ,scalar_t__) ;
 int FUNC_24 (TYPE_4__*,int ,scalar_t__) ;
 char* VAR_17 ;
 char* FUNC_25 (TYPE_4__*,scalar_t__) ;
 int FUNC_26 (char*,char,int ) ;
 int FUNC_27 (scalar_t__) ;
 scalar_t__ FUNC_28 (int *) ;
 TYPE_5__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;

void
FUNC_29(
 ppnum_t VAR_21,
 int VAR_22,
 unsigned int VAR_23,
 void *VAR_24)
{
 pv_rooted_entry_t VAR_25;
 pv_hashed_entry_t VAR_26;
 pt_entry_t *VAR_27 = ((void*)0);
 int VAR_28;
 pmap_t VAR_29;
 char VAR_30 = 0;
 boolean_t VAR_31, VAR_32, VAR_33, VAR_34;
 int VAR_35;
 boolean_t VAR_36 = VAR_2;

 if ((VAR_22 & VAR_5) &&
     (VAR_23 & VAR_11) &&
     VAR_24 == ((void*)0)) {
  FUNC_20("phys_attribute_clear(0x%x,0x%x,0x%x,%p): "
        "should not clear 'modified' without flushing TLBs\n",
        VAR_21, VAR_22, VAR_23, VAR_24);
 }


 FUNC_16((VAR_22 & ~(VAR_6 | VAR_5)) == 0);

 VAR_35 = (unsigned)FUNC_21(VAR_22 & (VAR_5 | VAR_6));

 FUNC_22();
 FUNC_16(VAR_21 != VAR_19);
 if (VAR_21 == VAR_20)
  return;

 VAR_28 = FUNC_27(VAR_21);

 if (!FUNC_2(VAR_28)) {



  return;
 }

 FUNC_8(FUNC_6(VAR_13) | VAR_1, VAR_21, VAR_22);

 VAR_25 = FUNC_19(VAR_28);

 FUNC_4(VAR_28);







 if (VAR_25->pmap != VAR_8) {




  VAR_31 = FUNC_1(VAR_28);
  VAR_32 = FUNC_3(VAR_28);

  VAR_26 = (pv_hashed_entry_t)VAR_25;

  do {
   vm_map_offset_t VAR_37;
   char VAR_38;

   VAR_29 = VAR_26->pmap;
   VAR_34 = FUNC_18(VAR_29);
   VAR_33 = FUNC_0(VAR_28, VAR_26);
   VAR_37 = FUNC_14(VAR_26);
   VAR_38 = 0;

   if (VAR_22) {
    VAR_27 = FUNC_25(VAR_29, VAR_37);

    VAR_38 = (*VAR_27 & (FUNC_12(VAR_34) | FUNC_11(VAR_34)));

    if (!VAR_34) {
     VAR_30 |= VAR_38;
    } else {
     VAR_30 |= FUNC_17(VAR_38);
     if (!VAR_16 && (VAR_38 & VAR_3)) {
      VAR_36 = VAR_14;
     }
    }

    if (!VAR_34) {
     VAR_38 &= VAR_22;
    } else {
     VAR_38 &= VAR_35;
    }
   }
   if (VAR_23 & VAR_10)
           VAR_38 |= FUNC_13(VAR_34);




   if (VAR_38) {
    FUNC_26(VAR_27, VAR_38, 0);







    if (! (VAR_23 & VAR_11)) {

     FUNC_9(VAR_29,
        VAR_37,
        VAR_37 + VAR_4);
    } else if (VAR_24) {

     FUNC_10(
      VAR_29,
      VAR_37,
      VAR_37 + VAR_4,
      (pmap_flush_context *)VAR_24);
    } else {

    }
   }


   if ((VAR_23 & VAR_9) &&
       VAR_32 &&
       VAR_29 != VAR_15) {

    FUNC_16(VAR_29->stats.reusable > 0);
    FUNC_5(-1, &VAR_29->stats.reusable);
    if (VAR_31) {

     FUNC_5(+1, &VAR_29->stats.internal);
     FUNC_7(VAR_29->stats.internal);
     FUNC_16(VAR_29->stats.internal > 0);
     if (VAR_33) {

     } else {
      FUNC_23(VAR_29,
           VAR_18.internal,
           VAR_4);
      FUNC_23(
       VAR_29,
       VAR_18.phys_footprint,
       VAR_4);
     }
    } else {

     FUNC_5(+1, &VAR_29->stats.external);
     FUNC_7(VAR_29->stats.external);
     FUNC_16(VAR_29->stats.external > 0);
    }
   } else if ((VAR_23 & VAR_12) &&
       !VAR_32 &&
       VAR_29 != VAR_15) {

    FUNC_5(+1, &VAR_29->stats.reusable);
    FUNC_7(VAR_29->stats.reusable);
    FUNC_16(VAR_29->stats.reusable > 0);
    if (VAR_31) {

     FUNC_16(VAR_29->stats.internal > 0);
     FUNC_5(-1, &VAR_29->stats.internal);
     if (VAR_33) {

     } else {
      FUNC_24(VAR_29,
          VAR_18.internal,
          VAR_4);
      FUNC_24(
       VAR_29,
       VAR_18.phys_footprint,
       VAR_4);
     }
    } else {

     FUNC_16(VAR_29->stats.external > 0);
     FUNC_5(-1, &VAR_29->stats.external);
    }
   }

   VAR_26 = (pv_hashed_entry_t)FUNC_28(&VAR_26->qlink);

  } while (VAR_26 != (pv_hashed_entry_t)VAR_25);
 }




 VAR_17[VAR_28] |= VAR_30;

 if (VAR_36) {






  VAR_22 &= ~VAR_5;
 }
 VAR_17[VAR_28] &= ~(VAR_22);


 if (VAR_23 & VAR_9) {
  VAR_17[VAR_28] &= ~VAR_7;
 } else if (VAR_23 & VAR_12) {
  VAR_17[VAR_28] |= VAR_7;
 }

 FUNC_15(VAR_28);

 FUNC_8(FUNC_6(VAR_13) | VAR_0);
}
