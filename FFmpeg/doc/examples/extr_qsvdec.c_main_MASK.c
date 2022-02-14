
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int buf ;
struct TYPE_23__ {int get_format; TYPE_2__* opaque; scalar_t__ extradata_size; int extradata; scalar_t__ codec_id; } ;
struct TYPE_22__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_21__ {scalar_t__ stream_index; scalar_t__ size; int * data; int member_0; } ;
struct TYPE_20__ {scalar_t__ index; TYPE_1__* codecpar; int discard; } ;
struct TYPE_19__ {int hw_device_ref; int * member_0; } ;
struct TYPE_18__ {scalar_t__ codec_id; scalar_t__ extradata_size; int extradata; } ;
typedef TYPE_2__ DecodeContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef int AVIOContext ;
typedef int AVFrame ;
typedef TYPE_5__ AVFormatContext ;
typedef TYPE_6__ AVCodecContext ;
typedef int AVCodec ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int *,int ,char*,int *,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_8 (int,char*,int) ;
 TYPE_6__* FUNC_9 (int const*) ;
 int * FUNC_10 (char*) ;
 int FUNC_11 (TYPE_6__**) ;
 int FUNC_12 (TYPE_6__*,int *,int *) ;
 int FUNC_13 (TYPE_5__**) ;
 int FUNC_14 (TYPE_5__**,char*,int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int **,char*,int ) ;
 int FUNC_17 (TYPE_2__*,TYPE_6__*,int *,int *,TYPE_4__*,int *) ;
 int FUNC_18 (int ,char*,...) ;
 int VAR_6 ;
 int FUNC_19 (int ,int ,scalar_t__) ;
 int VAR_7 ;

int FUNC_20(int VAR_8, char **VAR_9)
{
    AVFormatContext *VAR_10 = ((void*)0);
    AVStream *VAR_11 = ((void*)0);
    AVCodecContext *VAR_12 = ((void*)0);
    const AVCodec *VAR_13;

    AVPacket VAR_14 = { 0 };
    AVFrame *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);

    DecodeContext VAR_17 = { ((void*)0) };

    AVIOContext *VAR_18 = ((void*)0);

    int VAR_19, VAR_20;

    if (VAR_8 < 3) {
        FUNC_18(VAR_7, "Usage: %s <input file> <output file>\n", VAR_9[0]);
        return 1;
    }


    VAR_19 = FUNC_14(&VAR_10, VAR_9[1], ((void*)0), ((void*)0));
    if (VAR_19 < 0) {
        FUNC_18(VAR_7, "Cannot open input file '%s': ", VAR_9[1]);
        goto finish;
    }


    for (VAR_20 = 0; VAR_20 < VAR_10->nb_streams; VAR_20++) {
        AVStream *VAR_21 = VAR_10->streams[VAR_20];

        if (VAR_21->codecpar->codec_id == VAR_2 && !VAR_11)
            VAR_11 = VAR_21;
        else
            VAR_21->discard = VAR_0;
    }
    if (!VAR_11) {
        FUNC_18(VAR_7, "No H.264 video stream in the input file\n");
        goto finish;
    }


    VAR_19 = FUNC_4(&VAR_17.hw_device_ref, VAR_3,
                                 "auto", ((void*)0), 0);
    if (VAR_19 < 0) {
        FUNC_18(VAR_7, "Cannot open the hardware device\n");
        goto finish;
    }


    VAR_13 = FUNC_10("h264_qsv");
    if (!VAR_13) {
        FUNC_18(VAR_7, "The QSV decoder is not present in libavcodec\n");
        goto finish;
    }

    VAR_12 = FUNC_9(VAR_13);
    if (!VAR_12) {
        VAR_19 = FUNC_0(VAR_5);
        goto finish;
    }
    VAR_12->codec_id = VAR_2;
    if (VAR_11->codecpar->extradata_size) {
        VAR_12->extradata = FUNC_5(VAR_11->codecpar->extradata_size +
                                            VAR_4);
        if (!VAR_12->extradata) {
            VAR_19 = FUNC_0(VAR_5);
            goto finish;
        }
        FUNC_19(VAR_12->extradata, VAR_11->codecpar->extradata,
               VAR_11->codecpar->extradata_size);
        VAR_12->extradata_size = VAR_11->codecpar->extradata_size;
    }

    VAR_12->opaque = &VAR_17;
    VAR_12->get_format = VAR_6;

    VAR_19 = FUNC_12(VAR_12, ((void*)0), ((void*)0));
    if (VAR_19 < 0) {
        FUNC_18(VAR_7, "Error opening the decoder: ");
        goto finish;
    }


    VAR_19 = FUNC_16(&VAR_18, VAR_9[2], VAR_1);
    if (VAR_19 < 0) {
        FUNC_18(VAR_7, "Error opening the output context: ");
        goto finish;
    }

    VAR_15 = FUNC_2();
    VAR_16 = FUNC_2();
    if (!VAR_15 || !VAR_16) {
        VAR_19 = FUNC_0(VAR_5);
        goto finish;
    }


    while (VAR_19 >= 0) {
        VAR_19 = FUNC_7(VAR_10, &VAR_14);
        if (VAR_19 < 0)
            break;

        if (VAR_14.stream_index == VAR_11->index)
            VAR_19 = FUNC_17(&VAR_17, VAR_12, VAR_15, VAR_16, &VAR_14, VAR_18);

        FUNC_6(&VAR_14);
    }


    VAR_14.data = ((void*)0);
    VAR_14.size = 0;
    VAR_19 = FUNC_17(&VAR_17, VAR_12, VAR_15, VAR_16, &VAR_14, VAR_18);

finish:
    if (VAR_19 < 0) {
        char VAR_22[1024];
        FUNC_8(VAR_19, VAR_22, sizeof(VAR_22));
        FUNC_18(VAR_7, "%s\n", VAR_22);
    }

    FUNC_13(&VAR_10);

    FUNC_3(&VAR_15);
    FUNC_3(&VAR_16);

    FUNC_11(&VAR_12);

    FUNC_1(&VAR_17.hw_device_ref);

    FUNC_15(VAR_18);

    return VAR_19;
}
