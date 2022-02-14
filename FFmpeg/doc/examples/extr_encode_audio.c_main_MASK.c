
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_13__ {int bit_rate; int sample_rate; int channels; int frame_size; int channel_layout; int sample_fmt; } ;
struct TYPE_12__ {int nb_samples; scalar_t__* data; int channel_layout; int format; } ;
typedef int FILE ;
typedef int AVPacket ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;
typedef int AVCodec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (int **) ;
 TYPE_2__* FUNC_8 (int const*) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__**) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int const*,int *) ;
 int FUNC_12 (int const*,int ) ;
 int FUNC_13 (TYPE_2__*,TYPE_1__*,int *,int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (char const*,char*) ;
 int FUNC_17 (int ,char*,...) ;
 int FUNC_18 (int const*) ;
 int FUNC_19 (int const*) ;
 int FUNC_20 (float) ;
 int VAR_3 ;

int FUNC_21(int VAR_4, char **VAR_5)
{
    const char *VAR_6;
    const AVCodec *VAR_7;
    AVCodecContext *VAR_8= ((void*)0);
    AVFrame *VAR_9;
    AVPacket *VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14;
    FILE *VAR_15;
    uint16_t *VAR_16;
    float VAR_17, VAR_18;

    if (VAR_4 <= 1) {
        FUNC_17(VAR_3, "Usage: %s <output file>\n", VAR_5[0]);
        return 0;
    }
    VAR_6 = VAR_5[1];


    VAR_7 = FUNC_9(VAR_0);
    if (!VAR_7) {
        FUNC_17(VAR_3, "Codec not found\n");
        FUNC_14(1);
    }

    VAR_8 = FUNC_8(VAR_7);
    if (!VAR_8) {
        FUNC_17(VAR_3, "Could not allocate audio codec context\n");
        FUNC_14(1);
    }


    VAR_8->bit_rate = 64000;


    VAR_8->sample_fmt = VAR_1;
    if (!FUNC_12(VAR_7, VAR_8->sample_fmt)) {
        FUNC_17(VAR_3, "Encoder does not support sample format %s",
                FUNC_5(VAR_8->sample_fmt));
        FUNC_14(1);
    }


    VAR_8->sample_rate = FUNC_19(VAR_7);
    VAR_8->channel_layout = FUNC_18(VAR_7);
    VAR_8->channels = FUNC_4(VAR_8->channel_layout);


    if (FUNC_11(VAR_8, VAR_7, ((void*)0)) < 0) {
        FUNC_17(VAR_3, "Could not open codec\n");
        FUNC_14(1);
    }

    VAR_15 = FUNC_16(VAR_6, "wb");
    if (!VAR_15) {
        FUNC_17(VAR_3, "Could not open %s\n", VAR_6);
        FUNC_14(1);
    }


    VAR_10 = FUNC_6();
    if (!VAR_10) {
        FUNC_17(VAR_3, "could not allocate the packet\n");
        FUNC_14(1);
    }


    VAR_9 = FUNC_0();
    if (!VAR_9) {
        FUNC_17(VAR_3, "Could not allocate audio frame\n");
        FUNC_14(1);
    }

    VAR_9->nb_samples = VAR_8->frame_size;
    VAR_9->format = VAR_8->sample_fmt;
    VAR_9->channel_layout = VAR_8->channel_layout;


    VAR_14 = FUNC_2(VAR_9, 0);
    if (VAR_14 < 0) {
        FUNC_17(VAR_3, "Could not allocate audio data buffers\n");
        FUNC_14(1);
    }


    VAR_17 = 0;
    VAR_18 = 2 * VAR_2 * 440.0 / VAR_8->sample_rate;
    for (VAR_11 = 0; VAR_11 < 200; VAR_11++) {


        VAR_14 = FUNC_3(VAR_9);
        if (VAR_14 < 0)
            FUNC_14(1);
        VAR_16 = (uint16_t*)VAR_9->data[0];

        for (VAR_12 = 0; VAR_12 < VAR_8->frame_size; VAR_12++) {
            VAR_16[2*VAR_12] = (int)(FUNC_20(VAR_17) * 10000);

            for (VAR_13 = 1; VAR_13 < VAR_8->channels; VAR_13++)
                VAR_16[2*VAR_12 + VAR_13] = VAR_16[2*VAR_12];
            VAR_17 += VAR_18;
        }
        FUNC_13(VAR_8, VAR_9, VAR_10, VAR_15);
    }


    FUNC_13(VAR_8, ((void*)0), VAR_10, VAR_15);

    FUNC_15(VAR_15);

    FUNC_1(&VAR_9);
    FUNC_7(&VAR_10);
    FUNC_10(&VAR_8);

    return 0;
}
