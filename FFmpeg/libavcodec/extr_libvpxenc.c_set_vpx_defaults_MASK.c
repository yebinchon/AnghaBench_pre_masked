
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vpx_codec_enc_cfg {int dummy; } ;
struct TYPE_5__ {scalar_t__ codec_id; int bit_rate; } ;
typedef TYPE_1__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,struct vpx_codec_enc_cfg*) ;
 int FUNC_2 (TYPE_1__*,struct vpx_codec_enc_cfg*) ;

__attribute__((used)) static void FUNC_3(AVCodecContext *VAR_1,
                             struct vpx_codec_enc_cfg *VAR_2)
{
    FUNC_0(!VAR_1->bit_rate);






    FUNC_1(VAR_1, VAR_2);
}
