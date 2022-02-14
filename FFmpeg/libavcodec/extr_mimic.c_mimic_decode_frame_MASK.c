
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_23__ {TYPE_17__* f; } ;
struct TYPE_22__ {int width; int height; int active_thread_type; int pix_fmt; TYPE_2__* priv_data; } ;
struct TYPE_21__ {int size; int * data; } ;
struct TYPE_19__ {int (* bswap_buf ) (int ,int const*,int) ;} ;
struct TYPE_20__ {int* num_hblocks; size_t prev_index; size_t cur_index; size_t next_prev_index; int next_cur_index; TYPE_7__* frames; int swap_buf; int gb; TYPE_1__ bbdsp; int swap_buf_size; TYPE_4__* avctx; int * num_vblocks; } ;
struct TYPE_18__ {int pict_type; int * data; } ;
typedef TYPE_2__ MimicContext ;
typedef int GetByteContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (void*,TYPE_17__*) ;
 int FUNC_4 (TYPE_4__*,int ,char*) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int const*,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (TYPE_2__*,int,int,int) ;
 int FUNC_12 (TYPE_4__*,int,int) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*,TYPE_7__*,int ) ;
 int FUNC_15 (TYPE_4__*,TYPE_7__*) ;
 int FUNC_16 (TYPE_7__*,int ,int ) ;
 int FUNC_17 (void*) ;
 int FUNC_18 (int *,int ,int) ;
 int FUNC_19 (int ,int const*,int) ;

__attribute__((used)) static int FUNC_20(AVCodecContext *VAR_11, void *VAR_12,
                              int *VAR_13, AVPacket *VAR_14)
{
    const uint8_t *VAR_15 = VAR_14->data;
    int VAR_16 = VAR_14->size;
    int VAR_17 = VAR_16 - VAR_10;
    MimicContext *VAR_18 = VAR_11->priv_data;
    GetByteContext VAR_19;
    int VAR_20;
    int VAR_21, VAR_22;
    int VAR_23, VAR_24;
    int VAR_25;

    if (VAR_16 <= VAR_10) {
        FUNC_4(VAR_11, VAR_3, "insufficient data\n");
        return VAR_0;
    }

    FUNC_9(&VAR_19, VAR_15, VAR_10);
    FUNC_10(&VAR_19, 2);
    VAR_23 = FUNC_7(&VAR_19);
    VAR_21 = FUNC_7(&VAR_19);
    VAR_22 = FUNC_7(&VAR_19);
    FUNC_10(&VAR_19, 4);
    VAR_20 = FUNC_8(&VAR_19);
    VAR_24 = FUNC_6(&VAR_19);
    FUNC_10(&VAR_19, 3);

    if (!VAR_18->avctx) {
        int VAR_26;

        if (!(VAR_21 == 160 && VAR_22 == 120) &&
            !(VAR_21 == 320 && VAR_22 == 240)) {
            FUNC_4(VAR_11, VAR_3, "invalid width/height!\n");
            return VAR_0;
        }

        VAR_25 = FUNC_12(VAR_11, VAR_21, VAR_22);
        if (VAR_25 < 0)
            return VAR_25;

        VAR_18->avctx = VAR_11;
        VAR_11->pix_fmt = VAR_6;
        for (VAR_26 = 0; VAR_26 < 3; VAR_26++) {
            VAR_18->num_vblocks[VAR_26] = FUNC_1(VAR_22, 3 + !!VAR_26);
            VAR_18->num_hblocks[VAR_26] = VAR_21 >> (3 + !!VAR_26);
        }
    } else if (VAR_21 != VAR_18->avctx->width || VAR_22 != VAR_18->avctx->height) {
        FUNC_5(VAR_11, "Resolution changing");
        return VAR_1;
    }

    if (VAR_20 && !VAR_18->frames[VAR_18->prev_index].f->data[0]) {
        FUNC_4(VAR_11, VAR_3, "decoding must start with keyframe\n");
        return VAR_0;
    }

    FUNC_15(VAR_11, &VAR_18->frames[VAR_18->cur_index]);
    VAR_18->frames[VAR_18->cur_index].f->pict_type = VAR_20 ? VAR_5 :
                                                           VAR_4;
    if ((VAR_25 = FUNC_14(VAR_11, &VAR_18->frames[VAR_18->cur_index],
                                    VAR_2)) < 0)
        return VAR_25;

    VAR_18->next_prev_index = VAR_18->cur_index;
    VAR_18->next_cur_index = (VAR_18->cur_index - 1) & 15;

    FUNC_13(VAR_11);

    FUNC_2(&VAR_18->swap_buf, &VAR_18->swap_buf_size, VAR_17);
    if (!VAR_18->swap_buf)
        return FUNC_0(VAR_7);

    VAR_18->bbdsp.bswap_buf(VAR_18->swap_buf,
                         (const uint32_t *) (VAR_15 + VAR_10),
                         VAR_17 >> 2);
    FUNC_18(&VAR_18->gb, VAR_18->swap_buf, VAR_17 << 3);

    VAR_25 = FUNC_11(VAR_18, VAR_23, VAR_24, !VAR_20);
    FUNC_16(&VAR_18->frames[VAR_18->cur_index], VAR_9, 0);
    if (VAR_25 < 0) {
        if (!(VAR_11->active_thread_type & VAR_8))
            FUNC_15(VAR_11, &VAR_18->frames[VAR_18->cur_index]);
        return VAR_25;
    }

    if ((VAR_25 = FUNC_3(VAR_12, VAR_18->frames[VAR_18->cur_index].f)) < 0)
        return VAR_25;
    *VAR_13 = 1;

    FUNC_17(VAR_12);

    VAR_18->prev_index = VAR_18->next_prev_index;
    VAR_18->cur_index = VAR_18->next_cur_index;

    return VAR_16;
}
