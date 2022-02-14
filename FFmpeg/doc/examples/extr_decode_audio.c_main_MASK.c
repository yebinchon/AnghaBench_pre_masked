
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_18__ {int id; } ;
struct TYPE_17__ {int sample_fmt; int channels; int sample_rate; } ;
struct TYPE_16__ {scalar_t__ size; int * data; } ;
typedef int FILE ;
typedef TYPE_1__ AVPacket ;
typedef int AVFrame ;
typedef int AVCodecParserContext ;
typedef TYPE_2__ AVCodecContext ;
typedef TYPE_3__ AVCodec ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 () ;
 int FUNC_1 (int **) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (int) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (TYPE_1__**) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *,TYPE_2__*,int **,scalar_t__*,int *,size_t,int ,int ,int ) ;
 scalar_t__ FUNC_10 (int) ;
 TYPE_2__* FUNC_11 (TYPE_3__ const*) ;
 TYPE_3__* FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__**) ;
 scalar_t__ FUNC_14 (TYPE_2__*,TYPE_3__ const*,int *) ;
 int FUNC_15 (TYPE_2__*,TYPE_1__*,int *,int *) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (char const*,char*) ;
 int FUNC_19 (int ,char*,...) ;
 void* FUNC_20 (int *,int,int,int *) ;
 int FUNC_21 (char const**,int) ;
 int FUNC_22 (int *,int *,size_t) ;
 int FUNC_23 (char*,char const*,...) ;
 int VAR_5 ;

int FUNC_24(int VAR_6, char **VAR_7)
{
    const char *VAR_8, *VAR_9;
    const AVCodec *VAR_10;
    AVCodecContext *VAR_11= ((void*)0);
    AVCodecParserContext *VAR_12 = ((void*)0);
    int VAR_13, VAR_14;
    FILE *VAR_15, *VAR_16;
    uint8_t VAR_17[VAR_0 + VAR_3];
    uint8_t *VAR_18;
    size_t VAR_19;
    AVPacket *VAR_20;
    AVFrame *VAR_21 = ((void*)0);
    enum AVSampleFormat VAR_22;
    int VAR_23 = 0;
    const char *VAR_24;

    if (VAR_6 <= 2) {
        FUNC_19(VAR_5, "Usage: %s <input file> <output file>\n", VAR_7[0]);
        FUNC_16(0);
    }
    VAR_9 = VAR_7[1];
    VAR_8 = VAR_7[2];

    VAR_20 = FUNC_5();


    VAR_10 = FUNC_12(VAR_2);
    if (!VAR_10) {
        FUNC_19(VAR_5, "Codec not found\n");
        FUNC_16(1);
    }

    VAR_12 = FUNC_8(VAR_10->id);
    if (!VAR_12) {
        FUNC_19(VAR_5, "Parser not found\n");
        FUNC_16(1);
    }

    VAR_11 = FUNC_11(VAR_10);
    if (!VAR_11) {
        FUNC_19(VAR_5, "Could not allocate audio codec context\n");
        FUNC_16(1);
    }


    if (FUNC_14(VAR_11, VAR_10, ((void*)0)) < 0) {
        FUNC_19(VAR_5, "Could not open codec\n");
        FUNC_16(1);
    }

    VAR_15 = FUNC_18(VAR_9, "rb");
    if (!VAR_15) {
        FUNC_19(VAR_5, "Could not open %s\n", VAR_9);
        FUNC_16(1);
    }
    VAR_16 = FUNC_18(VAR_8, "wb");
    if (!VAR_16) {
        FUNC_2(VAR_11);
        FUNC_16(1);
    }


    VAR_18 = VAR_17;
    VAR_19 = FUNC_20(VAR_17, 1, VAR_0, VAR_15);

    while (VAR_19 > 0) {
        if (!VAR_21) {
            if (!(VAR_21 = FUNC_0())) {
                FUNC_19(VAR_5, "Could not allocate audio frame\n");
                FUNC_16(1);
            }
        }

        VAR_14 = FUNC_9(VAR_12, VAR_11, &VAR_20->data, &VAR_20->size,
                               VAR_18, VAR_19,
                               VAR_4, VAR_4, 0);
        if (VAR_14 < 0) {
            FUNC_19(VAR_5, "Error while parsing\n");
            FUNC_16(1);
        }
        VAR_18 += VAR_14;
        VAR_19 -= VAR_14;

        if (VAR_20->size)
            FUNC_15(VAR_11, VAR_20, VAR_21, VAR_16);

        if (VAR_19 < VAR_1) {
            FUNC_22(VAR_17, VAR_18, VAR_19);
            VAR_18 = VAR_17;
            VAR_13 = FUNC_20(VAR_18 + VAR_19, 1,
                        VAR_0 - VAR_19, VAR_15);
            if (VAR_13 > 0)
                VAR_19 += VAR_13;
        }
    }


    VAR_20->data = ((void*)0);
    VAR_20->size = 0;
    FUNC_15(VAR_11, VAR_20, VAR_21, VAR_16);


    VAR_22 = VAR_11->sample_fmt;

    if (FUNC_10(VAR_22)) {
        const char *VAR_25 = FUNC_4(VAR_22);
        FUNC_23("Warning: the sample format the decoder produced is planar "
               "(%s). This example will output the first channel only.\n",
               VAR_25 ? VAR_25 : "?");
        VAR_22 = FUNC_3(VAR_22);
    }

    VAR_23 = VAR_11->channels;
    if ((VAR_14 = FUNC_21(&VAR_24, VAR_22)) < 0)
        goto end;

    FUNC_23("Play the output audio file with the command:\n"
           "ffplay -f %s -ac %d -ar %d %s\n",
           VAR_24, VAR_23, VAR_11->sample_rate,
           VAR_8);
end:
    FUNC_17(VAR_16);
    FUNC_17(VAR_15);

    FUNC_13(&VAR_11);
    FUNC_7(VAR_12);
    FUNC_1(&VAR_21);
    FUNC_6(&VAR_20);

    return 0;
}
