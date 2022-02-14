
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_25__ {int pb; TYPE_3__* oformat; } ;
struct TYPE_24__ {scalar_t__ video_codec; scalar_t__ audio_codec; int flags; } ;
struct TYPE_23__ {TYPE_1__* enc; int next_pts; int member_0; } ;
struct TYPE_22__ {int time_base; } ;
typedef TYPE_2__ OutputStream ;
typedef TYPE_3__ AVOutputFormat ;
typedef TYPE_4__ AVFormatContext ;
typedef int AVDictionary ;
typedef int AVCodec ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_4__*,int **,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int **,char*,char*,int ) ;
 int FUNC_3 (TYPE_4__*,int ,char const*,int) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__**,int *,char*,char const*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,int **) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char const*,int ) ;
 int FUNC_11 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_12 (int ,char*,char const*,...) ;
 int FUNC_13 (TYPE_4__*,int *,TYPE_2__*,int *) ;
 int FUNC_14 (TYPE_4__*,int *,TYPE_2__*,int *) ;
 int FUNC_15 (char*,...) ;
 int VAR_3 ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_18 (TYPE_4__*,TYPE_2__*) ;

int FUNC_19(int VAR_4, char **VAR_5)
{
    OutputStream VAR_6 = { 0 }, VAR_7 = { 0 };
    const char *VAR_8;
    AVOutputFormat *VAR_9;
    AVFormatContext *VAR_10;
    AVCodec *VAR_11, *VAR_12;
    int VAR_13;
    int VAR_14 = 0, VAR_15 = 0;
    int VAR_16 = 0, VAR_17 = 0;
    AVDictionary *VAR_18 = ((void*)0);
    int VAR_19;

    if (VAR_4 < 2) {
        FUNC_15("usage: %s output_file\n"
               "API example program to output a media file with libavformat.\n"
               "This program generates a synthetic audio and video stream, encodes and\n"
               "muxes them into a file named output_file.\n"
               "The output format is automatically guessed according to the file extension.\n"
               "Raw images can also be output by using '%%d' in the filename.\n"
               "\n", VAR_5[0]);
        return 1;
    }

    VAR_8 = VAR_5[1];
    for (VAR_19 = 2; VAR_19+1 < VAR_4; VAR_19+=2) {
        if (!FUNC_16(VAR_5[VAR_19], "-flags") || !FUNC_16(VAR_5[VAR_19], "-fflags"))
            FUNC_2(&VAR_18, VAR_5[VAR_19]+1, VAR_5[VAR_19+1], 0);
    }


    FUNC_6(&VAR_10, ((void*)0), ((void*)0), VAR_8);
    if (!VAR_10) {
        FUNC_15("Could not deduce output format from file extension: using MPEG.\n");
        FUNC_6(&VAR_10, ((void*)0), "mpeg", VAR_8);
    }
    if (!VAR_10)
        return 1;

    VAR_9 = VAR_10->oformat;



    if (VAR_9->video_codec != VAR_2) {
        FUNC_0(&VAR_6, VAR_10, &VAR_12, VAR_9->video_codec);
        VAR_14 = 1;
        VAR_16 = 1;
    }
    if (VAR_9->audio_codec != VAR_2) {
        FUNC_0(&VAR_7, VAR_10, &VAR_11, VAR_9->audio_codec);
        VAR_15 = 1;
        VAR_17 = 1;
    }



    if (VAR_14)
        FUNC_14(VAR_10, VAR_12, &VAR_6, VAR_18);

    if (VAR_15)
        FUNC_13(VAR_10, VAR_11, &VAR_7, VAR_18);

    FUNC_3(VAR_10, 0, VAR_8, 1);


    if (!(VAR_9->flags & VAR_0)) {
        VAR_13 = FUNC_10(&VAR_10->pb, VAR_8, VAR_1);
        if (VAR_13 < 0) {
            FUNC_12(VAR_3, "Could not open '%s': %s\n", VAR_8,
                    FUNC_4(VAR_13));
            return 1;
        }
    }


    VAR_13 = FUNC_8(VAR_10, &VAR_18);
    if (VAR_13 < 0) {
        FUNC_12(VAR_3, "Error occurred when opening output file: %s\n",
                FUNC_4(VAR_13));
        return 1;
    }

    while (VAR_16 || VAR_17) {

        if (VAR_16 &&
            (!VAR_17 || FUNC_1(VAR_6.next_pts, VAR_6.enc->time_base,
                                            VAR_7.next_pts, VAR_7.enc->time_base) <= 0)) {
            VAR_16 = !FUNC_18(VAR_10, &VAR_6);
        } else {
            VAR_17 = !FUNC_17(VAR_10, &VAR_7);
        }
    }





    FUNC_5(VAR_10);


    if (VAR_14)
        FUNC_11(VAR_10, &VAR_6);
    if (VAR_15)
        FUNC_11(VAR_10, &VAR_7);

    if (!(VAR_9->flags & VAR_0))

        FUNC_9(&VAR_10->pb);


    FUNC_7(VAR_10);

    return 0;
}
