
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_11__ {int width; int height; scalar_t__ codec_tag; } ;
struct TYPE_10__ {int key_frame; int* linesize; scalar_t__* data; int pict_type; } ;
struct TYPE_9__ {int size; int * data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int ,char,char,char) ;
 int FUNC_2 (TYPE_3__*,int ,char*,int const,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_4 (int*,int*,int) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_3, void *VAR_4,
                                int *VAR_5, AVPacket *VAR_6)
{
    int VAR_7, VAR_8;
    const int VAR_9 = VAR_3->width;
    AVFrame *VAR_10 = VAR_4;
    uint16_t *VAR_11, *VAR_12, *VAR_13;
    const uint8_t *VAR_14, *VAR_15 = VAR_6->data;
    int VAR_16 = VAR_3->width * 8 / 3;

    if (VAR_9 <= 1 || VAR_3->height <= 0) {
        FUNC_2(VAR_3, VAR_1, "Dimensions %dx%d not supported.\n", VAR_9, VAR_3->height);
        return VAR_0;
    }

    if ( VAR_3->codec_tag == FUNC_1('0', '1', '2', 'v')
        && VAR_6->size % VAR_3->height == 0
        && VAR_6->size / VAR_3->height * 3 >= VAR_9 * 8)
        VAR_16 = VAR_6->size / VAR_3->height;

    if (VAR_6->size < VAR_3->height * VAR_16) {
        FUNC_2(VAR_3, VAR_1, "Packet too small: %d instead of %d\n",
               VAR_6->size, VAR_3->height * VAR_16);
        return VAR_0;
    }

    if ((VAR_8 = FUNC_3(VAR_3, VAR_10, 0)) < 0)
        return VAR_8;

    VAR_10->pict_type = VAR_2;
    VAR_10->key_frame = 1;

    VAR_14 = VAR_6->data + VAR_16;
    for (VAR_7 = 0; VAR_7 < VAR_3->height; VAR_7++) {
        uint16_t VAR_17[6] = {0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000};
        uint16_t VAR_18[3] = {0x8000, 0x8000, 0x8000};
        uint16_t VAR_19[3] = {0x8000, 0x8000, 0x8000};
        int VAR_20;
        VAR_11 = (uint16_t *)(VAR_10->data[0] + VAR_7 * VAR_10->linesize[0]);
        VAR_12 = (uint16_t *)(VAR_10->data[1] + VAR_7 * VAR_10->linesize[1]);
        VAR_13 = (uint16_t *)(VAR_10->data[2] + VAR_7 * VAR_10->linesize[2]);

        for (VAR_20 = 0; VAR_20 < VAR_9; VAR_20 += 6) {
            uint32_t VAR_21;

            if (VAR_9 - VAR_20 < 6 || VAR_14 - VAR_15 < 16) {
                VAR_11 = VAR_17;
                VAR_12 = VAR_18;
                VAR_13 = VAR_19;
            }

            if (VAR_14 - VAR_15 < 4)
                break;

            VAR_21 = FUNC_0(VAR_15);
            VAR_15 += 4;
            *VAR_12++ = VAR_21 << 6 & 0xFFC0;
            *VAR_11++ = VAR_21 >> 4 & 0xFFC0;
            *VAR_13++ = VAR_21 >> 14 & 0xFFC0;

            if (VAR_14 - VAR_15 < 4)
                break;

            VAR_21 = FUNC_0(VAR_15);
            VAR_15 += 4;
            *VAR_11++ = VAR_21 << 6 & 0xFFC0;
            *VAR_12++ = VAR_21 >> 4 & 0xFFC0;
            *VAR_11++ = VAR_21 >> 14 & 0xFFC0;

            if (VAR_14 - VAR_15 < 4)
                break;

            VAR_21 = FUNC_0(VAR_15);
            VAR_15 += 4;
            *VAR_13++ = VAR_21 << 6 & 0xFFC0;
            *VAR_11++ = VAR_21 >> 4 & 0xFFC0;
            *VAR_12++ = VAR_21 >> 14 & 0xFFC0;

            if (VAR_14 - VAR_15 < 4)
                break;

            VAR_21 = FUNC_0(VAR_15);
            VAR_15 += 4;
            *VAR_11++ = VAR_21 << 6 & 0xFFC0;
            *VAR_13++ = VAR_21 >> 4 & 0xFFC0;
            *VAR_11++ = VAR_21 >> 14 & 0xFFC0;

            if (VAR_9 - VAR_20 < 6)
                break;
        }

        if (VAR_20 < VAR_9) {
            VAR_11 = VAR_20 + (uint16_t *)(VAR_10->data[0] + VAR_7 * VAR_10->linesize[0]);
            VAR_12 = VAR_20/2 + (uint16_t *)(VAR_10->data[1] + VAR_7 * VAR_10->linesize[1]);
            VAR_13 = VAR_20/2 + (uint16_t *)(VAR_10->data[2] + VAR_7 * VAR_10->linesize[2]);
            FUNC_4(VAR_11, VAR_17, sizeof(*VAR_11) * (VAR_9 - VAR_20));
            FUNC_4(VAR_12, VAR_18, sizeof(*VAR_12) * (VAR_9 - VAR_20 + 1) / 2);
            FUNC_4(VAR_13, VAR_19, sizeof(*VAR_13) * (VAR_9 - VAR_20 + 1) / 2);
        }

        VAR_14 += VAR_16;
        VAR_15 = VAR_14 - VAR_16;
    }

    *VAR_5 = 1;

    return VAR_6->size;
}
