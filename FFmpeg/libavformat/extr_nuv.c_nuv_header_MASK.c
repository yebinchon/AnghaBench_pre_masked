
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int error_recognition; int * pb; TYPE_2__* priv_data; } ;
struct TYPE_16__ {int index; TYPE_1__* codecpar; void* avg_frame_rate; void* r_frame_rate; void* sample_aspect_ratio; } ;
struct TYPE_15__ {int v_id; int a_id; int rtjpg_video; } ;
struct TYPE_14__ {scalar_t__ codec_id; int width; int height; int bits_per_coded_sample; int channels; int sample_rate; int bit_rate; int block_align; int channel_layout; int codec_type; } ;
typedef TYPE_2__ NUVContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (double,int) ;
 int FUNC_2 (int,int,int ,TYPE_4__*) ;
 double FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int ,char*,double) ;
 TYPE_3__* FUNC_5 (TYPE_4__*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (TYPE_3__*,int,int,int) ;
 int FUNC_12 (TYPE_4__*,int *,TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_13 (char*,char*,int) ;

__attribute__((used)) static int FUNC_14(AVFormatContext *VAR_10)
{
    NUVContext *VAR_11 = VAR_10->priv_data;
    AVIOContext *VAR_12 = VAR_10->pb;
    char VAR_13[12];
    double VAR_14, VAR_15;
    int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    AVStream *VAR_22 = ((void*)0), *VAR_23 = ((void*)0);

    FUNC_7(VAR_12, VAR_13, 12);
    VAR_16 = !FUNC_13(VAR_13, "MythTVVideo", 12);
    FUNC_10(VAR_12, 5);
    FUNC_10(VAR_12, 3);
    VAR_17 = FUNC_8(VAR_12);
    VAR_18 = FUNC_8(VAR_12);
    FUNC_8(VAR_12);
    FUNC_8(VAR_12);
    FUNC_6(VAR_12);
    FUNC_10(VAR_12, 3);
    VAR_14 = FUNC_3(FUNC_9(VAR_12));
    if (VAR_14 > 0.9999 && VAR_14 < 1.0001)
        VAR_14 = 4.0 / 3.0;
    VAR_15 = FUNC_3(FUNC_9(VAR_12));
    if (VAR_15 < 0.0f) {
        if (VAR_10->error_recognition & VAR_6) {
            FUNC_4(VAR_10, VAR_7, "Invalid frame rate %f\n", VAR_15);
            return VAR_0;
        } else {
            FUNC_4(VAR_10, VAR_8, "Invalid frame rate %f, setting to 0.\n", VAR_15);
            VAR_15 = 0.0f;
        }
    }


    VAR_19 = FUNC_8(VAR_12);
    VAR_20 = FUNC_8(VAR_12);
    FUNC_8(VAR_12);

    FUNC_8(VAR_12);

    if (VAR_19) {
        VAR_22 = FUNC_5(VAR_10, ((void*)0));
        if (!VAR_22)
            return FUNC_0(VAR_9);
        VAR_11->v_id = VAR_22->index;

        VAR_21 = FUNC_2(VAR_17, VAR_18, 0, VAR_10);
        if (VAR_21 < 0)
            return VAR_21;

        VAR_22->codecpar->codec_type = VAR_2;
        VAR_22->codecpar->codec_id = VAR_4;
        VAR_22->codecpar->width = VAR_17;
        VAR_22->codecpar->height = VAR_18;
        VAR_22->codecpar->bits_per_coded_sample = 10;
        VAR_22->sample_aspect_ratio = FUNC_1(VAR_14 * VAR_18 / VAR_17,
                                                   10000);



        VAR_22->avg_frame_rate = FUNC_1(VAR_15, 60000);
        FUNC_11(VAR_22, 32, 1, 1000);
    } else
        VAR_11->v_id = -1;

    if (VAR_20) {
        VAR_23 = FUNC_5(VAR_10, ((void*)0));
        if (!VAR_23)
            return FUNC_0(VAR_9);
        VAR_11->a_id = VAR_23->index;

        VAR_23->codecpar->codec_type = VAR_1;
        VAR_23->codecpar->codec_id = VAR_5;
        VAR_23->codecpar->channels = 2;
        VAR_23->codecpar->channel_layout = VAR_3;
        VAR_23->codecpar->sample_rate = 44100;
        VAR_23->codecpar->bit_rate = 2 * 2 * 44100 * 8;
        VAR_23->codecpar->block_align = 2 * 2;
        VAR_23->codecpar->bits_per_coded_sample = 16;
        FUNC_11(VAR_23, 32, 1, 1000);
    } else
        VAR_11->a_id = -1;

    if ((VAR_21 = FUNC_12(VAR_10, VAR_12, VAR_22, VAR_23, VAR_16)) < 0)
        return VAR_21;

    VAR_11->rtjpg_video = VAR_22 && VAR_22->codecpar->codec_id == VAR_4;

    return 0;
}
