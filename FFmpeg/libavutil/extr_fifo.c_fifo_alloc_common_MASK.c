
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* buffer; void* end; } ;
typedef TYPE_1__ AVFifoBuffer ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*) ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static AVFifoBuffer *FUNC_3(void *VAR_0, size_t VAR_1)
{
    AVFifoBuffer *VAR_2;
    if (!VAR_0)
        return ((void*)0);
    VAR_2 = FUNC_2(sizeof(AVFifoBuffer));
    if (!VAR_2) {
        FUNC_1(VAR_0);
        return ((void*)0);
    }
    VAR_2->buffer = VAR_0;
    VAR_2->end = VAR_2->buffer + VAR_1;
    FUNC_0(VAR_2);
    return VAR_2;
}
