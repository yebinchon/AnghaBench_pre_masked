
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vector_upl_t ;
typedef TYPE_2__* upl_t ;
typedef scalar_t__ uint32_t ;
typedef int boolean_t ;
struct TYPE_7__ {int size; TYPE_1__* vector_upl; } ;
struct TYPE_6__ {scalar_t__ num_upls; int invalid_upls; TYPE_2__** upl_elems; int size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

boolean_t
FUNC_3(upl_t VAR_3,upl_t VAR_4, uint32_t VAR_5)
{
 if(FUNC_2(VAR_3)) {
  vector_upl_t VAR_6 = VAR_3->vector_upl;

  if(VAR_6) {
   if(VAR_4) {
    if(VAR_5) {
     if(VAR_5 < VAR_1)
      VAR_5 = VAR_1;
     VAR_4->vector_upl = (void*)VAR_6;
     VAR_6->upl_elems[VAR_6->num_upls++] = VAR_4;
     VAR_6->size += VAR_5;
     VAR_3->size += VAR_5;
    }
    else {
     uint32_t VAR_7=0,VAR_8=0;
     for(VAR_7 = 0; VAR_7 < VAR_6->num_upls; VAR_7++) {
      if(VAR_6->upl_elems[VAR_7] == VAR_4)
       break;
     }
     if(VAR_7 == VAR_6->num_upls)
      FUNC_1("Trying to remove sub-upl when none exists");

     VAR_6->upl_elems[VAR_7] = ((void*)0);
     VAR_8 = FUNC_0(&(VAR_6)->invalid_upls, 1);
     if(VAR_8 == VAR_6->num_upls)
      return VAR_2;
     else
      return VAR_0;
    }
   }
   else
    FUNC_1("vector_upl_set_subupl was passed a NULL upl element\n");
  }
  else
   FUNC_1("vector_upl_set_subupl was passed a non-vectored upl\n");
 }
 else
  FUNC_1("vector_upl_set_subupl was passed a NULL upl\n");

 return VAR_0;
}
