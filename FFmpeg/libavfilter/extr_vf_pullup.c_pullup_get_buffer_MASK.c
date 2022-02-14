
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__* lock; } ;
struct TYPE_9__ {TYPE_3__* buffers; TYPE_1__* last; } ;
struct TYPE_8__ {int parity; TYPE_3__* buffer; } ;
typedef TYPE_2__ PullupContext ;
typedef int PullupBuffer ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int * FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static PullupBuffer *FUNC_3(PullupContext *VAR_0, int VAR_1)
{
    int VAR_2;


    if (VAR_1 < 2 && VAR_0->last && VAR_1 != VAR_0->last->parity
        && !VAR_0->last->buffer->lock[VAR_1]) {
        FUNC_1(VAR_0, VAR_0->last->buffer);
        return FUNC_2(VAR_0->last->buffer, VAR_1);
    }


    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->buffers); VAR_2++) {
        if (VAR_0->buffers[VAR_2].lock[0])
            continue;
        if (VAR_0->buffers[VAR_2].lock[1])
            continue;
        FUNC_1(VAR_0, &VAR_0->buffers[VAR_2]);
        return FUNC_2(&VAR_0->buffers[VAR_2], VAR_1);
    }

    if (VAR_1 == 2)
        return 0;


    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->buffers); VAR_2++) {
        if (((VAR_1 + 1) & 1) && VAR_0->buffers[VAR_2].lock[0])
            continue;
        if (((VAR_1 + 1) & 2) && VAR_0->buffers[VAR_2].lock[1])
            continue;
        FUNC_1(VAR_0, &VAR_0->buffers[VAR_2]);
        return FUNC_2(&VAR_0->buffers[VAR_2], VAR_1);
    }

    return ((void*)0);
}
