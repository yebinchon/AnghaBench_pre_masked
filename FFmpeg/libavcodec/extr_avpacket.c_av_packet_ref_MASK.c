
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int data; } ;
struct TYPE_10__ {int size; int data; TYPE_2__* buf; } ;
typedef TYPE_1__ AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_2__**,int ) ;

int FUNC_7(AVPacket *VAR_1, const AVPacket *VAR_2)
{
    int VAR_3;

    VAR_3 = FUNC_3(VAR_1, VAR_2);
    if (VAR_3 < 0)
        return VAR_3;

    if (!VAR_2->buf) {
        VAR_3 = FUNC_6(&VAR_1->buf, VAR_2->size);
        if (VAR_3 < 0)
            goto fail;
        FUNC_1(!VAR_2->size || VAR_2->data);
        if (VAR_2->size)
            FUNC_5(VAR_1->buf->data, VAR_2->data, VAR_2->size);

        VAR_1->data = VAR_1->buf->data;
    } else {
        VAR_1->buf = FUNC_2(VAR_2->buf);
        if (!VAR_1->buf) {
            VAR_3 = FUNC_0(VAR_0);
            goto fail;
        }
        VAR_1->data = VAR_2->data;
    }

    VAR_1->size = VAR_2->size;

    return 0;
fail:
    FUNC_4(VAR_1);
    return VAR_3;
}
