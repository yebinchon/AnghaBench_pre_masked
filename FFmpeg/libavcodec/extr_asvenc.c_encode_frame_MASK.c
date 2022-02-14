
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_19__ {int (* bswap_buf ) (int *,int *,int) ;} ;
struct TYPE_23__ {int mb_height; int mb_width; int mb_height2; int mb_width2; TYPE_1__ bbdsp; int pb; int block; } ;
struct TYPE_22__ {scalar_t__ codec_id; TYPE_5__* priv_data; } ;
struct TYPE_21__ {int width; int height; int* linesize; int ** data; int format; } ;
struct TYPE_20__ {size_t* data; int size; int flags; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ ASV1Context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int,int) ;
 int VAR_4 ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (TYPE_3__*,TYPE_3__ const*) ;
 int FUNC_5 (TYPE_3__**) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_5__* const,TYPE_3__ const*,int,int) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_5__* const,int ) ;
 int FUNC_11 (TYPE_4__*,TYPE_2__*,scalar_t__,int ) ;
 size_t* VAR_5 ;
 int FUNC_12 (int *,size_t*,int) ;
 int FUNC_13 (int *,int,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *,int) ;

__attribute__((used)) static int FUNC_16(AVCodecContext *VAR_6, AVPacket *VAR_7,
                        const AVFrame *VAR_8, int *VAR_9)
{
    ASV1Context *const VAR_10 = VAR_6->priv_data;
    int VAR_11, VAR_12;
    int VAR_13, VAR_14;

    if (VAR_8->width % 16 || VAR_8->height % 16) {
        AVFrame *VAR_15 = FUNC_3();
        int VAR_16;

        if (!VAR_15)
            return FUNC_0(VAR_3);
        VAR_15->format = VAR_8->format;
        VAR_15->width = FUNC_2(VAR_8->width, 16);
        VAR_15->height = FUNC_2(VAR_8->height, 16);
        VAR_12 = FUNC_6(VAR_15, 32);
        if (VAR_12 < 0) {
            FUNC_5(&VAR_15);
            return VAR_12;
        }

        VAR_12 = FUNC_4(VAR_15, VAR_8);
        if (VAR_12 < 0) {
            FUNC_5(&VAR_15);
            return VAR_12;
        }

        for (VAR_16 = 0; VAR_16<3; VAR_16++) {
            int VAR_17, VAR_18;
            int VAR_19 = FUNC_1(VAR_8->width, !!VAR_16);
            int VAR_20 = FUNC_1(VAR_8->height, !!VAR_16);
            int VAR_21 = FUNC_1(VAR_15->width, !!VAR_16);
            int VAR_22 = FUNC_1(VAR_15->height, !!VAR_16);
            for (VAR_18=0; VAR_18<VAR_20; VAR_18++)
                for (VAR_17=VAR_19; VAR_17<VAR_21; VAR_17++)
                    VAR_15->data[VAR_16][VAR_17 + VAR_18*VAR_15->linesize[VAR_16]] =
                        VAR_15->data[VAR_16][VAR_19 - 1 + VAR_18*VAR_15->linesize[VAR_16]];
            for (VAR_18=VAR_20; VAR_18<VAR_22; VAR_18++)
                for (VAR_17=0; VAR_17<VAR_21; VAR_17++)
                    VAR_15->data[VAR_16][VAR_17 + VAR_18*VAR_15->linesize[VAR_16]] =
                        VAR_15->data[VAR_16][VAR_17 + (VAR_20-1)*VAR_15->linesize[VAR_16]];
        }
        VAR_12 = FUNC_16(VAR_6, VAR_7, VAR_15, VAR_9);

        FUNC_5(&VAR_15);
        return VAR_12;
    }

    if ((VAR_12 = FUNC_11(VAR_6, VAR_7, VAR_10->mb_height * VAR_10->mb_width * VAR_4 +
                                VAR_1, 0)) < 0)
        return VAR_12;

    FUNC_12(&VAR_10->pb, VAR_7->data, VAR_7->size);

    for (VAR_14 = 0; VAR_14 < VAR_10->mb_height2; VAR_14++) {
        for (VAR_13 = 0; VAR_13 < VAR_10->mb_width2; VAR_13++) {
            FUNC_8(VAR_10, VAR_8, VAR_13, VAR_14);
            FUNC_10(VAR_10, VAR_10->block);
        }
    }

    if (VAR_10->mb_width2 != VAR_10->mb_width) {
        VAR_13 = VAR_10->mb_width2;
        for (VAR_14 = 0; VAR_14 < VAR_10->mb_height2; VAR_14++) {
            FUNC_8(VAR_10, VAR_8, VAR_13, VAR_14);
            FUNC_10(VAR_10, VAR_10->block);
        }
    }

    if (VAR_10->mb_height2 != VAR_10->mb_height) {
        VAR_14 = VAR_10->mb_height2;
        for (VAR_13 = 0; VAR_13 < VAR_10->mb_width; VAR_13++) {
            FUNC_8(VAR_10, VAR_8, VAR_13, VAR_14);
            FUNC_10(VAR_10, VAR_10->block);
        }
    }
    FUNC_9();

    FUNC_7(&VAR_10->pb);
    while (FUNC_14(&VAR_10->pb) & 31)
        FUNC_13(&VAR_10->pb, 8, 0);

    VAR_11 = FUNC_14(&VAR_10->pb) / 32;

    if (VAR_6->codec_id == VAR_0) {
        VAR_10->bbdsp.bswap_buf((uint32_t *) VAR_7->data,
                           (uint32_t *) VAR_7->data, VAR_11);
    } else {
        int VAR_23;
        for (VAR_23 = 0; VAR_23 < 4 * VAR_11; VAR_23++)
            VAR_7->data[VAR_23] = VAR_5[VAR_7->data[VAR_23]];
    }

    VAR_7->size = VAR_11 * 4;
    VAR_7->flags |= VAR_2;
    *VAR_9 = 1;

    return 0;
}
