
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef int vm_object_offset_t ;
typedef scalar_t__ ppnum_t ;
typedef int kern_return_t ;
struct TYPE_16__ {int vo_shadow_offset; scalar_t__ vo_size; scalar_t__ paging_offset; int phys_contiguous; int private; } ;
struct TYPE_15__ {void* vmp_busy; void* vmp_unusual; void* vmp_fictitious; void* vmp_private; scalar_t__ vmp_pmapped; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_1__* FUNC_7 () ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_9 () ;
 TYPE_1__* FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;

kern_return_t
FUNC_13(
  vm_object_t VAR_8,
  vm_object_offset_t VAR_9,
  ppnum_t VAR_10,
  vm_size_t VAR_11)
{
 ppnum_t VAR_12;
 vm_object_offset_t VAR_13;


 if (!VAR_8->private)
  return VAR_1;

 VAR_12 = VAR_10;

 FUNC_5(VAR_8);

 if (!VAR_8->phys_contiguous) {
  vm_page_t VAR_14;

  if ((VAR_13 = FUNC_4(VAR_9)) != VAR_9) {
   FUNC_6(VAR_8);
   return VAR_1;
  }
  VAR_13 += VAR_8->paging_offset;

  while (VAR_11) {
   VAR_14 = FUNC_10(VAR_8, VAR_13);

   if (VAR_14 != VAR_6) {
    if (VAR_14->vmp_fictitious) {
     if (FUNC_0(VAR_14) != VAR_7) {

      FUNC_9();
      VAR_14->vmp_private = VAR_5;
      FUNC_12();

      VAR_14->vmp_fictitious = VAR_0;
      FUNC_1(VAR_14, VAR_12);
     }
    } else if (FUNC_0(VAR_14) != VAR_12) {

            if ( !VAR_14->vmp_private) {



      FUNC_2("vm_object_populate_with_private - %p not private", VAR_14);
     }
     if (VAR_14->vmp_pmapped) {



             FUNC_3(FUNC_0(VAR_14));
     }
     FUNC_1(VAR_14, VAR_12);
    }

   } else {
    while ((VAR_14 = FUNC_7()) == VAR_6)
                   FUNC_11();





    VAR_14->vmp_private = VAR_5;
    VAR_14->vmp_fictitious = VAR_0;
    FUNC_1(VAR_14, VAR_12);
    VAR_14->vmp_unusual = VAR_5;
    VAR_14->vmp_busy = VAR_0;

        FUNC_8(VAR_14, VAR_8, VAR_13);
   }
   VAR_12++;
   VAR_13 += VAR_4;
   VAR_11 -= VAR_4;
  }
 } else {
  VAR_8->vo_shadow_offset = (vm_object_offset_t)VAR_10 << VAR_3;
  VAR_8->vo_size = VAR_11;
 }
 FUNC_6(VAR_8);

 return VAR_2;
}
