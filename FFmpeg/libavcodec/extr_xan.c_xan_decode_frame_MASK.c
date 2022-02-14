
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_20__ {int palettes_count; unsigned int* palettes; int cur_palette; int frame_size; int size; int last_frame; int buf; TYPE_5__* avctx; } ;
typedef TYPE_1__ XanContext ;
struct TYPE_24__ {int height; TYPE_1__* priv_data; } ;
struct TYPE_23__ {int* linesize; int * data; } ;
struct TYPE_22__ {int size; int * data; } ;
struct TYPE_21__ {int buffer; } ;
typedef TYPE_2__ GetByteContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,int ,char*,...) ;
 unsigned int* FUNC_5 (unsigned int*,int,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 size_t FUNC_8 (TYPE_2__*) ;
 void* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int const*,int) ;
 int FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_13 (size_t) ;
 int* VAR_9 ;
 int FUNC_14 (int ,unsigned int*,int ) ;
 scalar_t__ FUNC_15 (TYPE_1__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_16(AVCodecContext *VAR_10,
                            void *VAR_11, int *VAR_12,
                            AVPacket *VAR_13)
{
    AVFrame *VAR_14 = VAR_11;
    const uint8_t *VAR_15 = VAR_13->data;
    int VAR_16, VAR_17 = VAR_13->size;
    XanContext *VAR_18 = VAR_10->priv_data;
    GetByteContext VAR_19;
    int VAR_20 = 0;

    FUNC_10(&VAR_19, VAR_15, VAR_17);
    while (FUNC_7(&VAR_19) > 8 && VAR_20 != 128) {
        unsigned *VAR_21;
        uint32_t VAR_22;
        int VAR_23;
        int VAR_24;
        VAR_20 = FUNC_9(&VAR_19);
        VAR_23 = FUNC_6(&VAR_19);
        if (VAR_23 < 0) {
            FUNC_4(VAR_10, VAR_4, "Invalid tag size %d\n", VAR_23);
            return VAR_0;
        }
        VAR_23 = FUNC_1(VAR_23, FUNC_7(&VAR_19));
        switch (VAR_20) {
        case 130:
            if (VAR_23 < VAR_8)
                return VAR_0;
            if (VAR_18->palettes_count >= VAR_6)
                return VAR_0;
            VAR_21 = FUNC_5(VAR_18->palettes,
                                      VAR_18->palettes_count + 1, VAR_2);
            if (!VAR_21)
                return FUNC_0(VAR_5);
            VAR_18->palettes = VAR_21;
            VAR_21 += VAR_18->palettes_count * VAR_1;
            for (VAR_24 = 0; VAR_24 < VAR_7; VAR_24++) {





                int VAR_25 = VAR_9[FUNC_8(&VAR_19)];
                int VAR_26 = VAR_9[FUNC_8(&VAR_19)];
                int VAR_27 = VAR_9[FUNC_8(&VAR_19)];

                *VAR_21++ = (0xFFU << 24) | (VAR_25 << 16) | (VAR_26 << 8) | VAR_27;
            }
            VAR_18->palettes_count++;
            break;
        case 129:
            if (VAR_23 < 4)
                return VAR_0;
            VAR_22 = FUNC_9(&VAR_19);
            if (VAR_22 < VAR_18->palettes_count) {
                VAR_18->cur_palette = VAR_22;
            } else
                FUNC_4(VAR_10, VAR_4, "Invalid palette selected\n");
            break;
        case 128:
            break;
        default:
            FUNC_11(&VAR_19, VAR_23);
            break;
        }
    }
    VAR_17 = FUNC_7(&VAR_19);

    if (VAR_18->palettes_count <= 0) {
        FUNC_4(VAR_18->avctx, VAR_4, "No palette found\n");
        return VAR_0;
    }

    if ((VAR_16 = FUNC_12(VAR_10, VAR_14, VAR_3)) < 0)
        return VAR_16;

    if (!VAR_18->frame_size)
        VAR_18->frame_size = VAR_14->linesize[0] * VAR_18->avctx->height;

    FUNC_14(VAR_14->data[1],
           VAR_18->palettes + VAR_18->cur_palette * VAR_1, VAR_2);

    VAR_18->buf = VAR_19.buffer;
    VAR_18->size = VAR_17;

    if (FUNC_15(VAR_18, VAR_14) < 0)
        return VAR_0;

    FUNC_3(VAR_18->last_frame);
    if ((VAR_16 = FUNC_2(VAR_18->last_frame, VAR_14)) < 0)
        return VAR_16;

    *VAR_12 = 1;


    return VAR_17;
}
