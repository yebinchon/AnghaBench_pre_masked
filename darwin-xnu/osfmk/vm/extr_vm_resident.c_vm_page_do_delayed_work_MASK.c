
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int vm_tag_t ;
typedef TYPE_2__* vm_page_t ;
typedef int vm_object_t ;
struct vm_page_delayed_work {int dw_mask; TYPE_2__* dw_m; } ;
typedef void* boolean_t ;
struct TYPE_20__ {scalar_t__ next; scalar_t__ prev; } ;
struct TYPE_21__ {scalar_t__ vmp_q_state; void* vmp_busy; void* vmp_reference; struct TYPE_21__* vmp_snext; TYPE_1__ vmp_pageq; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 int FUNC_0 (TYPE_2__*) ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* VAR_20 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_23 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,void*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,void*) ;
 int FUNC_14 (TYPE_2__*,void*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 () ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*,void*) ;
 int FUNC_19 (TYPE_2__*,void*) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (TYPE_2__*,void*) ;
 int FUNC_23 (TYPE_2__*,int ,void*) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (TYPE_2__*) ;

void
FUNC_26(
 vm_object_t VAR_26,
 vm_tag_t VAR_27,
 struct vm_page_delayed_work *VAR_28,
 int VAR_29)
{
 int VAR_30;
 vm_page_t VAR_31;
        vm_page_t VAR_32 = VAR_20;
 if (!FUNC_20()) {
  FUNC_9(VAR_26);

  FUNC_16();

  for (VAR_30 = 0; ; VAR_30++) {
   if (!FUNC_8(VAR_26) &&
       FUNC_4(VAR_26))
    break;
   FUNC_21();
   FUNC_6(VAR_30);
   FUNC_16();
  }
 }
 for (VAR_30 = 0; VAR_30 < VAR_29; VAR_30++, VAR_28++) {

  VAR_31 = VAR_28->dw_m;

  if (VAR_28->dw_mask & VAR_14)
   FUNC_24(VAR_31);




  if (VAR_28->dw_mask & VAR_13)
   FUNC_23(VAR_31, VAR_27, VAR_16);
  else if (VAR_28->dw_mask & VAR_12) {
   boolean_t VAR_33;

   VAR_33 = (VAR_28->dw_mask & (VAR_9 | VAR_8)) ? VAR_16 : VAR_17;

   FUNC_22(VAR_31, VAR_33);
  }
  if (VAR_28->dw_mask & VAR_9) {
   FUNC_15(VAR_31);

   FUNC_5(VAR_31->vmp_pageq.next == 0 && VAR_31->vmp_pageq.prev == 0);




   VAR_31->vmp_snext = VAR_32;
   VAR_32 = VAR_31;
  } else {
   if (VAR_28->dw_mask & VAR_8)
    FUNC_11(VAR_31, VAR_16);
   else if (VAR_28->dw_mask & VAR_7) {
    if (VAR_31->vmp_q_state != VAR_21) {
     FUNC_10(VAR_31);
    }
   }
   else if (VAR_28->dw_mask & VAR_11)
    FUNC_19(VAR_31, VAR_17);
   else if (VAR_28->dw_mask & VAR_4) {







    int VAR_34 = FUNC_7(FUNC_2(VAR_31));

    if ((VAR_34 & VAR_19)) {




            FUNC_1(VAR_25, 1);
     FUNC_1(VAR_24, 1);

     if (VAR_31->vmp_q_state != VAR_21)
      FUNC_10(VAR_31);
    } else {
     VAR_31->vmp_reference = VAR_16;
     FUNC_12(VAR_31);
    }
   }
   else if (VAR_28->dw_mask & VAR_10)
    FUNC_17(VAR_31);
   else if (VAR_28->dw_mask & VAR_1) {
    if (VAR_31->vmp_q_state != VAR_22)
     FUNC_18(VAR_31, VAR_17);
   }
   if (VAR_28->dw_mask & VAR_6)
    VAR_31->vmp_reference = VAR_17;
   else if (VAR_28->dw_mask & VAR_3)
    VAR_31->vmp_reference = VAR_16;

   if (VAR_28->dw_mask & VAR_5) {
    if (VAR_31->vmp_q_state != VAR_22) {
     FUNC_18(VAR_31, VAR_16);

     FUNC_5(FUNC_3(VAR_31) != VAR_23);

     FUNC_13(VAR_31, VAR_16);
    }
   }
   if (VAR_28->dw_mask & VAR_2)
    VAR_31->vmp_busy = VAR_16;

   if (VAR_28->dw_mask & VAR_0)
    FUNC_0(VAR_31);
  }
 }
 FUNC_21();

 if (VAR_32)
  FUNC_14(VAR_32, VAR_17);

 VAR_18;

}
