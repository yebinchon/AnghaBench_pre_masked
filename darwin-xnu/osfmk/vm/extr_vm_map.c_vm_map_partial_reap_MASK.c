
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_20__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef TYPE_2__* vm_map_t ;
typedef TYPE_3__* vm_map_entry_t ;
typedef int kern_return_t ;
struct TYPE_25__ {int vme_end; int vme_start; int is_sub_map; struct TYPE_25__* vme_next; } ;
struct TYPE_22__ {int entries_pageable; } ;
struct TYPE_24__ {TYPE_1__ hdr; int max_offset; int min_offset; } ;
struct TYPE_23__ {scalar_t__ internal; int ref_count; int pager; scalar_t__ resident_page_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_20__* FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_3__* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;

kern_return_t FUNC_12(vm_map_t VAR_8, unsigned int *VAR_9, unsigned int *VAR_10)
{
 vm_map_entry_t VAR_11 = VAR_4;
 vm_map_entry_t VAR_12;
 kern_return_t VAR_13 = VAR_1;
 vm_map_t VAR_14;

 FUNC_8(VAR_8);





 VAR_14 = FUNC_3(VAR_2,
    VAR_8->min_offset,
    VAR_8->max_offset,
    VAR_8->hdr.entries_pageable);

 if (VAR_14 == VAR_5) {
  return VAR_0;
 }

 FUNC_9(VAR_14,
         FUNC_1(VAR_8));
 FUNC_6(VAR_14);

 for (VAR_11 = FUNC_7(VAR_8);
      VAR_11 != FUNC_10(VAR_8);
      VAR_11 = VAR_12) {
  VAR_12 = VAR_11->vme_next;

  if (FUNC_0(VAR_11) &&
      !VAR_11->is_sub_map &&
      (FUNC_0(VAR_11)->internal == VAR_3) &&
      (FUNC_0(VAR_11)->ref_count == 1)) {

   *VAR_9 += FUNC_0(VAR_11)->resident_page_count;
   *VAR_10 += FUNC_2(FUNC_0(VAR_11)->pager);

   (void)FUNC_4(VAR_8,
         VAR_11->vme_start,
         VAR_11->vme_end,
         VAR_7,
         VAR_14);
  }
 }

 FUNC_11(VAR_8);





        if (VAR_14 != VAR_5) {
                FUNC_5(VAR_14, VAR_6);
                VAR_14 = VAR_5;
        }

 return VAR_13;
}
