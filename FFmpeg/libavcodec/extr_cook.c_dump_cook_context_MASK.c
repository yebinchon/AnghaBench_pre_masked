
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int channels; int sample_rate; scalar_t__ bit_rate; } ;
struct TYPE_6__ {TYPE_1__* subpacket; TYPE_3__* avctx; } ;
struct TYPE_5__ {scalar_t__ cookversion; int js_subband_start; int js_vlc_bits; int samples_per_channel; int subbands; int log2_numvector_size; int numvector_size; int total_subbands; } ;
typedef TYPE_2__ COOKContext ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*,char*,...) ;

__attribute__((used)) static void FUNC_2(COOKContext *VAR_1)
{


    FUNC_1(VAR_1->avctx, "COOKextradata\n");
    FUNC_1(VAR_1->avctx, "cookversion=%x\n", VAR_1->subpacket[0].cookversion);
    if (VAR_1->subpacket[0].cookversion > VAR_0) {
        FUNC_1(VAR_1->avctx, " %s = %d\n", "js_subband_start", VAR_1->subpacket[0].js_subband_start);;
        FUNC_1(VAR_1->avctx, " %s = %d\n", "js_vlc_bits", VAR_1->subpacket[0].js_vlc_bits);;
    }
    FUNC_1(VAR_1->avctx, "COOKContext\n");
    FUNC_1(VAR_1->avctx, " %s = %d\n", "nb_channels", VAR_1->avctx->channels);;
    FUNC_1(VAR_1->avctx, " %s = %d\n", "bit_rate", (int)VAR_1->avctx->bit_rate);;
    FUNC_1(VAR_1->avctx, " %s = %d\n", "sample_rate", VAR_1->avctx->sample_rate);;
    FUNC_1(VAR_1->avctx, " %s = %d\n", "samples_per_channel", VAR_1->subpacket[0].samples_per_channel);;
    FUNC_1(VAR_1->avctx, " %s = %d\n", "subbands", VAR_1->subpacket[0].subbands);;
    FUNC_1(VAR_1->avctx, " %s = %d\n", "js_subband_start", VAR_1->subpacket[0].js_subband_start);;
    FUNC_1(VAR_1->avctx, " %s = %d\n", "log2_numvector_size", VAR_1->subpacket[0].log2_numvector_size);;
    FUNC_1(VAR_1->avctx, " %s = %d\n", "numvector_size", VAR_1->subpacket[0].numvector_size);;
    FUNC_1(VAR_1->avctx, " %s = %d\n", "total_subbands", VAR_1->subpacket[0].total_subbands);;
}
