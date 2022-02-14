
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_11__ {scalar_t__ codec_id; int width; int height; } ;
struct TYPE_10__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_9__ {int swf_frame_number; int video_frame_number; int sound_samples; int audio_fifo; scalar_t__ audio_par; int vframes_pos; } ;
typedef TYPE_1__ SWFContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,int *,int,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char const*,int) ;
 int FUNC_8 (int ,scalar_t__) ;
 int VAR_18 ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *,int,int ,int ,int,int ,int ) ;
 int FUNC_11 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_19,
                           AVCodecParameters *VAR_20, const uint8_t *VAR_21, int VAR_22)
{
    SWFContext *VAR_23 = VAR_19->priv_data;
    AVIOContext *VAR_24 = VAR_19->pb;


    if (VAR_23->swf_frame_number == 16000)
        FUNC_2(VAR_19, VAR_3, "warning: Flash Player limit of 16000 frames reached\n");

    if (VAR_20->codec_id == VAR_2 ||
        VAR_20->codec_id == VAR_0) {
        if (VAR_23->video_frame_number == 0) {

            FUNC_11(VAR_19, VAR_16);
            FUNC_6(VAR_24, VAR_17);
            VAR_23->vframes_pos = FUNC_3(VAR_24);
            FUNC_6(VAR_24, 15000);
            FUNC_6(VAR_24, VAR_20->width);
            FUNC_6(VAR_24, VAR_20->height);
            FUNC_4(VAR_24, 0);
            FUNC_4(VAR_24,FUNC_8(VAR_18, VAR_20->codec_id));
            FUNC_9(VAR_19);


            FUNC_11(VAR_19, VAR_11);
            FUNC_4(VAR_24, 0x36);
            FUNC_6(VAR_24, 1);
            FUNC_6(VAR_24, VAR_17);
            FUNC_10(VAR_24, 1 << VAR_5, 0, 0, 1 << VAR_5, 0, 0);
            FUNC_6(VAR_24, VAR_23->video_frame_number);
            FUNC_7(VAR_24, "video", 5);
            FUNC_4(VAR_24, 0x00);
            FUNC_9(VAR_19);
        } else {

            FUNC_11(VAR_19, VAR_11);
            FUNC_4(VAR_24, 0x11);
            FUNC_6(VAR_24, 1);
            FUNC_6(VAR_24, VAR_23->video_frame_number);
            FUNC_9(VAR_19);
        }


        FUNC_11(VAR_19, VAR_15 | VAR_9);
        FUNC_6(VAR_24, VAR_17);
        FUNC_6(VAR_24, VAR_23->video_frame_number++);
        FUNC_7(VAR_24, VAR_21, VAR_22);
        FUNC_9(VAR_19);
    } else if (VAR_20->codec_id == VAR_1) {
        if (VAR_23->swf_frame_number > 0) {

            FUNC_11(VAR_19, VAR_12);
            FUNC_6(VAR_24, VAR_6);
            FUNC_6(VAR_24, 1);
            FUNC_9(VAR_19);


            FUNC_11(VAR_19, VAR_7);
            FUNC_6(VAR_24, VAR_4);
            FUNC_9(VAR_19);
        }

        FUNC_11(VAR_19, VAR_8 | VAR_9);

        FUNC_6(VAR_24, VAR_4);


        FUNC_5(VAR_24, 0xffd8ffd9);

        FUNC_7(VAR_24, VAR_21, VAR_22);

        FUNC_9(VAR_19);



        FUNC_11(VAR_19, VAR_10);
        FUNC_6(VAR_24, VAR_6);
        FUNC_6(VAR_24, 1);
        FUNC_10(VAR_24, 20 << VAR_5, 0, 0, 20 << VAR_5, 0, 0);
        FUNC_9(VAR_19);
    }

    VAR_23->swf_frame_number++;


    if (VAR_23->audio_par && FUNC_1(VAR_23->audio_fifo)) {
        int VAR_25 = FUNC_1(VAR_23->audio_fifo);
        FUNC_11(VAR_19, VAR_14 | VAR_9);
        FUNC_6(VAR_24, VAR_23->sound_samples);
        FUNC_6(VAR_24, 0);
        FUNC_0(VAR_23->audio_fifo, VAR_24, VAR_25, (void*)FUNC_7);
        FUNC_9(VAR_19);


        VAR_23->sound_samples = 0;
    }


    FUNC_11(VAR_19, VAR_13);
    FUNC_9(VAR_19);

    return 0;
}
