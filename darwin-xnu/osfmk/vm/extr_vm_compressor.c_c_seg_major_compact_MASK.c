
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef TYPE_2__* c_slot_t ;
typedef TYPE_3__* c_slot_mapping_t ;
typedef TYPE_4__* c_segment_t ;
typedef int boolean_t ;
struct TYPE_22__ {int moved_bytes; int moved_slots; int compactions; } ;
struct TYPE_18__ {int * c_buffer; } ;
struct TYPE_21__ {int c_nextslot; size_t c_populated_offset; size_t c_nextoffset; int c_firstemptyslot; int c_slots_used; int c_bytes_used; int c_bytes_unused; scalar_t__ c_mysegno; TYPE_1__ c_store; int c_was_major_donor; int c_was_major_compacted; } ;
struct TYPE_20__ {int s_cindx; scalar_t__ s_cseg; } ;
struct TYPE_19__ {size_t c_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (size_t) ;
 size_t VAR_3 ;
 TYPE_2__* FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_4__*) ;
 TYPE_7__ VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_12 (int ,int ,int,int ,int ) ;
 int FUNC_13 (int *,int *,int) ;

boolean_t
FUNC_14(
 c_segment_t VAR_11,
 c_segment_t VAR_12)
{
 c_slot_mapping_t VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15;
 uint16_t VAR_16;
 int VAR_17;
 c_slot_t VAR_18;
 c_slot_t VAR_19;
 boolean_t VAR_20 = VAR_7;
 VAR_9.compactions++;

 VAR_16 = VAR_11->c_nextslot;

 for (VAR_17 = 0; VAR_17 < VAR_12->c_nextslot; VAR_17++) {

  VAR_19 = FUNC_3(VAR_12, VAR_17);

  VAR_15 = FUNC_8(VAR_19);

  if (VAR_15 == 0) {

   continue;
  }

  if (FUNC_2(VAR_11->c_populated_offset - VAR_11->c_nextoffset) < (unsigned) VAR_15) {
   int VAR_21;


   VAR_21 = VAR_0 - FUNC_2(VAR_11->c_populated_offset);

       if (VAR_21 == 0) {

    VAR_20 = VAR_5;
    break;
   }
   if (VAR_21 > VAR_1)
    VAR_21 = VAR_1;

   FUNC_12(VAR_10,
            (vm_offset_t) &VAR_11->c_store.c_buffer[VAR_11->c_populated_offset],
            VAR_21,
            VAR_6,
            VAR_8);

   VAR_11->c_populated_offset += FUNC_0(VAR_21);
   FUNC_9(FUNC_2(VAR_11->c_populated_offset) <= VAR_0);
  }
  FUNC_10(VAR_11);

  VAR_18 = FUNC_3(VAR_11, VAR_11->c_nextslot);

  FUNC_13(&VAR_11->c_store.c_buffer[VAR_11->c_nextoffset], &VAR_12->c_store.c_buffer[VAR_19->c_offset], VAR_15);

  VAR_14 = (VAR_15 + VAR_2) & ~VAR_2;

  VAR_9.moved_slots++;
  VAR_9.moved_bytes += VAR_15;

  FUNC_11(VAR_18, VAR_19);
  VAR_18->c_offset = VAR_11->c_nextoffset;

  if (VAR_11->c_firstemptyslot == VAR_11->c_nextslot)
   VAR_11->c_firstemptyslot++;
  VAR_11->c_slots_used++;
  VAR_11->c_nextslot++;
  VAR_11->c_bytes_used += VAR_14;
  VAR_11->c_nextoffset += FUNC_0(VAR_14);

  FUNC_6(VAR_19, 0);

  VAR_12->c_bytes_used -= VAR_14;
  VAR_12->c_bytes_unused += VAR_14;
  VAR_12->c_firstemptyslot = 0;

  FUNC_9(VAR_12->c_slots_used);
  VAR_12->c_slots_used--;

  if (VAR_11->c_nextoffset >= VAR_3 || VAR_11->c_nextslot >= VAR_4) {

   VAR_20 = VAR_5;
   break;
  }
 }



 if (VAR_16 < VAR_11->c_nextslot) {

  FUNC_7(VAR_7);







  while (VAR_16 < VAR_11->c_nextslot) {

   VAR_18 = FUNC_3(VAR_11, VAR_16);

   VAR_13 = (c_slot_mapping_t)FUNC_5(VAR_18);

   VAR_13->s_cseg = VAR_11->c_mysegno + 1;
   VAR_13->s_cindx = VAR_16++;
  }
  FUNC_7(VAR_5);
 }
 return (VAR_20);
}
