
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; scalar_t__ capacity; int * data; } ;
typedef TYPE_1__ KHRN_VECTOR_T ;


 int FUNC_0 (int *) ;

void FUNC_1(KHRN_VECTOR_T *VAR_0)
{
   if (VAR_0->data) {
      FUNC_0(VAR_0->data);
   }
   VAR_0->data = ((void*)0);
   VAR_0->capacity = 0;
   VAR_0->size = 0;
}
