
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pos; scalar_t__ size; int * data; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVIOContext ;


 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

int FUNC_3(AVIOContext *VAR_0, AVPacket *VAR_1, int VAR_2)
{
    FUNC_1(VAR_1);
    VAR_1->data = ((void*)0);
    VAR_1->size = 0;
    VAR_1->pos = FUNC_2(VAR_0);

    return FUNC_0(VAR_0, VAR_1, VAR_2);
}
