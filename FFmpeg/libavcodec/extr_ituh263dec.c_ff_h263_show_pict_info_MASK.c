
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int den; int num; } ;
struct TYPE_9__ {int debug; TYPE_2__ framerate; } ;
struct TYPE_6__ {int size_in_bits; } ;
struct TYPE_8__ {TYPE_5__* avctx; scalar_t__ h263_slice_structured; scalar_t__ loop_filter; scalar_t__ modified_quant; scalar_t__ alt_inter_vlc; scalar_t__ h263_aic; scalar_t__ h263_plus; scalar_t__ h263_long_vectors; scalar_t__ umvplus; scalar_t__ obmc; scalar_t__ no_rounding; TYPE_1__ gb; int pict_type; int qscale; } ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,int ,char*,int ,int ,int ,scalar_t__,char*,char*,char*,char*,char*,char*,char*,char*,char*,int ,int ) ;

void FUNC_2(MpegEncContext *VAR_2){
    if(VAR_2->avctx->debug&VAR_1){
    FUNC_1(VAR_2->avctx, VAR_0, "qp:%d %c size:%d rnd:%d%s%s%s%s%s%s%s%s%s %d/%d\n",
         VAR_2->qscale, FUNC_0(VAR_2->pict_type),
         VAR_2->gb.size_in_bits, 1-VAR_2->no_rounding,
         VAR_2->obmc ? " AP" : "",
         VAR_2->umvplus ? " UMV" : "",
         VAR_2->h263_long_vectors ? " LONG" : "",
         VAR_2->h263_plus ? " +" : "",
         VAR_2->h263_aic ? " AIC" : "",
         VAR_2->alt_inter_vlc ? " AIV" : "",
         VAR_2->modified_quant ? " MQ" : "",
         VAR_2->loop_filter ? " LOOP" : "",
         VAR_2->h263_slice_structured ? " SS" : "",
         VAR_2->avctx->framerate.num, VAR_2->avctx->framerate.den
    );
    }
}
