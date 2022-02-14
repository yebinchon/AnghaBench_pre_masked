
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vector_upl_t ;
typedef TYPE_2__* upl_t ;
typedef size_t uint32_t ;
struct TYPE_7__ {TYPE_1__* vector_upl; } ;
struct TYPE_6__ {size_t num_upls; TYPE_2__** upl_elems; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

upl_t
FUNC_2(upl_t VAR_0, uint32_t VAR_1)
{
 if(FUNC_1(VAR_0)) {
  vector_upl_t VAR_2 = VAR_0->vector_upl;
  if(VAR_2) {
   if(VAR_1 < VAR_2->num_upls)
    return VAR_2->upl_elems[VAR_1];
  }
  else
   FUNC_0("vector_upl_subupl_byindex was passed a non-vectored upl\n");
 }
 return ((void*)0);
}
