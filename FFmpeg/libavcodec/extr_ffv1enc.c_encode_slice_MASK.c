
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_18__ ;


typedef int uint8_t ;
struct TYPE_27__ {scalar_t__ pix_fmt; } ;
struct TYPE_26__ {int* linesize; int const** data; } ;
struct TYPE_24__ {scalar_t__ bytestream_start; scalar_t__ bytestream_end; } ;
struct TYPE_22__ {TYPE_6__* f; } ;
struct TYPE_25__ {int slice_width; int slice_height; int slice_x; int slice_y; int slice_coding_mode; int version; int slice_rct_by_coef; int slice_rct_ry_coef; scalar_t__ ac; scalar_t__ colorspace; int chroma_h_shift; int chroma_v_shift; TYPE_4__ c; scalar_t__ use32bit; scalar_t__ transparency; scalar_t__ chroma_planes; int ac_byte_count; int pb; scalar_t__ key_frame; TYPE_2__ picture; TYPE_1__* avctx; } ;
struct TYPE_23__ {int step; } ;
struct TYPE_21__ {TYPE_5__* priv_data; } ;
struct TYPE_20__ {TYPE_3__* comp; } ;
typedef TYPE_4__ RangeCoder ;
typedef TYPE_5__ FFV1Context ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_7__*,int ,char*) ;
 TYPE_18__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_5__*,int const**,int*,int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_5__*,int const*,int const,int const,int,int,int) ;
 int FUNC_7 (TYPE_5__*,int const**,int,int,int*) ;
 int FUNC_8 (TYPE_5__*,int const**,int,int,int*) ;
 int FUNC_9 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_11 (TYPE_4__*,int) ;
 int FUNC_12 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_13(AVCodecContext *VAR_4, void *VAR_5)
{
    FFV1Context *VAR_6 = *(void **)VAR_5;
    FFV1Context *VAR_7 = VAR_6->avctx->priv_data;
    int VAR_8 = VAR_6->slice_width;
    int VAR_9 = VAR_6->slice_height;
    int VAR_10 = VAR_6->slice_x;
    int VAR_11 = VAR_6->slice_y;
    const AVFrame *const VAR_12 = VAR_7->picture.f;
    const int VAR_13 = FUNC_3(VAR_4->pix_fmt)->comp[0].step;
    int VAR_14;
    RangeCoder VAR_15 = VAR_6->c;
    const uint8_t *VAR_16[4] = {VAR_12->data[0] + VAR_13*VAR_10 + VAR_11*VAR_12->linesize[0],
                                VAR_12->data[1] ? VAR_12->data[1] + VAR_13*VAR_10 + VAR_11*VAR_12->linesize[1] : ((void*)0),
                                VAR_12->data[2] ? VAR_12->data[2] + VAR_13*VAR_10 + VAR_11*VAR_12->linesize[2] : ((void*)0),
                                VAR_12->data[3] ? VAR_12->data[3] + VAR_13*VAR_10 + VAR_11*VAR_12->linesize[3] : ((void*)0)};

    VAR_6->slice_coding_mode = 0;
    if (VAR_7->version > 3) {
        FUNC_4(VAR_6, VAR_16, VAR_12->linesize, VAR_8, VAR_9);
    } else {
        VAR_6->slice_rct_by_coef = 1;
        VAR_6->slice_rct_ry_coef = 1;
    }

retry:
    if (VAR_7->key_frame)
        FUNC_10(VAR_7, VAR_6);
    if (VAR_7->version > 2) {
        FUNC_9(VAR_7, VAR_6);
    }
    if (VAR_6->ac == VAR_0) {
        VAR_6->ac_byte_count = VAR_7->version > 2 || (!VAR_10 && !VAR_11) ? FUNC_11(&VAR_6->c, VAR_7->version > 2) : 0;
        FUNC_12(&VAR_6->pb,
                      VAR_6->c.bytestream_start + VAR_6->ac_byte_count,
                      VAR_6->c.bytestream_end - VAR_6->c.bytestream_start - VAR_6->ac_byte_count);
    }

    if (VAR_7->colorspace == 0 && VAR_4->pix_fmt != VAR_3) {
        const int VAR_17 = FUNC_0(VAR_8, VAR_7->chroma_h_shift);
        const int VAR_18 = FUNC_0(VAR_9, VAR_7->chroma_v_shift);
        const int VAR_19 = VAR_10 >> VAR_7->chroma_h_shift;
        const int VAR_20 = VAR_11 >> VAR_7->chroma_v_shift;

        VAR_14 = FUNC_6(VAR_6, VAR_12->data[0] + VAR_13*VAR_10 + VAR_11*VAR_12->linesize[0], VAR_8, VAR_9, VAR_12->linesize[0], 0, 1);

        if (VAR_7->chroma_planes) {
            VAR_14 |= FUNC_6(VAR_6, VAR_12->data[1] + VAR_13*VAR_19+VAR_20*VAR_12->linesize[1], VAR_17, VAR_18, VAR_12->linesize[1], 1, 1);
            VAR_14 |= FUNC_6(VAR_6, VAR_12->data[2] + VAR_13*VAR_19+VAR_20*VAR_12->linesize[2], VAR_17, VAR_18, VAR_12->linesize[2], 1, 1);
        }
        if (VAR_6->transparency)
            VAR_14 |= FUNC_6(VAR_6, VAR_12->data[3] + VAR_13*VAR_10 + VAR_11*VAR_12->linesize[3], VAR_8, VAR_9, VAR_12->linesize[3], 2, 1);
    } else if (VAR_4->pix_fmt == VAR_3) {
        VAR_14 = FUNC_6(VAR_6, VAR_12->data[0] + VAR_13*VAR_10 + VAR_11*VAR_12->linesize[0], VAR_8, VAR_9, VAR_12->linesize[0], 0, 2);
        VAR_14 |= FUNC_6(VAR_6, VAR_12->data[0] + 1 + VAR_13*VAR_10 + VAR_11*VAR_12->linesize[0], VAR_8, VAR_9, VAR_12->linesize[0], 1, 2);
    } else if (VAR_7->use32bit) {
        VAR_14 = FUNC_8(VAR_6, VAR_16, VAR_8, VAR_9, VAR_12->linesize);
    } else {
        VAR_14 = FUNC_7(VAR_6, VAR_16, VAR_8, VAR_9, VAR_12->linesize);
    }
    FUNC_5();

    if (VAR_14 < 0) {
        FUNC_1(VAR_6->slice_coding_mode == 0);
        if (VAR_6->version < 4 || !VAR_6->ac) {
            FUNC_2(VAR_4, VAR_2, "Buffer too small\n");
            return VAR_14;
        }
        FUNC_2(VAR_4, VAR_1, "Coding slice as PCM\n");
        VAR_6->slice_coding_mode = 1;
        VAR_6->c = VAR_15;
        goto retry;
    }

    return 0;
}
