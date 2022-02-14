
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_19__ {scalar_t__* streams; } ;
struct TYPE_18__ {int width; int height; int sample_fmt; int channels; int sample_rate; int pix_fmt; } ;
struct TYPE_17__ {scalar_t__ size; int * data; } ;
typedef TYPE_1__ AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (TYPE_5__*,int ,char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (int *,int ,int,int,int ,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_5__*,TYPE_1__*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (TYPE_2__**) ;
 int FUNC_14 (TYPE_5__**) ;
 scalar_t__ FUNC_15 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_16 (TYPE_5__**,char*,int *,int *) ;
 int FUNC_17 (int*,int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (scalar_t__) ;
 TYPE_5__* VAR_8 ;
 scalar_t__ FUNC_20 (char*,char*) ;
 int FUNC_21 (int ,char*,...) ;
 int VAR_9 ;
 int FUNC_22 (char const**,int) ;
 int VAR_10 ;
 scalar_t__ FUNC_23 (size_t*,TYPE_2__**,TYPE_5__*,int ) ;
 int VAR_11 ;
 TYPE_1__ VAR_12 ;
 int FUNC_24 (char*,...) ;
 int VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 int FUNC_25 (char*,char*) ;
 TYPE_2__* VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 scalar_t__ VAR_19 ;
 char* VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 size_t VAR_23 ;
 int VAR_24 ;

int FUNC_26 (int VAR_25, char **VAR_26)
{
    int VAR_27 = 0, VAR_28;

    if (VAR_25 != 4 && VAR_25 != 5) {
        FUNC_21(VAR_15, "usage: %s [-refcount] input_file video_output_file audio_output_file\n"
                "API example program to show how to read frames from an input file.\n"
                "This program reads frames from a file, decodes them, and writes decoded\n"
                "video frames to a rawvideo file named video_output_file, and decoded\n"
                "audio frames to a rawaudio file named audio_output_file.\n\n"
                "If the -refcount option is specified, the program use the\n"
                "reference counting frame system which allows keeping a copy of\n"
                "the data for longer than one decode call.\n"
                "\n", VAR_26[0]);
        FUNC_18(1);
    }
    if (VAR_25 == 5 && !FUNC_25(VAR_26[1], "-refcount")) {
        VAR_13 = 1;
        VAR_26++;
    }
    VAR_14 = VAR_26[1];
    VAR_20 = VAR_26[2];
    VAR_5 = VAR_26[3];


    if (FUNC_16(&VAR_8, VAR_14, ((void*)0), ((void*)0)) < 0) {
        FUNC_21(VAR_15, "Could not open source file %s\n", VAR_14);
        FUNC_18(1);
    }


    if (FUNC_15(VAR_8, ((void*)0)) < 0) {
        FUNC_21(VAR_15, "Could not find stream information\n");
        FUNC_18(1);
    }

    if (FUNC_23(&VAR_23, &VAR_16, VAR_8, VAR_1) >= 0) {
        VAR_22 = VAR_8->streams[VAR_23];

        VAR_19 = FUNC_20(VAR_20, "wb");
        if (!VAR_19) {
            FUNC_21(VAR_15, "Could not open destination file %s\n", VAR_20);
            VAR_27 = 1;
            goto end;
        }


        VAR_24 = VAR_16->width;
        VAR_10 = VAR_16->height;
        VAR_11 = VAR_16->pix_fmt;
        VAR_27 = FUNC_8(VAR_18, VAR_21,
                             VAR_24, VAR_10, VAR_11, 1);
        if (VAR_27 < 0) {
            FUNC_21(VAR_15, "Could not allocate raw video buffer\n");
            goto end;
        }
        VAR_17 = VAR_27;
    }

    if (FUNC_23(&VAR_7, &VAR_3, VAR_8, VAR_0) >= 0) {
        VAR_6 = VAR_8->streams[VAR_7];
        VAR_4 = FUNC_20(VAR_5, "wb");
        if (!VAR_4) {
            FUNC_21(VAR_15, "Could not open destination file %s\n", VAR_5);
            VAR_27 = 1;
            goto end;
        }
    }


    FUNC_1(VAR_8, 0, VAR_14, 0);

    if (!VAR_6 && !VAR_22) {
        FUNC_21(VAR_15, "Could not find audio or video stream in the input, aborting\n");
        VAR_27 = 1;
        goto end;
    }

    VAR_9 = FUNC_2();
    if (!VAR_9) {
        FUNC_21(VAR_15, "Could not allocate frame\n");
        VAR_27 = FUNC_0(VAR_2);
        goto end;
    }


    FUNC_9(&VAR_12);
    VAR_12.data = ((void*)0);
    VAR_12.size = 0;

    if (VAR_22)
        FUNC_24("Demuxing video from file '%s' into '%s'\n", VAR_14, VAR_20);
    if (VAR_6)
        FUNC_24("Demuxing audio from file '%s' into '%s'\n", VAR_14, VAR_5);


    while (FUNC_11(VAR_8, &VAR_12) >= 0) {
        AVPacket VAR_29 = VAR_12;
        do {
            VAR_27 = FUNC_17(&VAR_28, 0);
            if (VAR_27 < 0)
                break;
            VAR_12.data += VAR_27;
            VAR_12.size -= VAR_27;
        } while (VAR_12.size > 0);
        FUNC_10(&VAR_29);
    }


    VAR_12.data = ((void*)0);
    VAR_12.size = 0;
    do {
        FUNC_17(&VAR_28, 1);
    } while (VAR_28);

    FUNC_24("Demuxing succeeded.\n");

    if (VAR_22) {
        FUNC_24("Play the output video file with the command:\n"
               "ffplay -f rawvideo -pix_fmt %s -video_size %dx%d %s\n",
               FUNC_6(VAR_11), VAR_24, VAR_10,
               VAR_20);
    }

    if (VAR_6) {
        enum AVSampleFormat VAR_30 = VAR_3->sample_fmt;
        int VAR_31 = VAR_3->channels;
        const char *VAR_32;

        if (FUNC_12(VAR_30)) {
            const char *VAR_33 = FUNC_7(VAR_30);
            FUNC_24("Warning: the sample format the decoder produced is planar "
                   "(%s). This example will output the first channel only.\n",
                   VAR_33 ? VAR_33 : "?");
            VAR_30 = FUNC_5(VAR_30);
            VAR_31 = 1;
        }

        if ((VAR_27 = FUNC_22(&VAR_32, VAR_30)) < 0)
            goto end;

        FUNC_24("Play the output audio file with the command:\n"
               "ffplay -f %s -ac %d -ar %d %s\n",
               VAR_32, VAR_31, VAR_3->sample_rate,
               VAR_5);
    }

end:
    FUNC_13(&VAR_16);
    FUNC_13(&VAR_3);
    FUNC_14(&VAR_8);
    if (VAR_19)
        FUNC_19(VAR_19);
    if (VAR_4)
        FUNC_19(VAR_4);
    FUNC_3(&VAR_9);
    FUNC_4(VAR_18[0]);

    return VAR_27 < 0;
}
