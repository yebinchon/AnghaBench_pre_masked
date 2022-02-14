
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vector_upl_t ;
struct TYPE_8__ {int offset; int size; } ;
typedef TYPE_2__ vector_upl_iostates_t ;
typedef TYPE_3__* upl_t ;
typedef int upl_size_t ;
typedef int upl_offset_t ;
typedef size_t uint32_t ;
struct TYPE_9__ {TYPE_1__* vector_upl; } ;
struct TYPE_7__ {size_t num_upls; TYPE_2__* upl_iostates; TYPE_3__** upl_elems; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;

upl_t
FUNC_2(upl_t VAR_0, upl_offset_t *VAR_1, upl_size_t *VAR_2)
{
 if(FUNC_1(VAR_0)) {
  uint32_t VAR_3=0;
  vector_upl_t VAR_4 = VAR_0->vector_upl;

  if(VAR_4) {
   upl_t VAR_5 = ((void*)0);
   vector_upl_iostates_t VAR_6;

   for(VAR_3=0; VAR_3 < VAR_4->num_upls; VAR_3++) {
    VAR_5 = VAR_4->upl_elems[VAR_3];
    VAR_6 = VAR_4->upl_iostates[VAR_3];
    if( *VAR_1 <= (VAR_6.offset + VAR_6.size - 1)) {




     if(VAR_5 == ((void*)0))
      return ((void*)0);
     if((VAR_6.offset + VAR_6.size) < (*VAR_1 + *VAR_2)) {
      *VAR_2 = (VAR_6.offset + VAR_6.size) - *VAR_1;
      if(*VAR_2 > VAR_6.size)
       *VAR_2 = VAR_6.size;
     }
     if(*VAR_1 >= VAR_6.offset)
      *VAR_1 -= VAR_6.offset;
     else if(VAR_3)
      FUNC_0("Vector UPL offset miscalculation\n");
     return VAR_5;
    }
   }
  }
  else
   FUNC_0("vector_upl_subupl_byoffset was passed a non-vectored UPL\n");
 }
 return ((void*)0);
}
