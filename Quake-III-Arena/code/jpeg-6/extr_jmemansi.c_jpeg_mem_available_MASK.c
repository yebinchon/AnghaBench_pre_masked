
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* j_common_ptr ;
struct TYPE_5__ {TYPE_1__* mem; } ;
struct TYPE_4__ {long max_memory_to_use; } ;



long
FUNC_0 (j_common_ptr VAR_0, long VAR_1,
      long VAR_2, long VAR_3)
{
  return VAR_0->mem->max_memory_to_use - VAR_3;
}
