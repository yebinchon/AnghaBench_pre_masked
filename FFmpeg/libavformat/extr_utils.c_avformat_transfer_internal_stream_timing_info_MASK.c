
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef enum AVTimebaseSource { ____Placeholder_AVTimebaseSource } AVTimebaseSource ;
struct TYPE_15__ {int num; int den; } ;
struct TYPE_14__ {int ticks_per_frame; scalar_t__ codec_tag; TYPE_8__ time_base; } ;
struct TYPE_13__ {int flags; int name; } ;
struct TYPE_12__ {TYPE_8__ avg_frame_rate; TYPE_1__* codecpar; TYPE_8__ time_base; TYPE_8__ r_frame_rate; TYPE_4__* codec; } ;
struct TYPE_11__ {scalar_t__ codec_tag; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVOutputFormat ;
typedef TYPE_4__ AVCodecContext ;


 int AVFMT_TBCF_AUTO ;
 int AVFMT_TBCF_DECODER ;
 int AVFMT_TBCF_R_FRAMERATE ;
 int AVFMT_VARIABLE_FPS ;
 scalar_t__ AV_RL32 (char*) ;
 int INT_MAX ;
 TYPE_8__ av_inv_q (TYPE_8__) ;
 int av_match_name (int ,char*) ;
 double av_q2d (TYPE_8__) ;
 int av_reduce (long long*,long long*,long long,long long,int ) ;
 int strcmp (int ,char*) ;

int avformat_transfer_internal_stream_timing_info(const AVOutputFormat *ofmt,
                                                  AVStream *ost, const AVStream *ist,
                                                  enum AVTimebaseSource copy_tb)
{

    const AVCodecContext *dec_ctx = ist->codec;
    AVCodecContext *enc_ctx = ost->codec;

    enc_ctx->time_base = ist->time_base;





    if (!strcmp(ofmt->name, "avi")) {
            if (copy_tb == AVFMT_TBCF_AUTO && av_q2d(dec_ctx->time_base)*dec_ctx->ticks_per_frame > 2*av_q2d(ist->time_base)
                   && av_q2d(ist->time_base) < 1.0/500
                   || copy_tb == AVFMT_TBCF_DECODER) {
            enc_ctx->time_base = dec_ctx->time_base;
            enc_ctx->time_base.num *= dec_ctx->ticks_per_frame;
            enc_ctx->time_base.den *= 2;
            enc_ctx->ticks_per_frame = 2;
        }
    } else if (!(ofmt->flags & AVFMT_VARIABLE_FPS)
               && !av_match_name(ofmt->name, "mov,mp4,3gp,3g2,psp,ipod,ismv,f4v")) {
        if (copy_tb == AVFMT_TBCF_AUTO && dec_ctx->time_base.den
            && av_q2d(dec_ctx->time_base)*dec_ctx->ticks_per_frame > av_q2d(ist->time_base)
            && av_q2d(ist->time_base) < 1.0/500
            || copy_tb == AVFMT_TBCF_DECODER) {
            enc_ctx->time_base = dec_ctx->time_base;
            enc_ctx->time_base.num *= dec_ctx->ticks_per_frame;
        }
    }

    if ((enc_ctx->codec_tag == AV_RL32("tmcd") || ost->codecpar->codec_tag == AV_RL32("tmcd"))
        && dec_ctx->time_base.num < dec_ctx->time_base.den
        && dec_ctx->time_base.num > 0
        && 121LL*dec_ctx->time_base.num > dec_ctx->time_base.den) {
        enc_ctx->time_base = dec_ctx->time_base;
    }

    if (ost->avg_frame_rate.num)
        enc_ctx->time_base = av_inv_q(ost->avg_frame_rate);

    av_reduce(&enc_ctx->time_base.num, &enc_ctx->time_base.den,
              enc_ctx->time_base.num, enc_ctx->time_base.den, INT_MAX);

    return 0;
}
