
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int memory_object_t ;
typedef TYPE_1__* compressor_pager_t ;
struct TYPE_3__ {scalar_t__ cpgr_num_slots_occupied; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*) ;

unsigned int
FUNC_2(
 memory_object_t VAR_0)
{
 compressor_pager_t VAR_1;

 FUNC_1(VAR_0, VAR_1);
 if (VAR_1 == ((void*)0))
  return 0;






 FUNC_0(VAR_1->cpgr_num_slots_occupied >= 0);

 return VAR_1->cpgr_num_slots_occupied;
}
