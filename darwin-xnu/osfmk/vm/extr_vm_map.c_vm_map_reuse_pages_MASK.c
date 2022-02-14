
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ vm_object_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef TYPE_1__* vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_2__* vm_map_entry_t ;
typedef int kern_return_t ;
struct TYPE_18__ {int reuse_pages_success; int reuse_pages_failure; } ;
struct TYPE_17__ {scalar_t__ vme_start; int is_sub_map; int vme_end; struct TYPE_17__* vme_next; } ;
struct TYPE_16__ {scalar_t__ pmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,scalar_t__,TYPE_2__**) ;
 TYPE_2__* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_13 (scalar_t__) ;
 TYPE_3__ VAR_7 ;

__attribute__((used)) static kern_return_t
FUNC_14(
 vm_map_t VAR_8,
 vm_map_offset_t VAR_9,
 vm_map_offset_t VAR_10)
{
 vm_map_entry_t VAR_11;
 vm_object_t VAR_12;
 vm_object_offset_t VAR_13, VAR_14;






 FUNC_7(VAR_8);
 FUNC_5(VAR_8->pmap != VAR_6);







 if (!FUNC_8(VAR_8, VAR_9, VAR_10, &VAR_11)) {
  FUNC_10(VAR_8);
  VAR_7.reuse_pages_failure++;
  return VAR_0;
 }




 for (; VAR_11 != FUNC_9(VAR_8) && VAR_11->vme_start < VAR_10;
      VAR_11 = VAR_11->vme_next) {



  if (! FUNC_6(VAR_11)) {
   FUNC_10(VAR_8);
   VAR_7.reuse_pages_failure++;
   return VAR_0;
  }






  if (VAR_11->vme_start < VAR_9) {
   VAR_13 = VAR_9 - VAR_11->vme_start;
  } else {
   VAR_13 = 0;
  }
  VAR_14 = FUNC_0(VAR_10, VAR_11->vme_end) - VAR_11->vme_start;
  VAR_13 += FUNC_4(VAR_11);
  VAR_14 += FUNC_4(VAR_11);

  FUNC_5(!VAR_11->is_sub_map);
  VAR_12 = FUNC_3(VAR_11);
  if (VAR_12 != VAR_5) {
   FUNC_11(VAR_12);
   FUNC_12(VAR_12, VAR_13, VAR_14,
           VAR_2);
   FUNC_13(VAR_12);
  }

  if (FUNC_1(VAR_11) == VAR_3) {
   FUNC_2(VAR_11, VAR_4);
  }
 }

 FUNC_10(VAR_8);
 VAR_7.reuse_pages_success++;
 return VAR_1;
}
