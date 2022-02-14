
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t end; size_t start; int * heap; } ;
typedef TYPE_1__ heap_t ;


 int FUNC_0 (int ,char*,int *) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (void*,size_t) ;

__attribute__((used)) static void FUNC_3(heap_t *VAR_2)
{
    size_t VAR_3 = VAR_2->end - VAR_2->start;
    FUNC_1(VAR_3 <= VAR_0);
    VAR_2->heap = FUNC_2((void *)VAR_2->start, VAR_3);
    if (VAR_2->heap != ((void*)0)) {
        FUNC_0(VAR_1, "New heap initialised at %p", VAR_2->heap);
    }
}
