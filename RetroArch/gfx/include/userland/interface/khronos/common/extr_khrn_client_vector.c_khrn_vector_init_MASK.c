
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ size; int * data; scalar_t__ capacity; } ;
typedef TYPE_1__ KHRN_VECTOR_T ;


 int * FUNC_0 (scalar_t__,char*) ;

void FUNC_1(KHRN_VECTOR_T *VAR_0, uint32_t VAR_1)
{
   VAR_0->data = (VAR_1 == 0) ? ((void*)0) : FUNC_0(VAR_1, "KHRN_VECTOR_T.data");
   VAR_0->capacity = VAR_0->data ? VAR_1 : 0;
   VAR_0->size = 0;
}
