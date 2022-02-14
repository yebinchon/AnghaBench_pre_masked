
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int vm_map_t ;
typedef int vm_map_size_t ;
typedef int vm_map_offset_t ;
typedef TYPE_1__* vm_map_entry_t ;
typedef TYPE_2__* vm_map_copy_t ;
typedef int pmap_t ;
typedef scalar_t__ kern_return_t ;
typedef int boolean_t ;
struct TYPE_28__ {int entries_pageable; } ;
struct TYPE_27__ {scalar_t__ type; int size; int offset; TYPE_3__ cpy_hdr; } ;
struct TYPE_26__ {int vme_start; int vme_end; scalar_t__ is_sub_map; struct TYPE_26__* vme_next; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_11 (TYPE_2__*) ;
 TYPE_1__* FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (int ,int,TYPE_2__*,int ,int ,int ) ;
 TYPE_1__* FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int,TYPE_1__**) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (int ) ;

kern_return_t
FUNC_20(
 vm_map_t VAR_6,
 vm_map_offset_t VAR_7,
 vm_map_copy_t VAR_8,
 boolean_t VAR_9)
{
 vm_map_size_t VAR_10, VAR_11;
 vm_map_copy_t VAR_12, VAR_13;
 vm_map_offset_t VAR_14, VAR_15;
 vm_map_entry_t VAR_16;
 kern_return_t VAR_17;
 vm_map_offset_t VAR_18, VAR_19;

 VAR_10 = 0;
 VAR_11 = 0;
 VAR_12 = ((void*)0);
 VAR_13 = ((void*)0);
 VAR_14 = 0;
 VAR_15 = 0;

 if (VAR_9 ||
     VAR_8 == VAR_5 ||
     VAR_8->type != VAR_4) {




 blunt_copy:
  return FUNC_13(VAR_6,
          VAR_7,
          VAR_8,
          VAR_9,
          (pmap_t) ((void*)0),
          VAR_3);
 }

 VAR_18 = FUNC_0(FUNC_3(VAR_6), VAR_2);
 VAR_18 = FUNC_0(FUNC_2(VAR_8),
      VAR_18);
 VAR_19 = VAR_18 + 1;

 if (VAR_8->size < 3 * VAR_19) {



  goto blunt_copy;
 }

 if ((VAR_7 & VAR_18) !=
     (VAR_8->offset & VAR_18)) {



  goto blunt_copy;
 }






 if (!FUNC_17(VAR_7, VAR_18)) {
  VAR_14 = VAR_7;
  VAR_10 = (VAR_19 -
        (VAR_8->offset & VAR_18));
  VAR_10 = FUNC_1(VAR_10, VAR_8->size);
 }
 if (!FUNC_17(VAR_8->offset + VAR_8->size,
      VAR_18)) {





  VAR_11 = ((VAR_8->offset + VAR_8->size) &
        VAR_18);
  VAR_11 = FUNC_1(VAR_11, VAR_8->size);
  VAR_15 = VAR_7 + VAR_8->size - VAR_11;
  FUNC_4(VAR_15 >= VAR_14 + VAR_10);
 }
 FUNC_4(VAR_10 + VAR_11 <= VAR_8->size);

 if (VAR_10 + VAR_11 == VAR_8->size) {



  goto blunt_copy;
 }







 FUNC_15(VAR_6);
 if (! FUNC_16(VAR_6, VAR_7, &VAR_16)) {
  FUNC_19(VAR_6);
  goto blunt_copy;
 }
 for (;
      (VAR_16 != FUNC_14(VAR_8) &&
       VAR_16->vme_start < VAR_7 + VAR_8->size);
      VAR_16 = VAR_16->vme_next) {
  if (VAR_16->is_sub_map) {
   FUNC_19(VAR_6);
   goto blunt_copy;
  }
 }
 FUNC_19(VAR_6);

 if (VAR_10) {
  VAR_12 = FUNC_5();
  VAR_12->type = VAR_4;
  VAR_12->cpy_hdr.entries_pageable =
   VAR_8->cpy_hdr.entries_pageable;
  FUNC_18(&VAR_12->cpy_hdr);

  VAR_16 = FUNC_11(VAR_8);
  if (VAR_16->vme_end < VAR_8->offset + VAR_10) {
   VAR_10 = VAR_16->vme_end - VAR_8->offset;
  }

  VAR_12->offset = VAR_8->offset;
  VAR_12->size = VAR_10;
  VAR_8->offset += VAR_10;
  VAR_8->size -= VAR_10;

  FUNC_6(VAR_8, VAR_16, VAR_8->offset);
  FUNC_10(VAR_8, VAR_16);
  FUNC_9(VAR_12,
           FUNC_14(VAR_12),
           VAR_16);




  VAR_17 = FUNC_13(VAR_6,
        VAR_14,
        VAR_12,
        VAR_9,
        (pmap_t) ((void*)0),
        VAR_0);
  if (VAR_17 != VAR_1)
   goto done;
 }

 if (VAR_11) {



  VAR_13 = FUNC_5();
  VAR_13->type = VAR_4;
  VAR_13->cpy_hdr.entries_pageable =
   VAR_8->cpy_hdr.entries_pageable;
  FUNC_18(&VAR_13->cpy_hdr);

  VAR_13->offset = VAR_8->offset + VAR_8->size - VAR_11;
  VAR_13->size = VAR_11;

  VAR_8->size -= VAR_11;

  VAR_16 = FUNC_12(VAR_8);
  FUNC_7(VAR_8, VAR_16, VAR_13->offset);
  VAR_16 = FUNC_12(VAR_8);
  FUNC_10(VAR_8, VAR_16);
  FUNC_9(VAR_13,
           FUNC_12(VAR_13),
           VAR_16);
 }




 VAR_17 = FUNC_13(VAR_6,
       VAR_7 + VAR_10,
       VAR_8,
       VAR_9,
       (pmap_t) ((void*)0),
       VAR_0);
 if (VAR_17 != VAR_1) {
  goto done;
 }

 if (VAR_11) {
  VAR_17 = FUNC_13(VAR_6,
        VAR_15,
        VAR_13,
        VAR_9,
        (pmap_t) ((void*)0),
        VAR_0);
 }

done:
 FUNC_4(VAR_8->type == VAR_4);
 if (VAR_17 == VAR_1) {



  if (VAR_12) {
   FUNC_8(VAR_12);
   VAR_12 = ((void*)0);
  }
  FUNC_8(VAR_8);
  if (VAR_13) {
   FUNC_8(VAR_13);
   VAR_13 = ((void*)0);
  }
 } else {



  if (VAR_12) {
   VAR_16 = FUNC_11(VAR_12);
   FUNC_10(VAR_12, VAR_16);
   FUNC_9(VAR_8,
            FUNC_14(VAR_8),
            VAR_16);
   VAR_8->offset -= VAR_10;
   VAR_8->size += VAR_10;
   FUNC_8(VAR_12);
   VAR_12 = ((void*)0);
  }
  if (VAR_13) {
   VAR_16 = FUNC_12(VAR_13);
   FUNC_10(VAR_13, VAR_16);
   FUNC_9(VAR_8,
            FUNC_12(VAR_8),
            VAR_16);
   VAR_8->size += VAR_11;
   FUNC_8(VAR_13);
   VAR_13 = ((void*)0);
  }
 }
 return VAR_17;
}
