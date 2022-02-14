
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* opaque; } ;
struct TYPE_7__ {int size; } ;
typedef TYPE_1__ DynBuffer ;
typedef TYPE_2__ AVIOContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(AVIOContext *VAR_0)
{
    DynBuffer *VAR_1 = VAR_0->opaque;
    int VAR_2;

    FUNC_2(VAR_0);

    VAR_2 = VAR_1->size;
    FUNC_0(VAR_1);

    FUNC_1(&VAR_0);

    return VAR_2;
}
