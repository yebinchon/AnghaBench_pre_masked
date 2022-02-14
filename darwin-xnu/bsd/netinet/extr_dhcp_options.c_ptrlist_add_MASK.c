
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; void const** array; } ;
typedef TYPE_1__ ptrlist_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static boolean_t
FUNC_1(ptrlist_t * VAR_2, const void * VAR_3)
{
    if (FUNC_0(VAR_2) == VAR_0)
 return (VAR_0);

    VAR_2->array[VAR_2->count++] = VAR_3;
    return (VAR_1);
}
