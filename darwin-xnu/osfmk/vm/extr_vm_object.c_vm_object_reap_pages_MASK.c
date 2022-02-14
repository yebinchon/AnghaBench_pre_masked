
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_page_queue_entry_t ;
typedef TYPE_3__* vm_object_t ;
typedef int pmap_flush_context ;
typedef void* boolean_t ;
struct TYPE_21__ {int internal; int alive; int memq; } ;
struct TYPE_19__ {scalar_t__ next; scalar_t__ prev; } ;
struct TYPE_20__ {void* vmp_pmapped; struct TYPE_20__* vmp_snext; TYPE_1__ vmp_pageq; scalar_t__ vmp_laundry; void* vmp_free_when_done; int vmp_error; int vmp_precious; int vmp_dirty; int vmp_wpmapped; int vmp_fictitious; int vmp_private; int vmp_absent; scalar_t__ vmp_busy; scalar_t__ vmp_cleaning; int vmp_listq; } ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (TYPE_2__*,void*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* VAR_5 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_7 (int) ;
 int VAR_7 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int,void*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_3__*,int ) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_16 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (int *,int ) ;
 scalar_t__ FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *) ;
 int FUNC_21 (TYPE_2__*,void*) ;
 int FUNC_22 () ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*,void*) ;

void
FUNC_25(
 vm_object_t VAR_13,
 int VAR_14)
{
 vm_page_t VAR_15;
 vm_page_t VAR_16;
 vm_page_t VAR_17 = VAR_5;
 int VAR_18;
 boolean_t VAR_19;
 pmap_flush_context VAR_20;

 if (VAR_14 == 131) {




  VAR_19 = VAR_4;
 } else {







  VAR_19 = VAR_0;
 }

restart_after_sleep:
 if (FUNC_17(&VAR_13->memq))
  return;
 VAR_18 = FUNC_0(VAR_6);

 if (VAR_14 == 130)
  FUNC_11(&VAR_20);

 FUNC_16();

 VAR_16 = (vm_page_t)FUNC_19(&VAR_13->memq);

 while (!FUNC_18(&VAR_13->memq, (vm_page_queue_entry_t)VAR_16)) {

  VAR_15 = VAR_16;
  VAR_16 = (vm_page_t)FUNC_20(&VAR_16->vmp_listq);

  if (--VAR_18 == 0) {

   FUNC_22();

   if (VAR_17) {

    if (VAR_14 == 130) {
     FUNC_10(&VAR_20);
     FUNC_11(&VAR_20);
    }





    FUNC_2(VAR_17,
           VAR_19);
   } else
    FUNC_8(0);

   VAR_18 = FUNC_0(VAR_6);

   FUNC_16();
  }
  if (VAR_14 == 131 || VAR_14 == 128) {

   if (VAR_15->vmp_busy || VAR_15->vmp_cleaning) {

    FUNC_22();



    FUNC_2(VAR_17,
           VAR_19);

    FUNC_1(VAR_13, VAR_15, VAR_3);

    goto restart_after_sleep;
   }
   if (VAR_15->vmp_laundry)
    FUNC_24(VAR_15, VAR_4);
  }
  switch (VAR_14) {

  case 131:
   if (FUNC_6(VAR_15)) {






    continue;
   }
   break;

  case 130:
   if (FUNC_6(VAR_15)) {



    VAR_12++;
    continue;
   }
   if (VAR_15->vmp_laundry && !VAR_15->vmp_busy && !VAR_15->vmp_cleaning)
    FUNC_24(VAR_15, VAR_4);

   if (VAR_15->vmp_cleaning || VAR_15->vmp_laundry || VAR_15->vmp_absent) {




    VAR_11++;
    continue;
   }
   if (VAR_15->vmp_busy) {






    if (FUNC_5(VAR_15))
     FUNC_14(VAR_15);
    VAR_9++;
    continue;
   }

   FUNC_7(FUNC_4(VAR_15) != VAR_7);




   if (VAR_15->vmp_pmapped == VAR_4) {



    FUNC_9(FUNC_3(VAR_15), VAR_1 | VAR_2, (void *)&VAR_20);
   }
   VAR_10++;

   break;

  case 128:
   if (VAR_15->vmp_absent || VAR_15->vmp_private) {







    break;
   }
   if (VAR_15->vmp_fictitious) {
    FUNC_7 (FUNC_3(VAR_15) == VAR_8);
    break;
   }
   if (!VAR_15->vmp_dirty && VAR_15->vmp_wpmapped)
    VAR_15->vmp_dirty = FUNC_12(FUNC_3(VAR_15));

   if ((VAR_15->vmp_dirty || VAR_15->vmp_precious) && !VAR_15->vmp_error && VAR_13->alive) {

    FUNC_7(!VAR_13->internal);

    VAR_15->vmp_free_when_done = VAR_4;

    if (!VAR_15->vmp_laundry) {
     FUNC_21(VAR_15, VAR_4);




     FUNC_23(VAR_15);
    }
    FUNC_22();



    FUNC_2(VAR_17,
           VAR_19);

    FUNC_13(VAR_13, VAR_3);

    goto restart_after_sleep;
   }
   break;

  case 129:
   break;
  }
  FUNC_15(VAR_15);
  FUNC_7(VAR_15->vmp_pageq.next == 0 && VAR_15->vmp_pageq.prev == 0);




  VAR_15->vmp_snext = VAR_17;
  VAR_17 = VAR_15;
 }
 FUNC_22();




 if (VAR_14 == 130)
  FUNC_10(&VAR_20);

 FUNC_2(VAR_17,
        VAR_19);
}
