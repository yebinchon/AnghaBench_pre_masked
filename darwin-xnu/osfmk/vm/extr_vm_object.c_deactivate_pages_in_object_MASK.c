
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef scalar_t__ vm_object_size_t ;
typedef int vm_object_offset_t ;
typedef scalar_t__ vm_map_offset_t ;
struct vm_page_delayed_work {int dw_mask; } ;
struct pmap {int dummy; } ;
typedef int pmap_flush_context ;
typedef int chunk_state_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_16__ {unsigned int reusable; int reusable_count; } ;
struct TYPE_15__ {scalar_t__ reusable_page_count; scalar_t__ resident_page_count; scalar_t__ internal; int all_reusable; } ;
struct TYPE_14__ {scalar_t__ vmp_q_state; scalar_t__ vmp_reusable; void* vmp_dirty; void* vmp_precious; int vmp_free_when_done; int vmp_cleaning; int vmp_laundry; int vmp_busy; int vmp_gobbled; int vmp_private; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (unsigned int,int *) ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct pmap* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (struct vm_page_delayed_work*,TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (int ,int,int,void*) ;
 int FUNC_12 (struct pmap*,scalar_t__,scalar_t__,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_2__*,int ,struct vm_page_delayed_work*,int) ;
 TYPE_1__* FUNC_15 (TYPE_2__*,int ) ;
 TYPE_3__ VAR_17 ;

__attribute__((used)) static void
FUNC_16(
 vm_object_t VAR_18,
 vm_object_offset_t VAR_19,
 vm_object_size_t VAR_20,
 boolean_t VAR_21,
 boolean_t VAR_22,
 boolean_t VAR_23,
 chunk_state_t *VAR_24,
 pmap_flush_context *VAR_25,
 struct pmap *VAR_26,
 vm_map_offset_t VAR_27)
{
 vm_page_t VAR_28;
 int VAR_29;
 struct vm_page_delayed_work VAR_30[VAR_0];
 struct vm_page_delayed_work *VAR_31;
 int VAR_32;
 int VAR_33;
 unsigned int VAR_34 = 0;
 VAR_31 = &VAR_30[0];
 VAR_32 = 0;
 VAR_33 = FUNC_1(VAR_0);

 for(VAR_29 = 0; VAR_20 && FUNC_0(*VAR_24); VAR_29++, VAR_20 -= VAR_5, VAR_19 += VAR_5, VAR_27 += VAR_5) {






  if (FUNC_4(*VAR_24, VAR_29))
   continue;






         if ((VAR_28 = FUNC_15(VAR_18, VAR_19)) != VAR_14) {







   FUNC_2(*VAR_24, VAR_29);

   if (( !FUNC_8(VAR_28)) && (!VAR_28->vmp_private) && (!VAR_28->vmp_gobbled) && (!VAR_28->vmp_busy) &&
       (!VAR_28->vmp_laundry) && (!VAR_28->vmp_cleaning) && !(VAR_28->vmp_free_when_done)) {
    int VAR_35;
    int VAR_36;

    VAR_31->dw_mask = 0;

    VAR_36 = 0;
    VAR_35 = VAR_13;
    VAR_31->dw_mask |= VAR_1;

    if ((VAR_21) && (VAR_18->internal)) {
     if (VAR_16) {





      FUNC_13(FUNC_7(VAR_28));
     }
            VAR_28->vmp_precious = VAR_3;
            VAR_28->vmp_dirty = VAR_3;

     VAR_35 |= VAR_12;
     if (VAR_28->vmp_q_state == VAR_15) {







      VAR_31->dw_mask |= VAR_2;
     }

     FUNC_5(VAR_18, VAR_19);

     if (VAR_22 && !VAR_28->vmp_reusable) {
      FUNC_9(!VAR_23);
      FUNC_9(!VAR_18->all_reusable);
      VAR_28->vmp_reusable = VAR_10;
      VAR_18->reusable_page_count++;
      FUNC_9(VAR_18->resident_page_count >= VAR_18->reusable_page_count);
      VAR_34++;





      VAR_36 |= VAR_9;
     }
    }
    VAR_36 |= VAR_7;
    FUNC_11(FUNC_7(VAR_28),
         VAR_35,
         VAR_36,
         (void *)VAR_25);

    if ((VAR_28->vmp_q_state != VAR_15) && !(VAR_22 || VAR_23))
     VAR_31->dw_mask |= VAR_2;

    if (VAR_31->dw_mask)
     FUNC_6(VAR_31, VAR_28,
         VAR_32);

    if (VAR_32 >= VAR_33) {
     if (VAR_34) {
      FUNC_3(VAR_34,
           &VAR_17.reusable_count);
      VAR_17.reusable += VAR_34;
      VAR_34 = 0;
     }
     FUNC_14(VAR_18, VAR_11, &VAR_30[0], VAR_32);

     VAR_31 = &VAR_30[0];
     VAR_32 = 0;
    }
   }

  } else {







   if (FUNC_10(VAR_18, VAR_19)) {
    FUNC_2(*VAR_24, VAR_29);






    if ((VAR_21) && (VAR_18->internal)) {

     FUNC_5(VAR_18, VAR_19);

     if (VAR_26 != VAR_6) {







      FUNC_12(
       VAR_26,
       VAR_27,
       (VAR_27 +
        VAR_4),
       VAR_8);
     }
    }
   }
  }
 }

 if (VAR_34) {
  FUNC_3(VAR_34, &VAR_17.reusable_count);
  VAR_17.reusable += VAR_34;
  VAR_34 = 0;
 }

 if (VAR_32)
  FUNC_14(VAR_18, VAR_11, &VAR_30[0], VAR_32);
}
