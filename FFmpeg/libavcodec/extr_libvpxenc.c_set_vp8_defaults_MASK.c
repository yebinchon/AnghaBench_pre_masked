
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vpx_codec_enc_cfg {int rc_target_bitrate; scalar_t__ rc_end_usage; } ;
struct TYPE_5__ {int crf; } ;
typedef TYPE_1__ VPxContext ;
struct TYPE_6__ {int bit_rate; TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,char*,int,...) ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_2,
                             struct vpx_codec_enc_cfg *VAR_3)
{
    VPxContext *VAR_4 = VAR_2->priv_data;
    FUNC_0(!VAR_2->bit_rate);
    VAR_2->bit_rate = VAR_3->rc_target_bitrate * 1000;
    if (VAR_3->rc_end_usage == VAR_1) {
        FUNC_1(VAR_2, VAR_0,
               "Bitrate not specified for constrained quality mode, using default of %dkbit/sec\n",
               VAR_3->rc_target_bitrate);
    } else {
        VAR_3->rc_end_usage = VAR_1;
        VAR_4->crf = 32;
        FUNC_1(VAR_2, VAR_0,
               "Neither bitrate nor constrained quality specified, using default CRF of %d and bitrate of %dkbit/sec\n",
               VAR_4->crf, VAR_3->rc_target_bitrate);
    }
}
