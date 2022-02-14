
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef scalar_t__ vm_object_offset_t ;
struct TYPE_22__ {int pageout; scalar_t__ ref_count; scalar_t__ paging_in_progress; scalar_t__ activity_in_progress; scalar_t__ resident_page_count; scalar_t__ vo_shadow_offset; int memq; struct TYPE_22__* shadow; } ;
struct TYPE_21__ {int vmp_private; int vmp_free_when_done; int vmp_dirty; int vmp_busy; scalar_t__ vmp_q_state; int vmp_wire_count; int vmp_overwriting; void* vmp_cleaning; void* vmp_absent; scalar_t__ vmp_reference; scalar_t__ vmp_precious; scalar_t__ vmp_offset; int vmp_laundry; } ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_7 ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 () ;
 TYPE_1__* FUNC_17 (TYPE_2__*,scalar_t__) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 () ;
 int FUNC_21 (TYPE_1__*,int ) ;
 int FUNC_22 (TYPE_1__*) ;

void
FUNC_23(
 vm_object_t VAR_8)
{
 vm_object_t VAR_9;







 FUNC_7(VAR_8->pageout);
 VAR_9 = VAR_8->shadow;
 FUNC_11(VAR_9);

 while (!FUNC_18(&VAR_8->memq)) {
  vm_page_t VAR_10, VAR_11;
  vm_object_offset_t VAR_12;

  VAR_10 = (vm_page_t) FUNC_19(&VAR_8->memq);

  FUNC_7(VAR_10->vmp_private);
  FUNC_7(VAR_10->vmp_free_when_done);
  VAR_10->vmp_free_when_done = VAR_0;
  FUNC_7(!VAR_10->vmp_cleaning);
  FUNC_7(!VAR_10->vmp_laundry);

  VAR_12 = VAR_10->vmp_offset;
  FUNC_3(VAR_10);
  VAR_10 = VAR_5;

  VAR_11 = FUNC_17(VAR_9,
   VAR_12 + VAR_8->vo_shadow_offset);

  if(VAR_11 == VAR_5)
   continue;

  FUNC_7((VAR_11->vmp_dirty) || (VAR_11->vmp_precious) ||
    (VAR_11->vmp_busy && VAR_11->vmp_cleaning));





  FUNC_16();
  if (VAR_11->vmp_q_state == VAR_6)
   FUNC_22(VAR_11);
  if (VAR_11->vmp_free_when_done) {
   FUNC_7(VAR_11->vmp_busy);
   FUNC_7(VAR_11->vmp_q_state == VAR_3);
   FUNC_7(VAR_11->vmp_wire_count == 1);
   VAR_11->vmp_cleaning = VAR_0;
   VAR_11->vmp_free_when_done = VAR_0;
   if (FUNC_9(FUNC_4(VAR_11)) & VAR_2) {
    FUNC_2(VAR_11, VAR_0);
   } else {
    VAR_11->vmp_dirty = VAR_0;
   }

   if (VAR_11->vmp_dirty) {
    FUNC_21(VAR_11, VAR_1);
    FUNC_6(VAR_7);
    FUNC_1(VAR_11);
   } else {
           FUNC_15(VAR_11);
   }
   FUNC_20();
   continue;
  }






  if ((VAR_11->vmp_q_state == VAR_4) && !VAR_11->vmp_private) {
   if (VAR_11->vmp_reference)
    FUNC_13(VAR_11);
   else
    FUNC_14(VAR_11);
  }
  if (VAR_11->vmp_overwriting) {



   if (VAR_11->vmp_busy) {
    FUNC_8(FUNC_4(VAR_11));

    VAR_11->vmp_busy = VAR_0;
    VAR_11->vmp_absent = VAR_0;
   } else {





     FUNC_7(FUNC_5(VAR_11));
     FUNC_21(VAR_11, VAR_1);
   }
   VAR_11->vmp_overwriting = VAR_0;
  } else {
   VAR_11->vmp_dirty = VAR_0;
  }
  VAR_11->vmp_cleaning = VAR_0;




  FUNC_0(VAR_11);
  FUNC_20();
 }



 FUNC_10(VAR_9);
 FUNC_12(VAR_9);

 FUNC_7(VAR_8->ref_count == 0);
 FUNC_7(VAR_8->paging_in_progress == 0);
 FUNC_7(VAR_8->activity_in_progress == 0);
 FUNC_7(VAR_8->resident_page_count == 0);
 return;
}
