
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* vector_upl_t ;
typedef TYPE_3__* upl_t ;
typedef int upl_size_t ;
typedef int upl_offset_t ;
typedef size_t uint32_t ;
struct TYPE_9__ {TYPE_2__* vector_upl; } ;
struct TYPE_8__ {size_t num_upls; TYPE_1__* upl_iostates; TYPE_3__** upl_elems; } ;
struct TYPE_7__ {int size; int offset; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;

void
FUNC_2(upl_t VAR_0, upl_t VAR_1, upl_offset_t *VAR_2, upl_size_t *VAR_3)
{
 if(FUNC_1(VAR_0)) {
  uint32_t VAR_4 = 0;
  vector_upl_t VAR_5 = VAR_0->vector_upl;

  if(VAR_5) {
   for(VAR_4 = 0; VAR_4 < VAR_5->num_upls; VAR_4++) {
    if(VAR_5->upl_elems[VAR_4] == VAR_1)
     break;
   }

   if(VAR_4 == VAR_5->num_upls)
    FUNC_0("getting sub-upl iostate when none exists");

   *VAR_2 = VAR_5->upl_iostates[VAR_4].offset;
   *VAR_3 = VAR_5->upl_iostates[VAR_4].size;
  }
  else
   FUNC_0("vector_upl_get_iostate was passed a non-vectored UPL\n");
 }
 else
  FUNC_0("vector_upl_get_iostate was passed a NULL UPL\n");
}
