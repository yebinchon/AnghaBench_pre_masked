
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {TYPE_2__* buf; scalar_t__ data; scalar_t__ size; } ;
typedef TYPE_1__ AVPacket ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_2__**,scalar_t__) ;

int FUNC_3(AVPacket *VAR_0)
{
    int VAR_1;

    if (VAR_0->buf)
        return 0;

    VAR_1 = FUNC_2(&VAR_0->buf, VAR_0->size);
    if (VAR_1 < 0)
        return VAR_1;
    FUNC_0(!VAR_0->size || VAR_0->data);
    if (VAR_0->size)
        FUNC_1(VAR_0->buf->data, VAR_0->data, VAR_0->size);

    VAR_0->data = VAR_0->buf->data;

    return 0;
}
