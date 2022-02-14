
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_page_queue_entry_t ;
typedef TYPE_2__* vm_object_t ;
typedef int vm_object_offset_t ;
struct vm_pageout_queue {int pgo_laundry; scalar_t__ pgo_draining; } ;
typedef int event_t ;
struct TYPE_16__ {scalar_t__ pager; int memq; int pager_initialized; int alive; scalar_t__ terminating; int internal; } ;
struct TYPE_15__ {scalar_t__ vmp_q_state; scalar_t__ vmp_pmapped; scalar_t__ vmp_precious; scalar_t__ vmp_dirty; scalar_t__ vmp_cleaning; scalar_t__ vmp_error; int vmp_unusual; scalar_t__ vmp_absent; scalar_t__ vmp_busy; scalar_t__ vmp_fictitious; scalar_t__ vmp_laundry; int vmp_listq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_3 (struct vm_pageout_queue*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int,int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 () ;
 int FUNC_15 (int *,int ) ;
 scalar_t__ FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (TYPE_1__*,scalar_t__) ;
 int FUNC_19 () ;
 int FUNC_20 (TYPE_1__*) ;
 struct vm_pageout_queue VAR_12 ;

void
FUNC_21(
 vm_object_t VAR_13)
{
 vm_page_t VAR_14, VAR_15;
 struct vm_pageout_queue *VAR_16;

 if (!VAR_7)
  return;

 VAR_16 = &VAR_12;

 FUNC_5(VAR_13 != VAR_9 );

 FUNC_12(VAR_13);

 if (!VAR_13->internal ||
     VAR_13->terminating ||
     !VAR_13->alive) {
  FUNC_13(VAR_13);
  return;
 }

 if (!VAR_13->pager_initialized || VAR_13->pager == VAR_1) {

  if (!VAR_13->pager_initialized) {

   FUNC_10(VAR_13, (vm_object_offset_t) 0, VAR_6);

   if (!VAR_13->pager_initialized)
    FUNC_11(VAR_13);
  }

  if (!VAR_13->pager_initialized || VAR_13->pager == VAR_1) {
   FUNC_13(VAR_13);
   return;
  }
 }

ReScan:
 VAR_15 = (vm_page_t)FUNC_16(&VAR_13->memq);

 while (!FUNC_15(&VAR_13->memq, (vm_page_queue_entry_t)VAR_15)) {
  VAR_14 = VAR_15;
  VAR_15 = (vm_page_t)FUNC_17(&VAR_15->vmp_listq);

  FUNC_5(VAR_14->vmp_q_state != VAR_10);

  if ((VAR_14->vmp_q_state == VAR_11) ||
      VAR_14->vmp_cleaning ||
      VAR_14->vmp_laundry ||
      VAR_14->vmp_busy ||
      VAR_14->vmp_absent ||
      VAR_14->vmp_error ||
      VAR_14->vmp_fictitious ||
      FUNC_4(VAR_14)) {



   continue;
  }
  if (FUNC_9()) {
   break;
  }



  FUNC_14();

  if (FUNC_3(VAR_16)) {

   VAR_16->pgo_draining = VAR_6;

   FUNC_6((event_t) (&VAR_16->pgo_laundry + 1),
        VAR_5);
   FUNC_19();
   FUNC_13(VAR_13);

   FUNC_8(VAR_4);

   FUNC_12(VAR_13);
   goto ReScan;
  }

  FUNC_5(!VAR_14->vmp_fictitious);
  FUNC_5(!VAR_14->vmp_busy);
  FUNC_5(!VAR_14->vmp_absent);
  FUNC_5(!VAR_14->vmp_unusual);
  FUNC_5(!VAR_14->vmp_error);
  FUNC_5(!FUNC_4(VAR_14));
  FUNC_5(!VAR_14->vmp_cleaning);

  if (VAR_14->vmp_pmapped == VAR_6) {
   int VAR_17;
   int VAR_18;





   VAR_18 =
    VAR_3;
   if (VAR_14->vmp_dirty || VAR_14->vmp_precious) {





    VAR_18 = VAR_2;
   }
   VAR_17 = FUNC_7(FUNC_2(VAR_14),
              VAR_18,
              ((void*)0));
   if (VAR_17 & VAR_8) {
    FUNC_0(VAR_14, VAR_0);
   }
  }

  if (!VAR_14->vmp_dirty && !VAR_14->vmp_precious) {
   FUNC_19();
   FUNC_1(VAR_14);
   continue;
  }
  FUNC_18(VAR_14, VAR_6);

  FUNC_20(VAR_14);

  FUNC_19();
 }
 FUNC_13(VAR_13);
}
