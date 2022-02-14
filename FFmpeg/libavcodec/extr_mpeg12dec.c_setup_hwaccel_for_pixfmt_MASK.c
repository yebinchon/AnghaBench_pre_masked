
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ idct_algo; scalar_t__ pix_fmt; TYPE_2__* priv_data; scalar_t__ hwaccel; } ;
struct TYPE_5__ {int pack_pblocks; } ;
struct TYPE_6__ {TYPE_1__ mpeg_enc_ctx; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ Mpeg1Context ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(AVCodecContext *VAR_3)
{

    if (VAR_3->hwaccel)
        if (VAR_3->idct_algo == VAR_1)
            VAR_3->idct_algo = VAR_2;

    if (VAR_3->hwaccel && VAR_3->pix_fmt == VAR_0) {
        Mpeg1Context *VAR_4 = VAR_3->priv_data;
        MpegEncContext *VAR_5 = &VAR_4->mpeg_enc_ctx;

        VAR_5->pack_pblocks = 1;
    }
}
