
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_19__ {int frame_size; scalar_t__ sample_fmt; scalar_t__ channel_layout; int channels; int sample_rate; } ;
struct TYPE_18__ {int nb_samples; scalar_t__ format; scalar_t__ channel_layout; int* linesize; int channels; scalar_t__* data; } ;
struct TYPE_17__ {int size; int * data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;
typedef int AVCodec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__**) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int ,char*) ;
 int * FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*,int*,TYPE_1__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_1__*,TYPE_2__*,int*) ;
 int FUNC_11 (int *,int,int ,int ,int) ;
 scalar_t__ FUNC_12 (int *,int *,int) ;
 int FUNC_13 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_14(AVCodec *VAR_5, AVCodec *VAR_6, AVCodecContext *VAR_7,
                    AVCodecContext *VAR_8)
{
    AVPacket VAR_9;
    AVFrame *VAR_10, *VAR_11;
    uint8_t *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
    int VAR_14 = 0, VAR_15 = 0;
    int VAR_16 = 0;
    int VAR_17 = 0;
    int VAR_18 = 0;
    int VAR_19, VAR_20;

    VAR_10 = FUNC_1();
    if (!VAR_10) {
        FUNC_6(((void*)0), VAR_1, "Can't allocate input frame\n");
        return FUNC_0(VAR_3);
    }

    VAR_10->nb_samples = VAR_7->frame_size;
    VAR_10->format = VAR_7->sample_fmt;
    VAR_10->channel_layout = VAR_7->channel_layout;
    if (FUNC_3(VAR_10, 32) != 0) {
        FUNC_6(((void*)0), VAR_1, "Can't allocate a buffer for input frame\n");
        return FUNC_0(VAR_3);
    }

    VAR_11 = FUNC_1();
    if (!VAR_11) {
        FUNC_6(((void*)0), VAR_1, "Can't allocate output frame\n");
        return FUNC_0(VAR_3);
    }

    VAR_12 = FUNC_7(VAR_10->linesize[0] * VAR_4);
    if (!VAR_12) {
        FUNC_6(((void*)0), VAR_1, "Can't allocate memory for raw_in\n");
        return FUNC_0(VAR_3);
    }

    VAR_13 = FUNC_7(VAR_10->linesize[0] * VAR_4);
    if (!VAR_13) {
        FUNC_6(((void*)0), VAR_1, "Can't allocate memory for raw_out\n");
        return FUNC_0(VAR_3);
    }

    for (VAR_18 = 0; VAR_18 < VAR_4; VAR_18++) {
        FUNC_5(&VAR_9);
        VAR_9.data = ((void*)0);
        VAR_9.size = 0;

        FUNC_11((uint16_t*)(VAR_10->data[0]), VAR_18, VAR_7->sample_rate,
                           VAR_7->channels, VAR_7->frame_size);
        VAR_19 = VAR_10->nb_samples * VAR_10->channels * sizeof(uint16_t);
        if (VAR_19 > VAR_10->linesize[0]) {
            FUNC_6(((void*)0), VAR_1, "Incorrect value of input frame linesize\n");
            return 1;
        }
        FUNC_13(VAR_12 + VAR_14, VAR_10->data[0], VAR_19);
        VAR_14 += VAR_19;
        VAR_16 = FUNC_10(VAR_7, &VAR_9, VAR_10, &VAR_17);
        if (VAR_16 < 0) {
            FUNC_6(((void*)0), VAR_1, "Error encoding audio frame\n");
            return VAR_16;
        }


        if (VAR_17) {
            VAR_16 = FUNC_9(VAR_8, VAR_11, &VAR_17, &VAR_9);
            if (VAR_16 < 0) {
                FUNC_6(((void*)0), VAR_1, "Error decoding audio packet\n");
                return VAR_16;
            }

            if (VAR_17) {
                if (VAR_16 != VAR_9.size) {
                    FUNC_6(((void*)0), VAR_2, "Decoder consumed only part of a packet, it is allowed to do so -- need to update this test\n");
                    return VAR_0;
                }

                if (VAR_10->nb_samples != VAR_11->nb_samples) {
                    FUNC_6(((void*)0), VAR_1, "Error frames before and after decoding has different number of samples\n");
                    return VAR_0;
                }

                if (VAR_10->channel_layout != VAR_11->channel_layout) {
                    FUNC_6(((void*)0), VAR_1, "Error frames before and after decoding has different channel layout\n");
                    return VAR_0;
                }

                if (VAR_10->format != VAR_11->format) {
                    FUNC_6(((void*)0), VAR_1, "Error frames before and after decoding has different sample format\n");
                    return VAR_0;
                }
                VAR_20 = VAR_11->nb_samples * VAR_11->channels * sizeof(uint16_t);
                if (VAR_20 > VAR_11->linesize[0]) {
                    FUNC_6(((void*)0), VAR_1, "Incorrect value of output frame linesize\n");
                    return 1;
                }
                FUNC_13(VAR_13 + VAR_15, VAR_11->data[0], VAR_20);
                VAR_15 += VAR_20;
            }
        }
        FUNC_8(&VAR_9);
    }

    if (FUNC_12(VAR_12, VAR_13, VAR_20 * VAR_4) != 0) {
        FUNC_6(((void*)0), VAR_1, "Output differs\n");
        return 1;
    }

    FUNC_6(((void*)0), VAR_2, "OK\n");

    FUNC_4(&VAR_12);
    FUNC_4(&VAR_13);
    FUNC_2(&VAR_10);
    FUNC_2(&VAR_11);
    return 0;
}
