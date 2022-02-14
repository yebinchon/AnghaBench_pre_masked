
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
struct TYPE_7__ {int data; TYPE_2__* buf; int size; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVBufferRef ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_2__**,int ) ;

int FUNC_5(AVPacket *VAR_0)
{
    AVBufferRef *VAR_1 = ((void*)0);
    int VAR_2;

    if (VAR_0->buf && FUNC_1(VAR_0->buf))
        return 0;

    VAR_2 = FUNC_4(&VAR_1, VAR_0->size);
    if (VAR_2 < 0)
        return VAR_2;
    FUNC_0(!VAR_0->size || VAR_0->data);
    if (VAR_0->size)
        FUNC_3(VAR_1->data, VAR_0->data, VAR_0->size);

    FUNC_2(&VAR_0->buf);
    VAR_0->buf = VAR_1;
    VAR_0->data = VAR_1->data;

    return 0;
}
