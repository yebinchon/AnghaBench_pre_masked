
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int memory_object_t ;
typedef int memory_object_offset_t ;
typedef scalar_t__ compressor_slot_t ;
typedef TYPE_2__* compressor_pager_t ;
struct TYPE_4__ {scalar_t__* cpgr_eslots; scalar_t__** cpgr_islots; scalar_t__* cpgr_dslots; } ;
struct TYPE_5__ {int cpgr_num_slots; TYPE_1__ cpgr_slots; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;

memory_object_offset_t
FUNC_1(
 memory_object_t VAR_2,
 memory_object_offset_t VAR_3)
{
 compressor_pager_t VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 compressor_slot_t *VAR_9;

 FUNC_0(VAR_2, VAR_4);

 VAR_6 = (uint32_t)(VAR_3 / VAR_1);
 if (VAR_6 != (VAR_3/VAR_1)) {

  return (memory_object_offset_t) -1;
 }
 if (VAR_6 >= VAR_4->cpgr_num_slots) {

  return (memory_object_offset_t) -1;
 }

 VAR_5 = ((VAR_4->cpgr_num_slots + VAR_0 - 1) /
        VAR_0);

 if (VAR_5 == 1) {
  if (VAR_4->cpgr_num_slots > 2) {
   VAR_9 = VAR_4->cpgr_slots.cpgr_dslots;
  } else {
   VAR_9 = &VAR_4->cpgr_slots.cpgr_eslots[0];
  }
  for (VAR_8 = VAR_6;
       VAR_8 < VAR_4->cpgr_num_slots;
       VAR_8++) {
   if (VAR_9[VAR_8] != 0) {

    return (memory_object_offset_t) (VAR_8 *
         VAR_1);
   }
  }
  return (memory_object_offset_t) -1;
 }


 VAR_9 = ((void*)0);
 for (VAR_7 = VAR_6 / VAR_0,
       VAR_8 = VAR_6 % VAR_0;
      VAR_7 < VAR_5;
      VAR_7++,
       VAR_8 = 0) {
  VAR_9 = VAR_4->cpgr_slots.cpgr_islots[VAR_7];
  if (VAR_9 == ((void*)0)) {

   continue;
  }

  for (;
       VAR_8 < VAR_0;
       VAR_8++) {
   if (VAR_9[VAR_8] != 0) {

    uint32_t VAR_10;

    VAR_10 = ((VAR_7 *
           VAR_0) +
          VAR_8);
    if (VAR_10 >= VAR_4->cpgr_num_slots) {

     return (memory_object_offset_t) -1;
    }
    return (memory_object_offset_t) (VAR_10 *
         VAR_1);
   }
  }
 }
 return (memory_object_offset_t) -1;
}
