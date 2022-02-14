
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;


struct TYPE_22__ {TYPE_13__* prev_frame; int gb; } ;
struct TYPE_21__ {int width; int height; TYPE_4__* priv_data; } ;
struct TYPE_20__ {int key_frame; int pict_type; } ;
struct TYPE_19__ {int size; int data; } ;
struct TYPE_18__ {scalar_t__* data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;
typedef TYPE_4__ ARBCContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,TYPE_13__*) ;
 int FUNC_1 (TYPE_13__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_13__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int,TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int,int,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_4, void *VAR_5,
                        int *VAR_6, AVPacket *VAR_7)
{
    ARBCContext *VAR_8 = VAR_4->priv_data;
    AVFrame *VAR_9 = VAR_5;
    int VAR_10, VAR_11;
    int VAR_12 = VAR_4->width * VAR_4->height;

    if (VAR_7->size < 10)
        return VAR_0;

    FUNC_6(&VAR_8->gb, VAR_7->data, VAR_7->size);
    FUNC_7(&VAR_8->gb, 8);
    VAR_11 = FUNC_5(&VAR_8->gb);
    if (VAR_11 == 0)
        return VAR_7->size;

    if (7 * VAR_11 > FUNC_4(&VAR_8->gb))
        return VAR_0;

    if ((VAR_10 = FUNC_8(VAR_4, VAR_9, VAR_1)) < 0)
        return VAR_10;

    if (VAR_8->prev_frame->data[0]) {
        VAR_10 = FUNC_0(VAR_9, VAR_8->prev_frame);
        if (VAR_10 < 0)
            return VAR_10;
    }

    for (int VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
        int VAR_14;
        int VAR_15;

        if (FUNC_4(&VAR_8->gb) <= 0)
            return VAR_0;

        VAR_15 = FUNC_3(&VAR_8->gb) << 16;
        FUNC_7(&VAR_8->gb, 1);
        VAR_15 |= FUNC_3(&VAR_8->gb) << 8;
        FUNC_7(&VAR_8->gb, 1);
        VAR_15 |= FUNC_3(&VAR_8->gb) << 0;
        FUNC_7(&VAR_8->gb, 1);
        VAR_14 = FUNC_3(&VAR_8->gb);

        if (VAR_14 & 0x10)
            VAR_12 -= FUNC_10(VAR_4, 1024, 1024, VAR_15, VAR_9);
        if (VAR_14 & 0x08)
            VAR_12 -= FUNC_10(VAR_4, 256, 256, VAR_15, VAR_9);
        if (VAR_14 & 0x04)
            VAR_12 -= FUNC_10(VAR_4, 64, 64, VAR_15, VAR_9);
        if (VAR_14 & 0x02)
            VAR_12 -= FUNC_10(VAR_4, 16, 16, VAR_15, VAR_9);
        if (VAR_14 & 0x01)
            VAR_12 -= FUNC_9(VAR_4, VAR_15, VAR_9);
    }

    FUNC_2(VAR_8->prev_frame);
    if ((VAR_10 = FUNC_1(VAR_8->prev_frame, VAR_9)) < 0)
        return VAR_10;

    VAR_9->pict_type = VAR_12 <= 0 ? VAR_2 : VAR_3;
    VAR_9->key_frame = VAR_12 <= 0;
    *VAR_6 = 1;

    return VAR_7->size;
}
