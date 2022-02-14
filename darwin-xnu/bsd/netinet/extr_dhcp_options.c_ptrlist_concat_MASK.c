
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; int size; int * array; } ;
typedef TYPE_1__ ptrlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int) ;
 int * FUNC_2 (int *,int,int) ;

__attribute__((used)) static boolean_t
FUNC_3(ptrlist_t * VAR_2, ptrlist_t * VAR_3)
{
    if (VAR_3->count == 0)
 return (VAR_1);

    if ((VAR_3->count + VAR_2->count) > VAR_2->size) {
 int VAR_4 = VAR_2->size;

 VAR_2->size = VAR_3->count + VAR_2->count;
 if (VAR_2->array == ((void*)0))
     VAR_2->array = FUNC_1(sizeof(*VAR_2->array) * VAR_2->size);
 else
     VAR_2->array = FUNC_2(VAR_2->array, VAR_4,
         sizeof(*VAR_2->array) * VAR_2->size);
    }
    if (VAR_2->array == ((void*)0))
 return (VAR_0);
    FUNC_0(VAR_3->array, VAR_2->array + VAR_2->count,
   VAR_3->count * sizeof(*VAR_2->array));
    VAR_2->count += VAR_3->count;
    return (VAR_1);
}
