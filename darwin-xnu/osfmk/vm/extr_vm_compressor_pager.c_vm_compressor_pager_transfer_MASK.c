
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int memory_object_t ;
typedef int memory_object_offset_t ;
typedef scalar_t__ compressor_slot_t ;
typedef TYPE_1__* compressor_pager_t ;
struct TYPE_6__ {int transfer; } ;
struct TYPE_5__ {int cpgr_num_slots; int cpgr_num_slots_occupied; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int,scalar_t__**) ;
 TYPE_2__ VAR_3 ;
 int FUNC_4 (scalar_t__*,scalar_t__*) ;

void
FUNC_5(
 memory_object_t VAR_4,
 memory_object_offset_t VAR_5,
 memory_object_t VAR_6,
 memory_object_offset_t VAR_7)
{
 compressor_pager_t VAR_8, VAR_9;
 compressor_slot_t *VAR_10, *VAR_11;

 VAR_3.transfer++;


 FUNC_1((uint32_t) VAR_5 == VAR_5);
 FUNC_2(VAR_4, VAR_9);
 FUNC_1(VAR_5 / VAR_1 < VAR_9->cpgr_num_slots);
 FUNC_3(VAR_9, VAR_2, (uint32_t) VAR_5,
         &VAR_11);
 FUNC_1(VAR_11 != ((void*)0));
 FUNC_1(*VAR_11 == 0);


 FUNC_1((uint32_t) VAR_7 == VAR_7);
 FUNC_2(VAR_6, VAR_8);
 FUNC_1(VAR_7 / VAR_1 < VAR_8->cpgr_num_slots);
 FUNC_3(VAR_8, VAR_0, (uint32_t) VAR_7,
         &VAR_10);
 FUNC_1(VAR_10 != ((void*)0));
 FUNC_1(*VAR_10 != 0);


 FUNC_4(VAR_11, VAR_10);
 FUNC_0(-1, &VAR_8->cpgr_num_slots_occupied);
 FUNC_0(+1, &VAR_9->cpgr_num_slots_occupied);
}
