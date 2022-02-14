
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int count; int * array; } ;
typedef TYPE_1__ ptrlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int) ;
 int * FUNC_2 (int *,int,int) ;

__attribute__((used)) static boolean_t
FUNC_3(ptrlist_t * VAR_3)
{
    if (VAR_3->array == ((void*)0)) {
 if (VAR_3->size == 0)
     VAR_3->size = VAR_1;
 VAR_3->count = 0;
 VAR_3->array = FUNC_1(sizeof(*VAR_3->array) * VAR_3->size);
    }
    else if (VAR_3->size == VAR_3->count) {
 FUNC_0(("doubling %d to %d\n", VAR_3->size, VAR_3->size * 2));
 VAR_3->array = FUNC_2(VAR_3->array,
     sizeof(*VAR_3->array) * VAR_3->size,
     sizeof(*VAR_3->array) * VAR_3->size * 2);
 VAR_3->size *= 2;
    }
    if (VAR_3->array == ((void*)0))
 return (VAR_0);
    return (VAR_2);
}
