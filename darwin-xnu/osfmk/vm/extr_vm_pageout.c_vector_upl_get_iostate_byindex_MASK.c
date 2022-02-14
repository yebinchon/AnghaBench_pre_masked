
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* vector_upl_t ;
typedef TYPE_3__* upl_t ;
typedef int upl_size_t ;
typedef int upl_offset_t ;
typedef size_t uint32_t ;
struct TYPE_8__ {TYPE_2__* vector_upl; } ;
struct TYPE_7__ {size_t num_upls; TYPE_1__* upl_iostates; } ;
struct TYPE_6__ {int size; int offset; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;

void
FUNC_2(upl_t VAR_0, uint32_t VAR_1, upl_offset_t *VAR_2, upl_size_t *VAR_3)
{
 if(FUNC_1(VAR_0)) {
  vector_upl_t VAR_4 = VAR_0->vector_upl;
  if(VAR_4) {
   if(VAR_1 < VAR_4->num_upls) {
    *VAR_2 = VAR_4->upl_iostates[VAR_1].offset;
    *VAR_3 = VAR_4->upl_iostates[VAR_1].size;
   }
   else
    *VAR_2 = *VAR_3 = 0;
  }
  else
   FUNC_0("vector_upl_get_iostate_byindex was passed a non-vectored UPL\n");
 }
 else
  FUNC_0("vector_upl_get_iostate_byindex was passed a NULL UPL\n");
}
