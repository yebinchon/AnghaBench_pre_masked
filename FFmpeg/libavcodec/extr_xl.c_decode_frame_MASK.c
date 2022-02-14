
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_11__ {int width; int height; } ;
struct TYPE_10__ {int key_frame; int** data; int * linesize; int pict_type; } ;
struct TYPE_9__ {int* data; int size; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__* const,int ) ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_4,
                        void *VAR_5, int *VAR_6,
                        AVPacket *VAR_7)
{
    const uint8_t *VAR_8 = VAR_7->data;
    int VAR_9 = VAR_7->size;
    AVFrame *const VAR_10 = VAR_5;
    uint8_t *VAR_11, *VAR_12, *VAR_13;
    int VAR_14, VAR_15, VAR_16;
    int VAR_17;
    uint32_t VAR_18;
    int VAR_19, VAR_20, VAR_21, VAR_22 = 0, VAR_23 = 0, VAR_24 = 0;

    if (VAR_4->width % 4) {
        FUNC_1(VAR_4, VAR_1, "width is not a multiple of 4\n");
        return VAR_0;
    }
    if (VAR_9 < VAR_4->width * VAR_4->height) {
        FUNC_1(VAR_4, VAR_1, "Packet is too small\n");
        return VAR_0;
    }

    if ((VAR_16 = FUNC_2(VAR_4, VAR_10, 0)) < 0)
        return VAR_16;
    VAR_10->pict_type = VAR_2;
    VAR_10->key_frame = 1;

    VAR_11 = VAR_10->data[0];
    VAR_12 = VAR_10->data[1];
    VAR_13 = VAR_10->data[2];

    VAR_17 = VAR_4->width - 4;

    for (VAR_14 = 0; VAR_14 < VAR_4->height; VAR_14++) {

        VAR_8 += VAR_17;

        for (VAR_15 = 0; VAR_15 < VAR_4->width; VAR_15 += 4) {

            VAR_18 = FUNC_0(VAR_8);
            VAR_8 -= 4;
            VAR_18 = ((VAR_18 >> 16) & 0xFFFF) | ((VAR_18 & 0xFFFF) << 16);

            if (!VAR_15)
                VAR_19 = (VAR_18 & 0x1F) << 2;
            else
                VAR_19 = VAR_22 + VAR_3[VAR_18 & 0x1F];
            VAR_18 >>= 5;
            VAR_20 = VAR_19 + VAR_3[VAR_18 & 0x1F];
            VAR_18 >>= 5;
            VAR_21 = VAR_20 + VAR_3[VAR_18 & 0x1F];
            VAR_18 >>= 6;
            VAR_22 = VAR_21 + VAR_3[VAR_18 & 0x1F];
            VAR_18 >>= 5;
            if (!VAR_15)
                VAR_23 = (VAR_18 & 0x1F) << 2;
            else
                VAR_23 += VAR_3[VAR_18 & 0x1F];
            VAR_18 >>= 5;
            if (!VAR_15)
                VAR_24 = (VAR_18 & 0x1F) << 2;
            else
                VAR_24 += VAR_3[VAR_18 & 0x1F];

            VAR_11[VAR_15 + 0] = VAR_19 << 1;
            VAR_11[VAR_15 + 1] = VAR_20 << 1;
            VAR_11[VAR_15 + 2] = VAR_21 << 1;
            VAR_11[VAR_15 + 3] = VAR_22 << 1;

            VAR_12[VAR_15 >> 2] = VAR_23 << 1;
            VAR_13[VAR_15 >> 2] = VAR_24 << 1;
        }

        VAR_8 += VAR_4->width + 4;
        VAR_11 += VAR_10->linesize[0];
        VAR_12 += VAR_10->linesize[1];
        VAR_13 += VAR_10->linesize[2];
    }

    *VAR_6 = 1;

    return VAR_9;
}
