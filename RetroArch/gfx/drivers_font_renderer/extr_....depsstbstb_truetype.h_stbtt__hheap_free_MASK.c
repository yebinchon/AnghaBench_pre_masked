
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* first_free; } ;
typedef TYPE_1__ stbtt__hheap ;



__attribute__((used)) static void FUNC_0(stbtt__hheap *VAR_0, void *VAR_1)
{
   *(void **) VAR_1 = VAR_0->first_free;
   VAR_0->first_free = VAR_1;
}
