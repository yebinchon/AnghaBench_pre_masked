
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef int vm_object_offset_t ;
typedef int ppnum_t ;
typedef int kern_return_t ;
struct TYPE_16__ {int vo_shadow_offset; scalar_t__ phys_contiguous; } ;
struct TYPE_15__ {int vmp_busy; scalar_t__ vmp_pmapped; void* vmp_absent; void* vmp_precious; void* vmp_free_when_done; void* vmp_dirty; scalar_t__ vmp_cleaning; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,void*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* VAR_16 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_1__* FUNC_9 (TYPE_2__*,int ) ;

kern_return_t
FUNC_10(
 vm_object_t VAR_17,
 vm_object_offset_t VAR_18,
 int VAR_19,
 ppnum_t *VAR_20,
 int *VAR_21)
{
 vm_page_t VAR_22;

 FUNC_7(VAR_17);

 if(VAR_19 & VAR_13) {
  if(VAR_17->phys_contiguous) {
   if (VAR_20) {
    *VAR_20 = (ppnum_t)
     (VAR_17->vo_shadow_offset >> VAR_4);
   }
   FUNC_8(VAR_17);
   return VAR_3;
  } else {
   FUNC_8(VAR_17);
   return VAR_2;
  }
 }
 if(VAR_17->phys_contiguous) {
  FUNC_8(VAR_17);
  return VAR_2;
 }

 while(VAR_6) {
  if((VAR_22 = FUNC_9(VAR_17,VAR_18)) == VAR_16) {
   FUNC_8(VAR_17);
   return VAR_1;
  }


  if((VAR_22->vmp_busy || VAR_22->vmp_cleaning) &&
      (((VAR_19 & VAR_15) &&
      (VAR_19 & VAR_8)) || (VAR_19 & VAR_11))) {


   FUNC_0(VAR_17, VAR_22, VAR_5);
   continue;
  }

  if (VAR_19 & VAR_11) {
   if (VAR_22->vmp_pmapped == VAR_6)
           FUNC_6(FUNC_4(VAR_22));

   FUNC_3(VAR_22);
   break;
  }

  if (VAR_21) {
          *VAR_21 = 0;




   if(VAR_22->vmp_dirty) *VAR_21 |= VAR_10;
   if(VAR_22->vmp_free_when_done) *VAR_21 |= VAR_12;
   if(VAR_22->vmp_precious) *VAR_21 |= VAR_14;
   if(VAR_22->vmp_absent) *VAR_21 |= VAR_7;
   if(VAR_22->vmp_busy) *VAR_21 |= VAR_8;
  }



  if(VAR_19 & VAR_15) {







   FUNC_5(VAR_22->vmp_busy || (VAR_19 & VAR_8));
   if (VAR_19 & VAR_10) {
    FUNC_2(VAR_22, VAR_0);
   }
   if (VAR_19 & VAR_12) VAR_22->vmp_free_when_done = VAR_6;
   if (VAR_19 & VAR_14) VAR_22->vmp_precious = VAR_6;
   if (VAR_19 & VAR_7) VAR_22->vmp_absent = VAR_6;
   if (VAR_19 & VAR_8) VAR_22->vmp_busy = VAR_6;
  }

  if(VAR_19 & VAR_9) {
   FUNC_5(VAR_22->vmp_busy);
   if (VAR_19 & VAR_10) VAR_22->vmp_dirty = VAR_0;
   if (VAR_19 & VAR_12) VAR_22->vmp_free_when_done = VAR_0;
   if (VAR_19 & VAR_14) VAR_22->vmp_precious = VAR_0;
   if (VAR_19 & VAR_7) VAR_22->vmp_absent = VAR_0;
   if (VAR_19 & VAR_8) {
           VAR_22->vmp_busy = VAR_0;
    FUNC_1(VAR_22);
   }
  }
  if (VAR_20) {




   FUNC_5(VAR_22->vmp_busy);
   *VAR_20 = FUNC_4(VAR_22);
  }

  break;
 }

 FUNC_8(VAR_17);
 return VAR_3;

}
