
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef scalar_t__ uint32_t ;
typedef int kern_return_t ;
struct TYPE_15__ {scalar_t__ resident_page_count; scalar_t__ phys_contiguous; } ;
struct TYPE_14__ {scalar_t__ vmp_pmapped; scalar_t__ vmp_busy; int vmp_absent; scalar_t__ vmp_laundry; scalar_t__ vmp_cleaning; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_11 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_1__* FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int ) ;

kern_return_t
FUNC_9(
 vm_object_t VAR_12,
 vm_object_offset_t VAR_13,
 vm_object_offset_t VAR_14,
 int VAR_15,
 uint32_t *VAR_16)
{
        vm_object_offset_t VAR_17;
 vm_page_t VAR_18;

 if (VAR_14 - VAR_13 > (uint32_t) -1) {

  return VAR_1;
 }
 if (VAR_12->resident_page_count == 0) {
         if (VAR_16) {
          if (VAR_15 & VAR_10) {
           *VAR_16 = 0;
   } else {
           *VAR_16 = (uint32_t) (VAR_14 - VAR_13);
    FUNC_3(*VAR_16 == (VAR_14 - VAR_13));
   }
  }
  return VAR_3;
 }
 FUNC_5(VAR_12);

 if (VAR_12->phys_contiguous) {
  FUNC_6(VAR_12);
         return VAR_2;
 }

 VAR_17 = VAR_13 & ~VAR_4;

 while (VAR_17 < VAR_14) {
  VAR_18 = FUNC_7(VAR_12, VAR_17);
  if (VAR_18 != VAR_11) {
   if (VAR_15 & VAR_9) {
    if (VAR_18->vmp_busy || VAR_18->vmp_cleaning) {




            FUNC_0(VAR_12, VAR_18, VAR_6);






     continue;
    }
    if (VAR_18->vmp_laundry)
     FUNC_8(VAR_18, VAR_0);

    if (VAR_18->vmp_pmapped == VAR_7)
            FUNC_4(FUNC_2(VAR_18));

    FUNC_1(VAR_18);

   } else if ((VAR_15 & VAR_8)
        && (!VAR_18->vmp_absent || VAR_18->vmp_busy)) {
    break;
   }
  } else if (VAR_15 & VAR_10)
          break;

  VAR_17 += VAR_5;
 }
 FUNC_6(VAR_12);

 if (VAR_16) {
         if (VAR_17 > VAR_14)
          VAR_17 = VAR_14;
  if(VAR_17 > VAR_13) {
   *VAR_16 = (uint32_t) (VAR_17 - VAR_13);
   FUNC_3(*VAR_16 == (VAR_17 - VAR_13));
  } else {
   *VAR_16 = 0;
  }
 }
 return VAR_3;
}
