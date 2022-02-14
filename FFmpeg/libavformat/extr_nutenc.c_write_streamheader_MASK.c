
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int codec_type; int video_delay; int extradata_size; int sample_rate; int channels; int width; int height; int extradata; scalar_t__ codec_tag; } ;
struct TYPE_14__ {TYPE_3__* priv_data; } ;
struct TYPE_11__ {int num; int den; } ;
struct TYPE_13__ {TYPE_2__ sample_aspect_ratio; TYPE_6__* codecpar; } ;
struct TYPE_12__ {int time_base; TYPE_1__* stream; } ;
struct TYPE_10__ {int time_base; int msb_pts_shift; int max_pts_distance; } ;
typedef TYPE_3__ NUTContext ;
typedef TYPE_4__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;
typedef TYPE_6__ AVCodecParameters ;


 int FUNC_0 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*,int ,char*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_2, AVIOContext *VAR_3,
                              AVStream *VAR_4, int VAR_5)
{
    NUTContext *VAR_6 = VAR_2->priv_data;
    AVCodecParameters *VAR_7 = VAR_4->codecpar;

    FUNC_5(VAR_3, VAR_5);
    switch (VAR_7->codec_type) {
    case 128: FUNC_5(VAR_3, 0); break;
    case 130: FUNC_5(VAR_3, 1); break;
    case 129: FUNC_5(VAR_3, 2); break;
    default: FUNC_5(VAR_3, 3); break;
    }
    FUNC_5(VAR_3, 4);

    if (VAR_7->codec_tag) {
        FUNC_3(VAR_3, VAR_7->codec_tag);
    } else {
        FUNC_1(VAR_2, VAR_0, "No codec tag defined for stream %d\n", VAR_5);
        return FUNC_0(VAR_1);
    }

    FUNC_5(VAR_3, VAR_6->stream[VAR_5].time_base - VAR_6->time_base);
    FUNC_5(VAR_3, VAR_6->stream[VAR_5].msb_pts_shift);
    FUNC_5(VAR_3, VAR_6->stream[VAR_5].max_pts_distance);
    FUNC_5(VAR_3, VAR_7->video_delay);
    FUNC_2(VAR_3, 0);

    FUNC_5(VAR_3, VAR_7->extradata_size);
    FUNC_4(VAR_3, VAR_7->extradata, VAR_7->extradata_size);

    switch (VAR_7->codec_type) {
    case 130:
        FUNC_5(VAR_3, VAR_7->sample_rate);
        FUNC_5(VAR_3, 1);
        FUNC_5(VAR_3, VAR_7->channels);
        break;
    case 128:
        FUNC_5(VAR_3, VAR_7->width);
        FUNC_5(VAR_3, VAR_7->height);

        if (VAR_4->sample_aspect_ratio.num <= 0 ||
            VAR_4->sample_aspect_ratio.den <= 0) {
            FUNC_5(VAR_3, 0);
            FUNC_5(VAR_3, 0);
        } else {
            FUNC_5(VAR_3, VAR_4->sample_aspect_ratio.num);
            FUNC_5(VAR_3, VAR_4->sample_aspect_ratio.den);
        }
        FUNC_5(VAR_3, 0);
        break;
    default:
        break;
    }
    return 0;
}
