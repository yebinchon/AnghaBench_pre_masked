
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_19__ {void* f; } ;
typedef TYPE_2__ ThreadFrame ;
struct TYPE_18__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_23__ {scalar_t__ pix_fmt; TYPE_1__ sample_aspect_ratio; int (* execute2 ) (TYPE_6__*,int ,TYPE_5__*,int *,int) ;TYPE_3__* priv_data; } ;
struct TYPE_22__ {int key_frame; int * data; int pict_type; } ;
struct TYPE_21__ {int size; int data; } ;
struct TYPE_20__ {int curtileno; int numXtiles; int numYtiles; int g; TYPE_1__ sar; int palette; TYPE_6__* avctx; int cdef; } ;
typedef TYPE_3__ Jpeg2000DecoderContext ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_6__*,int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_6__*,TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int VAR_8 ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (int ,int,int) ;
 int FUNC_16 (TYPE_6__*,int ,TYPE_5__*,int *,int) ;

__attribute__((used)) static int FUNC_17(AVCodecContext *VAR_9, void *VAR_10,
                                 int *VAR_11, AVPacket *VAR_12)
{
    Jpeg2000DecoderContext *VAR_13 = VAR_9->priv_data;
    ThreadFrame VAR_14 = { .f = VAR_10 };
    AVFrame *VAR_15 = VAR_10;
    int VAR_16;

    VAR_13->avctx = VAR_9;
    FUNC_4(&VAR_13->g, VAR_12->data, VAR_12->size);
    VAR_13->curtileno = -1;
    FUNC_15(VAR_13->cdef, -1, sizeof(VAR_13->cdef));

    if (FUNC_3(&VAR_13->g) < 2) {
        VAR_16 = VAR_0;
        goto end;
    }


    if (FUNC_3(&VAR_13->g) >= 12 &&
       (FUNC_2(&VAR_13->g) == 12) &&
       (FUNC_2(&VAR_13->g) == VAR_4) &&
       (FUNC_2(&VAR_13->g) == VAR_5)) {
        if (!FUNC_10(VAR_13)) {
            FUNC_0(VAR_9, VAR_1,
                   "Could not find Jpeg2000 codestream atom.\n");
            VAR_16 = VAR_0;
            goto end;
        }
    } else {
        FUNC_6(&VAR_13->g, 0, VAR_7);
    }

    while (FUNC_3(&VAR_13->g) >= 3 && FUNC_5(&VAR_13->g) != VAR_6)
        FUNC_7(&VAR_13->g, 1);

    if (FUNC_1(&VAR_13->g) != VAR_6) {
        FUNC_0(VAR_9, VAR_1, "SOC marker not present\n");
        VAR_16 = VAR_0;
        goto end;
    }
    if ((VAR_16 = FUNC_13(VAR_13)))
        goto end;


    if ((VAR_16 = FUNC_9(VAR_9, &VAR_14, 0)) < 0)
        goto end;
    VAR_15->pict_type = VAR_2;
    VAR_15->key_frame = 1;

    if ((VAR_16 = FUNC_12(VAR_13)))
        goto end;

    VAR_9->execute2(VAR_9, VAR_8, VAR_15, ((void*)0), VAR_13->numXtiles * VAR_13->numYtiles);

    FUNC_11(VAR_13);

    *VAR_11 = 1;

    if (VAR_13->avctx->pix_fmt == VAR_3)
        FUNC_14(VAR_15->data[1], VAR_13->palette, 256 * sizeof(uint32_t));
    if (VAR_13->sar.num && VAR_13->sar.den)
        VAR_9->sample_aspect_ratio = VAR_13->sar;
    VAR_13->sar.num = VAR_13->sar.den = 0;

    return FUNC_8(&VAR_13->g);

end:
    FUNC_11(VAR_13);
    return VAR_16;
}
