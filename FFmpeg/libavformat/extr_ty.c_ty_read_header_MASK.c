
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_12__ {TYPE_1__* codecpar; void* need_parsing; } ;
struct TYPE_11__ {scalar_t__ tivo_series; scalar_t__ audio_type; scalar_t__ tivo_type; int first_chunk; int chunk; void* last_video_pts; void* last_audio_pts; void* first_audio_pts; } ;
struct TYPE_10__ {int codec_id; int codec_type; } ;
typedef TYPE_2__ TYDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int,int,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_16)
{
    TYDemuxContext *VAR_17 = VAR_16->priv_data;
    AVIOContext *VAR_18 = VAR_16->pb;
    AVStream *VAR_19, *VAR_20;
    int VAR_21, VAR_22 = 0;

    VAR_17->first_audio_pts = VAR_6;
    VAR_17->last_audio_pts = VAR_6;
    VAR_17->last_video_pts = VAR_6;

    for (VAR_21 = 0; VAR_21 < VAR_7; VAR_21++) {
        FUNC_3(VAR_18, VAR_17->chunk, VAR_8);

        VAR_22 = FUNC_1(VAR_16, VAR_17->chunk);
        if (VAR_22 < 0)
            return VAR_22;
        if (VAR_17->tivo_series != VAR_14 &&
            VAR_17->audio_type != VAR_13 &&
            VAR_17->tivo_type != VAR_15)
            break;
    }

    if (VAR_17->tivo_series == VAR_14 ||
        VAR_17->audio_type == VAR_13 ||
        VAR_17->tivo_type == VAR_15)
        return FUNC_0(VAR_9);

    VAR_19 = FUNC_2(VAR_16, ((void*)0));
    if (!VAR_19)
        return FUNC_0(VAR_10);
    VAR_19->codecpar->codec_type = VAR_1;
    VAR_19->codecpar->codec_id = VAR_5;
    VAR_19->need_parsing = VAR_2;
    FUNC_5(VAR_19, 64, 1, 90000);

    VAR_20 = FUNC_2(VAR_16, ((void*)0));
    if (!VAR_20)
        return FUNC_0(VAR_10);
    VAR_20->codecpar->codec_type = VAR_0;

    if (VAR_17->audio_type == VAR_12) {
        VAR_20->codecpar->codec_id = VAR_4;
        VAR_20->need_parsing = VAR_2;
    } else {
        VAR_20->codecpar->codec_id = VAR_3;
    }
    FUNC_5(VAR_20, 64, 1, 90000);

    VAR_17->first_chunk = 1;

    FUNC_4(VAR_18, 0, VAR_11);

    return 0;
}
