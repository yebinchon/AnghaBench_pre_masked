
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int size; void (* free ) (void*,int *) ;int flags; int refcount; void* opaque; int * data; } ;
struct TYPE_5__ {int size; int * data; TYPE_2__* buffer; } ;
typedef TYPE_1__ AVBufferRef ;
typedef TYPE_2__ AVBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 void FUNC_1 (void*,int *) ;
 int FUNC_2 (TYPE_2__**) ;
 void* FUNC_3 (int) ;

AVBufferRef *FUNC_4(uint8_t *VAR_2, int VAR_3,
                              void (*VAR_4)(void *VAR_5, uint8_t *VAR_6),
                              void *VAR_7, int VAR_8)
{
    AVBufferRef *VAR_9 = ((void*)0);
    AVBuffer *VAR_10 = ((void*)0);

    VAR_10 = FUNC_3(sizeof(*VAR_10));
    if (!VAR_10)
        return ((void*)0);

    VAR_10->data = VAR_2;
    VAR_10->size = VAR_3;
    VAR_10->free = VAR_4 ? VAR_4 : FUNC_1;
    VAR_10->opaque = VAR_7;

    FUNC_0(&VAR_10->refcount, 1);

    if (VAR_8 & VAR_0)
        VAR_10->flags |= VAR_1;

    VAR_9 = FUNC_3(sizeof(*VAR_9));
    if (!VAR_9) {
        FUNC_2(&VAR_10);
        return ((void*)0);
    }

    VAR_9->buffer = VAR_10;
    VAR_9->data = VAR_2;
    VAR_9->size = VAR_3;

    return VAR_9;
}
