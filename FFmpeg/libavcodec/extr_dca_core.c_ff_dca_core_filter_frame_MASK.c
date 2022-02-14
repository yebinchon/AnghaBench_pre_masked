
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef enum AVMatrixEncoding { ____Placeholder_AVMatrixEncoding } AVMatrixEncoding ;
struct TYPE_14__ {int flags; int bit_rate; int profile; TYPE_4__* priv_data; } ;
struct TYPE_10__ {TYPE_2__* assets; } ;
struct TYPE_13__ {scalar_t__ request_channel_layout; int packet; TYPE_1__ exss; } ;
struct TYPE_12__ {scalar_t__ audio_mode; scalar_t__ prim_dmix_type; int ext_audio_mask; int bit_rate; scalar_t__ ch_mask; scalar_t__ request_mask; int ch_remap; scalar_t__ prim_dmix_embedded; TYPE_5__* avctx; } ;
struct TYPE_11__ {int extension_mask; } ;
typedef TYPE_2__ DCAExssAsset ;
typedef TYPE_3__ DCACoreDecoder ;
typedef TYPE_4__ DCAContext ;
typedef int AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (TYPE_5__*,int ,scalar_t__) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;

int FUNC_5(DCACoreDecoder *VAR_19, AVFrame *VAR_20)
{
    AVCodecContext *VAR_21 = VAR_19->avctx;
    DCAContext *VAR_22 = VAR_21->priv_data;
    DCAExssAsset *VAR_23 = &VAR_22->exss.assets[0];
    enum AVMatrixEncoding VAR_24;
    int VAR_25;


    if (VAR_22->request_channel_layout == VAR_13
        && VAR_19->audio_mode > VAR_3 && VAR_19->prim_dmix_embedded
        && (VAR_19->prim_dmix_type == VAR_8 ||
            VAR_19->prim_dmix_type == VAR_9))
        VAR_19->request_mask = VAR_13;
    else
        VAR_19->request_mask = VAR_19->ch_mask;
    if (!FUNC_1(VAR_21, VAR_19->ch_remap, VAR_19->request_mask))
        return FUNC_0(VAR_14);


    if ((VAR_21->flags & VAR_0) || ((VAR_22->packet & VAR_12)
                                                    && (VAR_23->extension_mask & VAR_11)))
        VAR_25 = FUNC_3(VAR_19, VAR_20);
    else
        VAR_25 = FUNC_4(VAR_19, VAR_20);
    if (VAR_25 < 0)
        return VAR_25;


    if (VAR_19->ext_audio_mask & VAR_10)
        VAR_21->profile = VAR_18;
    else if (VAR_19->ext_audio_mask & (VAR_7 | VAR_6))
        VAR_21->profile = VAR_17;
    else if (VAR_19->ext_audio_mask & VAR_5)
        VAR_21->profile = VAR_16;
    else
        VAR_21->profile = VAR_15;

    if (VAR_19->bit_rate > 3 && !(VAR_19->ext_audio_mask & VAR_10))
        VAR_21->bit_rate = VAR_19->bit_rate;
    else
        VAR_21->bit_rate = 0;

    if (VAR_19->audio_mode == VAR_4 || (VAR_19->request_mask != VAR_19->ch_mask &&
                                                    VAR_19->prim_dmix_type == VAR_9))
        VAR_24 = VAR_1;
    else
        VAR_24 = VAR_2;
    if ((VAR_25 = FUNC_2(VAR_20, VAR_24)) < 0)
        return VAR_25;

    return 0;
}
