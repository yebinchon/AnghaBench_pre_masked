
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
typedef void* int16_t ;
struct TYPE_13__ {int channels; scalar_t__ sample_fmt; int channel_layout; int debug; } ;
struct TYPE_12__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_11__ {int size; int * data; } ;
typedef int GetByteContext ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,void**,int) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*,char*,int,int) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_3__*,int const*) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_4, void *VAR_5,
                                   int *VAR_6, AVPacket *VAR_7)
{
    AVFrame *VAR_8 = VAR_5;
    const uint8_t *VAR_9 = VAR_7->data;
    int VAR_10 = VAR_7->size;
    GetByteContext VAR_11;
    int VAR_12, VAR_13, VAR_14;
    int VAR_15, VAR_16;
    int16_t *VAR_17;
    int32_t *VAR_18;

    if (VAR_10 < 4) {
        FUNC_1(VAR_4, VAR_1, "PCM packet too small\n");
        return VAR_0;
    }

    if ((VAR_14 = FUNC_10(VAR_4, VAR_9)))
        return VAR_14;
    VAR_9 += 4;
    VAR_10 -= 4;

    FUNC_5(&VAR_11, VAR_9, VAR_10);


    VAR_12 = FUNC_0(VAR_4->channels, 2);
    VAR_15 = (VAR_12 *
                   (VAR_4->sample_fmt == VAR_2 ? 16 : 24)) >> 3;
    VAR_16 = VAR_10 / VAR_15;


    VAR_8->nb_samples = VAR_16;
    if ((VAR_14 = FUNC_9(VAR_4, VAR_8, 0)) < 0)
        return VAR_14;
    VAR_17 = (int16_t *)VAR_8->data[0];
    VAR_18 = (int32_t *)VAR_8->data[0];

    if (VAR_16) {
        switch (VAR_4->channel_layout) {

        case 129:
        case 135:
        case 136:
            VAR_16 *= VAR_12;
            if (VAR_2 == VAR_4->sample_fmt) {



                do {
                    *VAR_17++ = FUNC_2(&VAR_11);
                } while (--VAR_16);

            } else {
                do {
                    *VAR_18++ = FUNC_3(&VAR_11) << 8;
                } while (--VAR_16);
            }
            break;

        case 130:
        case 128:
        case 137:
        case 134:
            if (VAR_2 == VAR_4->sample_fmt) {
                do {




                    VAR_13 = VAR_4->channels;
                    do {
                        *VAR_17++ = FUNC_2(&VAR_11);
                    } while (--VAR_13);

                    FUNC_6(&VAR_11, 2);
                } while (--VAR_16);
            } else {
                do {
                    VAR_13 = VAR_4->channels;
                    do {
                        *VAR_18++ = FUNC_3(&VAR_11) << 8;
                    } while (--VAR_13);
                    FUNC_6(&VAR_11, 3);
                } while (--VAR_16);
            }
            break;

        case 133:
            if (VAR_2 == VAR_4->sample_fmt) {
                do {
                    VAR_17[0] = FUNC_2(&VAR_11);
                    VAR_17[1] = FUNC_2(&VAR_11);
                    VAR_17[2] = FUNC_2(&VAR_11);
                    VAR_17[4] = FUNC_2(&VAR_11);
                    VAR_17[5] = FUNC_2(&VAR_11);
                    VAR_17[3] = FUNC_2(&VAR_11);
                    VAR_17 += 6;
                } while (--VAR_16);
            } else {
                do {
                    VAR_18[0] = FUNC_3(&VAR_11) << 8;
                    VAR_18[1] = FUNC_3(&VAR_11) << 8;
                    VAR_18[2] = FUNC_3(&VAR_11) << 8;
                    VAR_18[4] = FUNC_3(&VAR_11) << 8;
                    VAR_18[5] = FUNC_3(&VAR_11) << 8;
                    VAR_18[3] = FUNC_3(&VAR_11) << 8;
                    VAR_18 += 6;
                } while (--VAR_16);
            }
            break;

        case 132:
            if (VAR_2 == VAR_4->sample_fmt) {
                do {
                    VAR_17[0] = FUNC_2(&VAR_11);
                    VAR_17[1] = FUNC_2(&VAR_11);
                    VAR_17[2] = FUNC_2(&VAR_11);
                    VAR_17[5] = FUNC_2(&VAR_11);
                    VAR_17[3] = FUNC_2(&VAR_11);
                    VAR_17[4] = FUNC_2(&VAR_11);
                    VAR_17[6] = FUNC_2(&VAR_11);
                    VAR_17 += 7;
                    FUNC_6(&VAR_11, 2);
                } while (--VAR_16);
            } else {
                do {
                    VAR_18[0] = FUNC_3(&VAR_11) << 8;
                    VAR_18[1] = FUNC_3(&VAR_11) << 8;
                    VAR_18[2] = FUNC_3(&VAR_11) << 8;
                    VAR_18[5] = FUNC_3(&VAR_11) << 8;
                    VAR_18[3] = FUNC_3(&VAR_11) << 8;
                    VAR_18[4] = FUNC_3(&VAR_11) << 8;
                    VAR_18[6] = FUNC_3(&VAR_11) << 8;
                    VAR_18 += 7;
                    FUNC_6(&VAR_11, 3);
                } while (--VAR_16);
            }
            break;

        case 131:
            if (VAR_2 == VAR_4->sample_fmt) {
                do {
                    VAR_17[0] = FUNC_2(&VAR_11);
                    VAR_17[1] = FUNC_2(&VAR_11);
                    VAR_17[2] = FUNC_2(&VAR_11);
                    VAR_17[6] = FUNC_2(&VAR_11);
                    VAR_17[4] = FUNC_2(&VAR_11);
                    VAR_17[5] = FUNC_2(&VAR_11);
                    VAR_17[7] = FUNC_2(&VAR_11);
                    VAR_17[3] = FUNC_2(&VAR_11);
                    VAR_17 += 8;
                } while (--VAR_16);
            } else {
                do {
                    VAR_18[0] = FUNC_3(&VAR_11) << 8;
                    VAR_18[1] = FUNC_3(&VAR_11) << 8;
                    VAR_18[2] = FUNC_3(&VAR_11) << 8;
                    VAR_18[6] = FUNC_3(&VAR_11) << 8;
                    VAR_18[4] = FUNC_3(&VAR_11) << 8;
                    VAR_18[5] = FUNC_3(&VAR_11) << 8;
                    VAR_18[7] = FUNC_3(&VAR_11) << 8;
                    VAR_18[3] = FUNC_3(&VAR_11) << 8;
                    VAR_18 += 8;
                } while (--VAR_16);
            }
            break;
        }
    }

    *VAR_6 = 1;

    VAR_14 = FUNC_7(&VAR_11);
    if (VAR_4->debug & VAR_3)
        FUNC_8(VAR_4, "pcm_bluray_decode_frame: decoded %d -> %d bytes\n",
                VAR_14, VAR_10);
    return VAR_14 + 4;
}
