
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int memory_object_t ;
typedef int compressor_slot_t ;
typedef TYPE_2__* compressor_pager_t ;
struct TYPE_6__ {int * cpgr_eslots; int * cpgr_dslots; int ** cpgr_islots; } ;
struct TYPE_7__ {int cpgr_num_slots; TYPE_1__ cpgr_slots; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int,int,int*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ) ;

unsigned int
FUNC_5(
 memory_object_t VAR_2,
 int VAR_3)
{
 compressor_pager_t VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 compressor_slot_t *VAR_8;
 unsigned int VAR_9;

 FUNC_1(VAR_2, VAR_4);
 if (VAR_4 == ((void*)0))
  return 0;

 FUNC_0(VAR_4);


 VAR_9 = 0;

 VAR_5 = (VAR_4->cpgr_num_slots + VAR_1 -1) / VAR_1;
 if (VAR_5 > 1) {

  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
   VAR_8 = VAR_4->cpgr_slots.cpgr_islots[VAR_7];
   if (VAR_8 != ((void*)0)) {
    VAR_9 +=
     FUNC_2(
      VAR_8,
      VAR_1,
      VAR_3,
      &VAR_6);
    if (VAR_6 == 0) {
     VAR_4->cpgr_slots.cpgr_islots[VAR_7] = ((void*)0);
     FUNC_4(VAR_8, VAR_0);
    }
   }
  }
 } else if (VAR_4->cpgr_num_slots > 2) {
  VAR_8 = VAR_4->cpgr_slots.cpgr_dslots;
  VAR_9 +=
   FUNC_2(
    VAR_8,
    VAR_4->cpgr_num_slots,
    VAR_3,
    ((void*)0));
 } else {
  VAR_8 = &VAR_4->cpgr_slots.cpgr_eslots[0];
  VAR_9 +=
   FUNC_2(
    VAR_8,
    VAR_4->cpgr_num_slots,
    VAR_3,
    ((void*)0));
 }

 FUNC_3(VAR_4);

 return VAR_9;
}
