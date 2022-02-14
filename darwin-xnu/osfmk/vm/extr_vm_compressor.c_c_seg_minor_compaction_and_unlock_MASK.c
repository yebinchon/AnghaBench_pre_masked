
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef size_t uint32_t ;
typedef int int32_t ;
typedef TYPE_2__* c_slot_t ;
typedef TYPE_3__* c_slot_mapping_t ;
typedef TYPE_4__* c_segment_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_19__ {int * c_buffer; } ;
struct TYPE_22__ {scalar_t__ c_bytes_used; int c_firstemptyslot; int c_nextslot; size_t c_populated_offset; size_t c_nextoffset; int c_lock; TYPE_1__ c_store; scalar_t__ c_bytes_unused; int c_was_minor_compacted; int c_busy; } ;
struct TYPE_21__ {int s_cindx; } ;
struct TYPE_20__ {size_t c_offset; } ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_4__*) ;
 size_t VAR_0 ;
 size_t FUNC_2 (size_t) ;
 TYPE_2__* FUNC_3 (TYPE_4__*,int) ;
 size_t FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (TYPE_2__*,int ) ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_13 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_14 (int ,int ,size_t,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *,size_t) ;

int
FUNC_18(c_segment_t VAR_6, boolean_t VAR_7)
{
 c_slot_mapping_t VAR_8;
 uint32_t VAR_9 = 0;
 uint32_t VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;
 int VAR_13 = 0;
 int VAR_14;
 c_slot_t VAR_15;
 c_slot_t VAR_16;

 FUNC_10(VAR_6->c_busy);




 if (VAR_6->c_bytes_used == 0) {
  FUNC_11(VAR_6);
  return (1);
 }
 FUNC_16(&VAR_6->c_lock);

 if (VAR_6->c_firstemptyslot >= VAR_6->c_nextslot || FUNC_4(VAR_6) < VAR_3)
  goto done;
 VAR_13 = VAR_6->c_firstemptyslot;
 VAR_15 = FUNC_3(VAR_6, VAR_13);

 VAR_10 = VAR_6->c_populated_offset;
 VAR_9 = VAR_15->c_offset;

 for (VAR_14 = VAR_13 + 1; VAR_14 < VAR_6->c_nextslot && VAR_9 < VAR_6->c_nextoffset; VAR_14++) {

  VAR_16 = FUNC_3(VAR_6, VAR_14);

  VAR_12 = FUNC_9(VAR_16);

  if (VAR_12 == 0)
   continue;

  VAR_11 = (VAR_12 + VAR_0) & ~VAR_0;

  FUNC_17(&VAR_6->c_store.c_buffer[VAR_9], &VAR_6->c_store.c_buffer[VAR_16->c_offset], VAR_11);

  FUNC_13(VAR_15, VAR_16);
  VAR_15->c_offset = VAR_9;

  VAR_8 = (c_slot_mapping_t)FUNC_7(VAR_15);
  VAR_8->s_cindx = VAR_13;

  VAR_9 += FUNC_0(VAR_11);
  FUNC_8(VAR_16, 0);
  VAR_13++;

  VAR_15 = FUNC_3(VAR_6, VAR_13);
 }
 VAR_6->c_firstemptyslot = VAR_13;
 VAR_6->c_nextslot = VAR_13;
 VAR_6->c_nextoffset = VAR_9;
 VAR_6->c_populated_offset = (VAR_9 + (FUNC_0(VAR_3) - 1)) & ~(FUNC_0(VAR_3) - 1);
 VAR_6->c_bytes_unused = 0;




 if (VAR_10 > VAR_6->c_populated_offset) {
  uint32_t VAR_17;
  int32_t *VAR_18;

  VAR_17 = FUNC_2(VAR_10 - VAR_6->c_populated_offset);
  VAR_18 = &VAR_6->c_store.c_buffer[VAR_6->c_populated_offset];

  FUNC_14(VAR_5, (vm_offset_t)VAR_18, VAR_17, VAR_2);
 }





done:
 if (VAR_7 == VAR_4) {
  FUNC_15(&VAR_6->c_lock);
  FUNC_5(VAR_6);
  FUNC_16(&VAR_6->c_lock);
 }
 return (0);
}
