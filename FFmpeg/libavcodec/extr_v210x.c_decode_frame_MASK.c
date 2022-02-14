
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_12__ {int width; int height; } ;
struct TYPE_11__ {int key_frame; int* linesize; int pict_type; scalar_t__* data; } ;
struct TYPE_10__ {int size; scalar_t__ data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_3, void *VAR_4, int *VAR_5,
                        AVPacket *VAR_6)
{
    const uint32_t *VAR_7 = (const uint32_t *)VAR_6->data;
    AVFrame *VAR_8 = VAR_4;
    int VAR_9 = VAR_3->width;
    int VAR_10 = 0;
    uint16_t *VAR_11, *VAR_12, *VAR_13, *VAR_14;
    int VAR_15;

    if (VAR_6->size < VAR_3->width * VAR_3->height * 8 / 3) {
        FUNC_1(VAR_3, VAR_1, "Packet too small\n");
        return VAR_0;
    }

    if (VAR_6->size > VAR_3->width * VAR_3->height * 8 / 3) {
        FUNC_2(VAR_3, "(Probably) padded data");
    }

    if ((VAR_15 = FUNC_3(VAR_3, VAR_8, 0)) < 0)
        return VAR_15;

    VAR_11 = (uint16_t *)VAR_8->data[0];
    VAR_12 = (uint16_t *)VAR_8->data[1];
    VAR_13 = (uint16_t *)VAR_8->data[2];
    VAR_14 = VAR_11 + VAR_9;
    VAR_8->pict_type = VAR_2;
    VAR_8->key_frame = 1;

    for (;;) {
        uint32_t VAR_16 = FUNC_0(*VAR_7++);
        *VAR_12++ = (VAR_16 >> 16) & 0xFFC0;
        *VAR_11++ = (VAR_16 >> 6 ) & 0xFFC0;
        *VAR_13++ = (VAR_16 << 4 ) & 0xFFC0;

        VAR_16 = FUNC_0(*VAR_7++);
        *VAR_11++ = (VAR_16 >> 16) & 0xFFC0;

        if (VAR_11 >= VAR_14) {
            VAR_11 += VAR_8->linesize[0] / 2 - VAR_9;
            VAR_12 += VAR_8->linesize[1] / 2 - VAR_9 / 2;
            VAR_13 += VAR_8->linesize[2] / 2 - VAR_9 / 2;
            VAR_14 = VAR_11 + VAR_9;
            if (++VAR_10 >= VAR_3->height)
                break;
        }

        *VAR_12++ = (VAR_16 >> 6 ) & 0xFFC0;
        *VAR_11++ = (VAR_16 << 4 ) & 0xFFC0;

        VAR_16 = FUNC_0(*VAR_7++);
        *VAR_13++ = (VAR_16 >> 16) & 0xFFC0;
        *VAR_11++ = (VAR_16 >> 6 ) & 0xFFC0;

        if (VAR_11 >= VAR_14) {
            VAR_11 += VAR_8->linesize[0] / 2 - VAR_9;
            VAR_12 += VAR_8->linesize[1] / 2 - VAR_9 / 2;
            VAR_13 += VAR_8->linesize[2] / 2 - VAR_9 / 2;
            VAR_14 = VAR_11 + VAR_9;
            if (++VAR_10 >= VAR_3->height)
                break;
        }

        *VAR_12++ = (VAR_16 << 4 ) & 0xFFC0;

        VAR_16 = FUNC_0(*VAR_7++);
        *VAR_11++ = (VAR_16 >> 16) & 0xFFC0;
        *VAR_13++ = (VAR_16 >> 6 ) & 0xFFC0;
        *VAR_11++ = (VAR_16 << 4 ) & 0xFFC0;
        if (VAR_11 >= VAR_14) {
            VAR_11 += VAR_8->linesize[0] / 2 - VAR_9;
            VAR_12 += VAR_8->linesize[1] / 2 - VAR_9 / 2;
            VAR_13 += VAR_8->linesize[2] / 2 - VAR_9 / 2;
            VAR_14 = VAR_11 + VAR_9;
            if (++VAR_10 >= VAR_3->height)
                break;
        }
    }

    *VAR_5 = 1;

    return VAR_6->size;
}
