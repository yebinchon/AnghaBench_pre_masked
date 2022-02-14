
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_21__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_20__ {int nb_frames; TYPE_1__* codecpar; int time_base; int avg_frame_rate; } ;
struct TYPE_19__ {int nb_audio_tracks; int acompression; int aformat; int nb_video_tracks; } ;
struct TYPE_18__ {int sample_rate; int channels; int bits_per_coded_sample; void* codec_type; void* codec_id; void* height; void* width; scalar_t__ codec_tag; int format; } ;
typedef TYPE_2__ MvContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_3__*,int,int,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ,char*,...) ;
 TYPE_3__* FUNC_4 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (TYPE_4__*,char*,...) ;
 int FUNC_10 (TYPE_3__*,int,int,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_11 (int *,TYPE_3__*) ;
 int FUNC_12 (TYPE_4__*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_13 (TYPE_4__*,TYPE_3__*,void*) ;
 int FUNC_14 (TYPE_4__*,char*,int) ;

__attribute__((used)) static int FUNC_15(AVFormatContext *VAR_16)
{
    MvContext *VAR_17 = VAR_16->priv_data;
    AVIOContext *VAR_18 = VAR_16->pb;
    AVStream *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
    int VAR_21, VAR_22;
    int VAR_23;

    FUNC_8(VAR_18, 4);

    VAR_21 = FUNC_6(VAR_18);
    if (VAR_21 == 2) {
        uint64_t VAR_24;
        int VAR_25;
        FUNC_8(VAR_18, 22);



        VAR_19 = FUNC_4(VAR_16, ((void*)0));
        if (!VAR_19)
            return FUNC_0(VAR_12);

        VAR_20 = FUNC_4(VAR_16, ((void*)0));
        if (!VAR_20)
            return FUNC_0(VAR_12);
        FUNC_10(VAR_20, 64, 1, 15);
        VAR_20->codecpar->codec_type = VAR_5;
        VAR_20->avg_frame_rate = FUNC_2(VAR_20->time_base);
        VAR_20->nb_frames = FUNC_7(VAR_18);
        VAR_25 = FUNC_7(VAR_18);
        switch (VAR_25) {
        case 1:
            VAR_20->codecpar->codec_id = VAR_6;
            break;
        case 2:
            VAR_20->codecpar->format = VAR_11;
            VAR_20->codecpar->codec_id = VAR_9;
            break;
        default:
            FUNC_9(VAR_16, "Video compression %i", VAR_25);
            break;
        }
        VAR_20->codecpar->codec_tag = 0;
        VAR_20->codecpar->width = FUNC_7(VAR_18);
        VAR_20->codecpar->height = FUNC_7(VAR_18);
        FUNC_8(VAR_18, 12);

        VAR_19->codecpar->codec_type = VAR_4;
        VAR_19->nb_frames = VAR_20->nb_frames;
        VAR_19->codecpar->sample_rate = FUNC_7(VAR_18);
        if (VAR_19->codecpar->sample_rate <= 0) {
            FUNC_3(VAR_16, VAR_10, "Invalid sample rate %d\n", VAR_19->codecpar->sample_rate);
            return VAR_1;
        }
        FUNC_10(VAR_19, 33, 1, VAR_19->codecpar->sample_rate);
        if (FUNC_13(VAR_16, VAR_19, FUNC_7(VAR_18)) < 0)
            return VAR_1;

        VAR_25 = FUNC_7(VAR_18);
        if (VAR_25 == VAR_0) {
            VAR_19->codecpar->codec_id = VAR_8;
        } else {
            FUNC_9(VAR_16, "Audio compression (format %i)", VAR_25);
        }

        FUNC_8(VAR_18, 12);
        FUNC_14(VAR_16, "title", 0x80);
        FUNC_14(VAR_16, "comment", 0x100);
        FUNC_8(VAR_18, 0x80);

        VAR_24 = 0;
        for (VAR_22 = 0; VAR_22 < VAR_20->nb_frames; VAR_22++) {
            uint32_t VAR_26 = FUNC_7(VAR_18);
            uint32_t VAR_27 = FUNC_7(VAR_18);
            uint32_t VAR_28 = FUNC_7(VAR_18);
            if (FUNC_5(VAR_18))
                return VAR_1;
            FUNC_8(VAR_18, 8);
            FUNC_1(VAR_19, VAR_26, VAR_24, VAR_27, 0, VAR_3);
            FUNC_1(VAR_20, VAR_26 + VAR_27, VAR_22, VAR_28, 0, VAR_3);
            VAR_24 += VAR_27 / (VAR_19->codecpar->channels * 2);
        }
    } else if (!VAR_21 && FUNC_6(VAR_18) == 3) {
        FUNC_8(VAR_18, 4);

        if ((VAR_23 = FUNC_12(VAR_16, ((void*)0), VAR_14)) < 0)
            return VAR_23;

        if (VAR_17->nb_audio_tracks > 1) {
            FUNC_9(VAR_16, "Multiple audio streams support");
            return VAR_2;
        } else if (VAR_17->nb_audio_tracks) {
            VAR_19 = FUNC_4(VAR_16, ((void*)0));
            if (!VAR_19)
                return FUNC_0(VAR_12);
            VAR_19->codecpar->codec_type = VAR_4;
            if ((FUNC_12(VAR_16, VAR_19, VAR_13)) < 0)
                return VAR_23;
            if (VAR_17->acompression == 100 &&
                VAR_17->aformat == VAR_0 &&
                VAR_19->codecpar->bits_per_coded_sample == 16) {
                VAR_19->codecpar->codec_id = VAR_8;
            } else {
                FUNC_9(VAR_16,
                                      "Audio compression %i (format %i, sr %i)",
                                      VAR_17->acompression, VAR_17->aformat,
                                      VAR_19->codecpar->bits_per_coded_sample);
                VAR_19->codecpar->codec_id = VAR_7;
            }
            if (VAR_19->codecpar->channels <= 0) {
                FUNC_3(VAR_16, VAR_10, "No valid channel count found.\n");
                return VAR_1;
            }
        }

        if (VAR_17->nb_video_tracks > 1) {
            FUNC_9(VAR_16, "Multiple video streams support");
            return VAR_2;
        } else if (VAR_17->nb_video_tracks) {
            VAR_20 = FUNC_4(VAR_16, ((void*)0));
            if (!VAR_20)
                return FUNC_0(VAR_12);
            VAR_20->codecpar->codec_type = VAR_5;
            if ((VAR_23 = FUNC_12(VAR_16, VAR_20, VAR_15))<0)
                return VAR_23;
        }

        if (VAR_17->nb_audio_tracks)
            FUNC_11(VAR_18, VAR_19);

        if (VAR_17->nb_video_tracks)
            FUNC_11(VAR_18, VAR_20);
    } else {
        FUNC_9(VAR_16, "Version %i", VAR_21);
        return VAR_2;
    }

    return 0;
}
