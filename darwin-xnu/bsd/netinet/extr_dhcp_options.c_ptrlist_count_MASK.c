
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int * array; } ;
typedef TYPE_1__ ptrlist_t ;



__attribute__((used)) static int
FUNC_0(ptrlist_t * VAR_0)
{
    if (VAR_0 == ((void*)0) || VAR_0->array == ((void*)0))
 return (0);

    return (VAR_0->count);
}
