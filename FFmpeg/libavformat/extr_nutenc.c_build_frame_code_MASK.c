
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_21__ {scalar_t__ codec_type; scalar_t__ codec_id; int block_align; int sample_rate; scalar_t__ video_delay; scalar_t__ bit_rate; } ;
struct TYPE_20__ {int nb_streams; TYPE_1__** streams; TYPE_3__* priv_data; } ;
struct TYPE_19__ {int den; int num; } ;
struct TYPE_18__ {int flags; int size_mul; int pts_delta; int stream_id; int size_lsb; void* header_idx; } ;
struct TYPE_17__ {TYPE_4__* frame_code; TYPE_2__* stream; } ;
struct TYPE_16__ {int * time_base; } ;
struct TYPE_15__ {int avg_frame_rate; TYPE_7__* codecpar; } ;
typedef TYPE_3__ NUTContext ;
typedef TYPE_4__ FrameCode ;
typedef TYPE_5__ AVRational ;
typedef TYPE_6__ AVFormatContext ;
typedef TYPE_7__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_5__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_7__*,int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (TYPE_6__*,TYPE_7__*,int,int) ;
 int FUNC_4 (TYPE_4__*,TYPE_4__*,int) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_8)
{
    NUTContext *VAR_9 = VAR_8->priv_data;
    int VAR_10, VAR_11, VAR_12, VAR_13;
    int VAR_14 = 1;
    int VAR_15 = 254;
    int VAR_16 = VAR_8->nb_streams > 2;
    int VAR_17[10];
    FrameCode *VAR_18;

    VAR_18 = &VAR_9->frame_code[VAR_14];
    VAR_18->flags = VAR_2;
    VAR_18->size_mul = 1;
    VAR_18->pts_delta = 1;
    VAR_14++;

    if (VAR_16) {

        FrameCode *VAR_19 = &VAR_9->frame_code[VAR_14];
        VAR_19->flags = VAR_7 | VAR_6 | VAR_3;
        VAR_19->size_mul = 1;
        VAR_14++;
    }

    for (VAR_13 = 0; VAR_13 < VAR_8->nb_streams; VAR_13++) {
        int VAR_20 = VAR_14 + (VAR_15 - VAR_14) * VAR_13 / VAR_8->nb_streams;
        int VAR_21 = VAR_14 + (VAR_15 - VAR_14) * (VAR_13 + 1) / VAR_8->nb_streams;
        AVCodecParameters *VAR_22 = VAR_8->streams[VAR_13]->codecpar;
        int VAR_23 = VAR_22->codec_type == VAR_0;
        int VAR_24 = VAR_23;
        int VAR_25;
        int VAR_26 = 0;

        if (VAR_22->codec_type == VAR_0) {
            VAR_26 = FUNC_1(VAR_22, 0);
            if (VAR_22->codec_id == VAR_1 && !VAR_26)
                VAR_26 = 64;
        } else {
            AVRational VAR_27 = FUNC_0(FUNC_2(VAR_8->streams[VAR_13]->avg_frame_rate), *VAR_9->stream[VAR_13].time_base);
            if (VAR_27.den == 1 && VAR_27.num>0)
                VAR_26 = VAR_27.num;
        }
        if (!VAR_26)
            VAR_26 = 1;

        for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
            if (!VAR_24 || !VAR_16 || VAR_10 != 0) {
                FrameCode *VAR_28 = &VAR_9->frame_code[VAR_20];
                VAR_28->flags = VAR_5 * VAR_10;
                VAR_28->flags |= VAR_6 | VAR_3;
                VAR_28->stream_id = VAR_13;
                VAR_28->size_mul = 1;
                if (VAR_23)
                    VAR_28->header_idx = FUNC_3(VAR_8, VAR_22, -1, VAR_10);
                VAR_20++;
            }
        }

        VAR_10 = VAR_24;

        if (VAR_23) {
            int VAR_29;
            int VAR_30;

            if (VAR_22->block_align > 0) {
                VAR_29 = VAR_22->block_align;
            } else {
                int VAR_31 = FUNC_1(VAR_22, 0);
                VAR_29 = VAR_31 * (int64_t)VAR_22->bit_rate / (8 * VAR_22->sample_rate);
            }

            for (VAR_30 = 0; VAR_30 < 2; VAR_30++) {
                for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
                    FrameCode *VAR_32 = &VAR_9->frame_code[VAR_20];
                    VAR_32->flags = VAR_5 * VAR_10;
                    VAR_32->stream_id = VAR_13;
                    VAR_32->size_mul = VAR_29 + 2;
                    VAR_32->size_lsb = VAR_29 + VAR_12;
                    VAR_32->pts_delta = VAR_30 * VAR_26;
                    VAR_32->header_idx = FUNC_3(VAR_8, VAR_22, VAR_29 + VAR_12, VAR_10);
                    VAR_20++;
                }
            }
        } else {
            FrameCode *VAR_33 = &VAR_9->frame_code[VAR_20];
            VAR_33->flags = VAR_5 | VAR_6;
            VAR_33->stream_id = VAR_13;
            VAR_33->size_mul = 1;
            VAR_33->pts_delta = VAR_26;
            VAR_20++;
        }


        if (VAR_22->video_delay) {
            VAR_25 = 5;
            VAR_17[0] = -2;
            VAR_17[1] = -1;
            VAR_17[2] = 1;
            VAR_17[3] = 3;
            VAR_17[4] = 4;
        } else if (VAR_22->codec_id == VAR_1) {
            VAR_25 = 3;
            VAR_17[0] = 2;
            VAR_17[1] = 9;
            VAR_17[2] = 16;
        } else {
            VAR_25 = 1;
            VAR_17[0] = 1;
        }

        for (VAR_12 = 0; VAR_12 < VAR_25; VAR_12++) {
            int VAR_34 = VAR_20 + (VAR_21 - VAR_20) * VAR_12 / VAR_25;
            int VAR_35 = VAR_20 + (VAR_21 - VAR_20) * (VAR_12 + 1) / VAR_25;

            VAR_17[VAR_12] *= VAR_26;

            for (VAR_11 = VAR_34; VAR_11 < VAR_35; VAR_11++) {
                FrameCode *VAR_36 = &VAR_9->frame_code[VAR_11];
                VAR_36->flags = VAR_5 * VAR_10;
                VAR_36->flags |= VAR_6;
                VAR_36->stream_id = VAR_13;

                VAR_36->size_mul = VAR_35 - VAR_34;
                VAR_36->size_lsb = VAR_11 - VAR_34;
                VAR_36->pts_delta = VAR_17[VAR_12];
                if (VAR_23)
                    VAR_36->header_idx = FUNC_3(VAR_8, VAR_22, -1, VAR_10);
            }
        }
    }
    FUNC_4(&VAR_9->frame_code['N' + 1], &VAR_9->frame_code['N'], sizeof(FrameCode) * (255 - 'N'));
    VAR_9->frame_code[0].flags =
        VAR_9->frame_code[255].flags =
        VAR_9->frame_code['N'].flags = VAR_4;
}
