
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int elements_count; int * elements; } ;
typedef TYPE_1__ layer_t ;
typedef int element_t ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (void**,int,int) ;

element_t *FUNC_2(layer_t *VAR_0)
{
   element_t *VAR_1;

   FUNC_1((void**)&VAR_0->elements,
         sizeof(element_t), ++VAR_0->elements_count);

   VAR_1 = &VAR_0->elements[VAR_0->elements_count - 1];
   FUNC_0(VAR_1, ((void*)0), 0);

   return VAR_1;
}
