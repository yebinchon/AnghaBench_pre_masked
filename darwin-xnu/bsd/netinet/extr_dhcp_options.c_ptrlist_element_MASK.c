
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void const** array; int count; } ;
typedef TYPE_1__ ptrlist_t ;



__attribute__((used)) static const void *
FUNC_0(ptrlist_t * VAR_0, int VAR_1)
{
    if (VAR_0->array == ((void*)0))
 return (((void*)0));
    if (VAR_1 < VAR_0->count)
 return (VAR_0->array[VAR_1]);
    return (((void*)0));
}
