
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_16__ {int codec_id; } ;
struct TYPE_15__ {TYPE_1__** streams; } ;
struct TYPE_14__ {int width; int height; int format; int linesize; scalar_t__ data; } ;
struct TYPE_13__ {TYPE_4__* codecpar; } ;
typedef int AVPacket ;
typedef int AVInputFormat ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFormatContext ;
typedef int AVDictionary ;
typedef TYPE_4__ AVCodecParameters ;
typedef int AVCodecContext ;
typedef int AVCodec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,char*,char*,int ) ;
 int * FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (TYPE_2__**) ;
 int FUNC_6 (int **,int*,int,int,int,int) ;
 int FUNC_7 (int **,int*,int const**,int ,int,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (void*,int ,char*,...) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*,int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *,TYPE_2__*,int*,int *) ;
 int * FUNC_14 (int ) ;
 int FUNC_15 (int **) ;
 int FUNC_16 (int *,int *,int **) ;
 int FUNC_17 (int *,TYPE_4__*) ;
 int FUNC_18 (TYPE_3__**) ;
 int FUNC_19 (TYPE_3__*,int *) ;
 int FUNC_20 (TYPE_3__**,char const*,int *,int *) ;

int FUNC_21(uint8_t *VAR_3[4], int VAR_4[4],
                  int *VAR_5, int *VAR_6, enum AVPixelFormat *VAR_7,
                  const char *VAR_8, void *VAR_9)
{
    AVInputFormat *VAR_10 = ((void*)0);
    AVFormatContext *VAR_11 = ((void*)0);
    AVCodec *VAR_12;
    AVCodecContext *VAR_13;
    AVCodecParameters *VAR_14;
    AVFrame *VAR_15;
    int VAR_16, VAR_17 = 0;
    AVPacket VAR_18;
    AVDictionary *VAR_19=((void*)0);

    FUNC_8(&VAR_18);

    VAR_10 = FUNC_3("image2pipe");
    if ((VAR_17 = FUNC_20(&VAR_11, VAR_8, VAR_10, ((void*)0))) < 0) {
        FUNC_9(VAR_9, VAR_0,
               "Failed to open input file '%s'\n", VAR_8);
        return VAR_17;
    }

    if ((VAR_17 = FUNC_19(VAR_11, ((void*)0))) < 0) {
        FUNC_9(VAR_9, VAR_0, "Find stream info failed\n");
        return VAR_17;
    }

    VAR_14 = VAR_11->streams[0]->codecpar;
    VAR_12 = FUNC_14(VAR_14->codec_id);
    if (!VAR_12) {
        FUNC_9(VAR_9, VAR_0, "Failed to find codec\n");
        VAR_17 = FUNC_0(VAR_1);
        goto end;
    }

    VAR_13 = FUNC_12(VAR_12);
    if (!VAR_13) {
        FUNC_9(VAR_9, VAR_0, "Failed to alloc video decoder context\n");
        VAR_17 = FUNC_0(VAR_2);
        goto end;
    }

    VAR_17 = FUNC_17(VAR_13, VAR_14);
    if (VAR_17 < 0) {
        FUNC_9(VAR_9, VAR_0, "Failed to copy codec parameters to decoder context\n");
        goto end;
    }

    FUNC_2(&VAR_19, "thread_type", "slice", 0);
    if ((VAR_17 = FUNC_16(VAR_13, VAR_12, &VAR_19)) < 0) {
        FUNC_9(VAR_9, VAR_0, "Failed to open codec\n");
        goto end;
    }

    if (!(VAR_15 = FUNC_4()) ) {
        FUNC_9(VAR_9, VAR_0, "Failed to alloc frame\n");
        VAR_17 = FUNC_0(VAR_2);
        goto end;
    }

    VAR_17 = FUNC_11(VAR_11, &VAR_18);
    if (VAR_17 < 0) {
        FUNC_9(VAR_9, VAR_0, "Failed to read frame from file\n");
        goto end;
    }

    VAR_17 = FUNC_13(VAR_13, VAR_15, &VAR_16, &VAR_18);
    if (VAR_17 < 0 || !VAR_16) {
        FUNC_9(VAR_9, VAR_0, "Failed to decode image from file\n");
        if (VAR_17 >= 0)
            VAR_17 = -1;
        goto end;
    }

    *VAR_5 = VAR_15->width;
    *VAR_6 = VAR_15->height;
    *VAR_7 = VAR_15->format;

    if ((VAR_17 = FUNC_6(VAR_3, VAR_4, *VAR_5, *VAR_6, *VAR_7, 16)) < 0)
        goto end;
    VAR_17 = 0;

    FUNC_7(VAR_3, VAR_4, (const uint8_t **)VAR_15->data, VAR_15->linesize, *VAR_7, *VAR_5, *VAR_6);

end:
    FUNC_10(&VAR_18);
    FUNC_15(&VAR_13);
    FUNC_18(&VAR_11);
    FUNC_5(&VAR_15);
    FUNC_1(&VAR_19);

    if (VAR_17 < 0)
        FUNC_9(VAR_9, VAR_0, "Error loading image file '%s'\n", VAR_8);
    return VAR_17;
}
