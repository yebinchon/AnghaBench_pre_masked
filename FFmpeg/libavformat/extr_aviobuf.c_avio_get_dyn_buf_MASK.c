
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* opaque; } ;
struct TYPE_5__ {int size; int * buffer; } ;
typedef TYPE_1__ DynBuffer ;
typedef TYPE_2__ AVIOContext ;


 int FUNC_0 (TYPE_2__*) ;

int FUNC_1(AVIOContext *VAR_0, uint8_t **VAR_1)
{
    DynBuffer *VAR_2;

    if (!VAR_0) {
        *VAR_1 = ((void*)0);
        return 0;
    }

    FUNC_0(VAR_0);

    VAR_2 = VAR_0->opaque;
    *VAR_1 = VAR_2->buffer;

    return VAR_2->size;
}
