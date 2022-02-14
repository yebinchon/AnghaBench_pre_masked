
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_17__ {int palette_has_changed; } ;
struct TYPE_16__ {TYPE_2__* priv_data; } ;
struct TYPE_15__ {int size; int * data; } ;
struct TYPE_14__ {TYPE_9__* frame; int pal; int gb; TYPE_1__* avctx; } ;
struct TYPE_13__ {int width; int height; } ;
typedef TYPE_2__ SmcContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,TYPE_9__*) ;
 int FUNC_1 (TYPE_4__*,int ,char*,int) ;
 int * FUNC_2 (TYPE_3__*,int ,int*) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (TYPE_4__*,TYPE_9__*,int ) ;
 int FUNC_5 (int ,int const*,int) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_4,
                             void *VAR_5, int *VAR_6,
                             AVPacket *VAR_7)
{
    const uint8_t *VAR_8 = VAR_7->data;
    int VAR_9 = VAR_7->size;
    SmcContext *VAR_10 = VAR_4->priv_data;
    int VAR_11;
    const uint8_t *VAR_12 = FUNC_2(VAR_7, VAR_3, &VAR_11);
    int VAR_13;
    int VAR_14 = ((VAR_10->avctx->width + 3) / 4) * ((VAR_10->avctx->height + 3) / 4);

    if (VAR_14 / 1024 > VAR_7->size)
        return VAR_0;

    FUNC_3(&VAR_10->gb, VAR_8, VAR_9);

    if ((VAR_13 = FUNC_4(VAR_4, VAR_10->frame, 0)) < 0)
        return VAR_13;

    if (VAR_12 && VAR_11 == VAR_1) {
        VAR_10->frame->palette_has_changed = 1;
        FUNC_5(VAR_10->pal, VAR_12, VAR_1);
    } else if (VAR_12) {
        FUNC_1(VAR_4, VAR_2, "Palette size %d is wrong\n", VAR_11);
    }

    FUNC_6(VAR_10);

    *VAR_6 = 1;
    if ((VAR_13 = FUNC_0(VAR_5, VAR_10->frame)) < 0)
        return VAR_13;


    return VAR_9;
}
