
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ codec_id; int codec_type; int width; int pix_fmt; int channels; int sample_rate; int sample_fmt; int frame_size; } ;
struct TYPE_12__ {int num; } ;
struct TYPE_15__ {int codec_info_nb_frames; TYPE_5__* codecpar; TYPE_3__ sample_aspect_ratio; TYPE_2__* info; int nb_decoded_frames; TYPE_1__* internal; } ;
struct TYPE_13__ {int num; } ;
struct TYPE_14__ {TYPE_4__ sample_aspect_ratio; int codec_id; } ;
struct TYPE_11__ {int found_decoder; } ;
struct TYPE_10__ {TYPE_7__* avctx; } ;
typedef TYPE_6__ AVStream ;
typedef TYPE_7__ AVCodecContext ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_7__*) ;

__attribute__((used)) static int FUNC_2(AVStream *VAR_7, const char **VAR_8)
{
    AVCodecContext *VAR_9 = VAR_7->internal->avctx;







    if ( VAR_9->codec_id == VAR_2
        && VAR_9->codec_type != 130)
        do { if (VAR_8) *VAR_8 = "unknown codec"; return 0; } while (0);
    switch (VAR_9->codec_type) {
    case 131:
        if (!VAR_9->frame_size && FUNC_1(VAR_9))
            do { if (VAR_8) *VAR_8 = "unspecified frame size"; return 0; } while (0);
        if (VAR_7->info->found_decoder >= 0 &&
            VAR_9->sample_fmt == VAR_6)
            do { if (VAR_8) *VAR_8 = "unspecified sample format"; return 0; } while (0);
        if (!VAR_9->sample_rate)
            do { if (VAR_8) *VAR_8 = "unspecified sample rate"; return 0; } while (0);
        if (!VAR_9->channels)
            do { if (VAR_8) *VAR_8 = "unspecified number of channels"; return 0; } while (0);
        if (VAR_7->info->found_decoder >= 0 && !VAR_7->nb_decoded_frames && VAR_9->codec_id == VAR_0)
            do { if (VAR_8) *VAR_8 = "no decodable DTS frames"; return 0; } while (0);
        break;
    case 128:
        if (!VAR_9->width)
            do { if (VAR_8) *VAR_8 = "unspecified size"; return 0; } while (0);
        if (VAR_7->info->found_decoder >= 0 && VAR_9->pix_fmt == VAR_5)
            do { if (VAR_8) *VAR_8 = "unspecified pixel format"; return 0; } while (0);
        if (VAR_7->codecpar->codec_id == VAR_3 || VAR_7->codecpar->codec_id == VAR_4)
            if (!VAR_7->sample_aspect_ratio.num && !VAR_7->codecpar->sample_aspect_ratio.num && !VAR_7->codec_info_nb_frames)
                do { if (VAR_8) *VAR_8 = "no frame in rv30/40 and no sar"; return 0; } while (0);
        break;
    case 129:
        if (VAR_9->codec_id == VAR_1 && !VAR_9->width)
            do { if (VAR_8) *VAR_8 = "unspecified size"; return 0; } while (0);
        break;
    case 130:
        if (VAR_9->codec_id == VAR_2) return 1;
    }

    return 1;
}
