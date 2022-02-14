
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* vector_upl_t ;
typedef TYPE_3__* upl_t ;
typedef scalar_t__ upl_size_t ;
typedef int upl_offset_t ;
typedef size_t uint32_t ;
struct TYPE_9__ {TYPE_2__* vector_upl; } ;
struct TYPE_8__ {size_t num_upls; TYPE_1__* upl_iostates; TYPE_3__** upl_elems; } ;
struct TYPE_7__ {scalar_t__ size; int offset; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;

void
FUNC_2(upl_t VAR_1, upl_t VAR_2, upl_offset_t VAR_3, upl_size_t VAR_4)
{
 if(FUNC_1(VAR_1)) {
  uint32_t VAR_5 = 0;
  vector_upl_t VAR_6 = VAR_1->vector_upl;

  if(VAR_6) {
   for(VAR_5 = 0; VAR_5 < VAR_6->num_upls; VAR_5++) {
    if(VAR_6->upl_elems[VAR_5] == VAR_2)
     break;
   }

   if(VAR_5 == VAR_6->num_upls)
    FUNC_0("setting sub-upl iostate when none exists");

   VAR_6->upl_iostates[VAR_5].offset = VAR_3;
   if(VAR_4 < VAR_0)
    VAR_4 = VAR_0;
   VAR_6->upl_iostates[VAR_5].size = VAR_4;
  }
  else
   FUNC_0("vector_upl_set_iostate was passed a non-vectored UPL\n");
 }
 else
  FUNC_0("vector_upl_set_iostate was passed a NULL UPL\n");
}
