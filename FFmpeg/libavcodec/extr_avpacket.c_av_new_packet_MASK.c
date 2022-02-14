
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
struct TYPE_6__ {int size; int data; TYPE_2__* buf; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVBufferRef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__**,int) ;

int FUNC_2(AVPacket *VAR_0, int VAR_1)
{
    AVBufferRef *VAR_2 = ((void*)0);
    int VAR_3 = FUNC_1(&VAR_2, VAR_1);
    if (VAR_3 < 0)
        return VAR_3;

    FUNC_0(VAR_0);
    VAR_0->buf = VAR_2;
    VAR_0->data = VAR_2->data;
    VAR_0->size = VAR_1;

    return 0;
}
