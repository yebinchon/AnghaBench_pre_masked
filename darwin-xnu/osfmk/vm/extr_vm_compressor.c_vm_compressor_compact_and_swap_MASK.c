
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int queue_entry_t ;
typedef int event_t ;
typedef scalar_t__ clock_sec_t ;
typedef int clock_nsec_t ;
typedef TYPE_1__* c_segment_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_14__ {int count_of_swapouts; int wasted_space_in_swapouts; int count_of_freed_segs; } ;
struct TYPE_13__ {scalar_t__ c_state; scalar_t__ c_generation_id; int c_busy; scalar_t__ c_creation_ts; int c_lock; scalar_t__ c_bytes_used; scalar_t__ c_overage_swap; int c_on_minorcompact_q; int c_age_list; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,scalar_t__,scalar_t__,int ,int ,int ) ;
 int VAR_9 ;
 int FUNC_5 (scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int,int) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int * VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_8 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,TYPE_1__*) ;
 TYPE_5__ VAR_20 ;
 scalar_t__ FUNC_11 (TYPE_1__*,scalar_t__) ;
 int FUNC_12 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_14 (scalar_t__*,int *) ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (int *,scalar_t__) ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ FUNC_17 () ;
 int VAR_33 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *,int ) ;
 scalar_t__ FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int *) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (scalar_t__) ;
 int FUNC_27 (scalar_t__) ;
 int FUNC_28 () ;
 scalar_t__ VAR_34 ;
 scalar_t__ FUNC_29 () ;
 scalar_t__ FUNC_30 () ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;

void
FUNC_31(boolean_t VAR_38)
{
 c_segment_t VAR_39, VAR_40;
 boolean_t VAR_41;
 clock_sec_t VAR_42;
 clock_nsec_t VAR_43;


 if (VAR_27 == VAR_12) {
  uint64_t VAR_44;

  VAR_44 = VAR_21;

  FUNC_4(FUNC_3(VAR_7, 11) | VAR_6, VAR_21,
          VAR_28, VAR_33, 0, 0);
  FUNC_16(&VAR_24, VAR_8);
  FUNC_4(FUNC_3(VAR_7, 11) | VAR_5, VAR_21, VAR_21 - VAR_44, 0, 0, 0);

  VAR_27 = VAR_8;
 }
 FUNC_27(VAR_38);

 FUNC_26(VAR_38);







 FUNC_14(&VAR_42, &VAR_43);

 while (!FUNC_20(&VAR_15) && VAR_25 == 0) {

  if (VAR_29 == VAR_12) {
   clock_sec_t VAR_45;

   if (FUNC_17()) {
    FUNC_2("vm_compressor_flush - hibernate_should_abort returned TRUE\n");
    break;
   }
   if (VAR_32 == VAR_12) {
    FUNC_2("vm_compressor_flush - out of swap space\n");
    break;
   }
   if (FUNC_29() == VAR_8) {
    FUNC_2("vm_compressor_flush - unpinned swap files\n");
    break;
   }
   if (VAR_31 == VAR_12 &&
       (VAR_35 == VAR_36)) {
    FUNC_2("vm_compressor_flush - out of pinned swap space\n");
    break;
   }
   FUNC_14(&VAR_45, &VAR_43);

   if (VAR_45 > VAR_30) {
    FUNC_2("vm_compressor_flush - failed to finish before deadline\n");
    break;
   }
  }
  if (VAR_22 >= VAR_4) {

   FUNC_7((event_t) &VAR_26, VAR_11, 100, 1000*VAR_9);

   FUNC_19(VAR_17);

   FUNC_24(VAR_10);

   FUNC_18(VAR_17);
  }



  FUNC_27(VAR_38);

  FUNC_26(VAR_38);

  if (VAR_22 >= VAR_4) {







   continue;
  }




  if (VAR_38 == VAR_8) {
   boolean_t VAR_46;

   FUNC_19(VAR_17);

   VAR_46 = FUNC_15();


   if (VAR_46 == VAR_12 && FUNC_30())
    FUNC_28();


   FUNC_18(VAR_17);

   if (VAR_46 == VAR_8)
    break;
  }
  if (FUNC_20(&VAR_15))
   break;
  VAR_39 = (c_segment_t) FUNC_22(&VAR_15);

  FUNC_6(VAR_39->c_state == VAR_0);

  if (VAR_38 == VAR_12 && VAR_39->c_generation_id > VAR_16)
   break;

  FUNC_18(&VAR_39->c_lock);

  if (VAR_39->c_busy) {

   FUNC_19(VAR_17);
   FUNC_13(VAR_39);
   FUNC_18(VAR_17);

   continue;
  }
  FUNC_0(VAR_39);

  if (FUNC_8(VAR_39, VAR_8, VAR_12, VAR_12)) {




   VAR_20.count_of_freed_segs++;
   continue;
  }



  VAR_41 = VAR_12;

  while (VAR_41 == VAR_12) {

   FUNC_6(VAR_39->c_busy);



   VAR_40 = (c_segment_t) FUNC_23(&VAR_39->c_age_list);

   if (FUNC_21(&VAR_15, (queue_entry_t)VAR_40))
    break;

   FUNC_6(VAR_40->c_state == VAR_0);

   if (FUNC_10(VAR_39, VAR_40) == VAR_8)
    break;

   FUNC_18(&VAR_40->c_lock);

   if (VAR_40->c_busy) {

    FUNC_19(VAR_17);
    FUNC_13(VAR_40);
    FUNC_18(VAR_17);

    continue;
   }

   FUNC_0(VAR_40);

   if (FUNC_8(VAR_40, VAR_8, VAR_12, VAR_12)) {




    VAR_20.count_of_freed_segs++;
    continue;
   }


   FUNC_19(VAR_17);



   VAR_41 = FUNC_9(VAR_39, VAR_40);

   FUNC_5(VAR_12);

   FUNC_18(&VAR_40->c_lock);
   if (FUNC_11(VAR_40, VAR_12))
    VAR_20.count_of_freed_segs++;

   FUNC_5(VAR_8);


   FUNC_18(VAR_17);

  }

  FUNC_18(&VAR_39->c_lock);

  FUNC_6(VAR_39->c_busy);
  FUNC_6(!VAR_39->c_on_minorcompact_q);

  if (VAR_13) {




   FUNC_12(VAR_39, VAR_2, VAR_8);
  } else {
   if ((VAR_37 == VAR_12 && VAR_18 < VAR_19)) {

    FUNC_6(VAR_14);





    if ((VAR_42 - VAR_39->c_creation_ts) >= VAR_34) {
     VAR_39->c_overage_swap = VAR_12;
     VAR_18++;
     FUNC_12(VAR_39, VAR_2, VAR_8);
    }
   }
  }
  if (VAR_39->c_state == VAR_0) {






   FUNC_12(VAR_39, VAR_1, VAR_8);
  } else {
   VAR_20.wasted_space_in_swapouts += VAR_3 - VAR_39->c_bytes_used;
   VAR_20.count_of_swapouts++;
  }
  FUNC_1(VAR_39);

  FUNC_19(&VAR_39->c_lock);

  if (VAR_22) {
   FUNC_19(VAR_17);

   FUNC_25((event_t)&VAR_23);

   FUNC_18(VAR_17);
  }
 }
}
