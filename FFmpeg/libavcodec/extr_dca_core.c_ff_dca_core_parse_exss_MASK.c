
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {int err_recognition; TYPE_3__* priv_data; } ;
struct TYPE_14__ {int packet; int request_channel_layout; } ;
struct TYPE_13__ {size_t audio_mode; int ext_audio_mask; scalar_t__ x96_pos; int gb; int gb_in; int ch_mask; scalar_t__ lfe_present; int nchannels; scalar_t__ xch_pos; scalar_t__ xxch_pos; TYPE_4__* avctx; } ;
struct TYPE_12__ {int extension_mask; int xxch_offset; int xbr_offset; int x96_offset; int x96_size; int xbr_size; int xxch_size; } ;
typedef TYPE_1__ DCAExssAsset ;
typedef TYPE_2__ DCACoreDecoder ;
typedef TYPE_3__ DCAContext ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,scalar_t__) ;

int FUNC_8(DCACoreDecoder *VAR_12, uint8_t *VAR_13, DCAExssAsset *VAR_14)
{
    AVCodecContext *VAR_15 = VAR_12->avctx;
    DCAContext *VAR_16 = VAR_15->priv_data;
    int VAR_17 = VAR_14 ? VAR_14->extension_mask : 0;
    int VAR_18 = 0, VAR_19 = 0;


    if (!VAR_16->request_channel_layout) {
        if (VAR_17 & VAR_6) {
            if ((VAR_18 = FUNC_1(&VAR_12->gb, VAR_13 + VAR_14->xxch_offset, VAR_14->xxch_size)) < 0)
                return VAR_18;
            VAR_18 = FUNC_6(VAR_12);
            VAR_19 = VAR_6;
        } else if (VAR_12->xxch_pos) {
            VAR_12->gb = VAR_12->gb_in;
            FUNC_7(&VAR_12->gb, VAR_12->xxch_pos);
            VAR_18 = FUNC_6(VAR_12);
            VAR_19 = VAR_3;
        } else if (VAR_12->xch_pos) {
            VAR_12->gb = VAR_12->gb_in;
            FUNC_7(&VAR_12->gb, VAR_12->xch_pos);
            VAR_18 = FUNC_5(VAR_12);
            VAR_19 = VAR_2;
        }


        if (VAR_18 < 0) {
            if (VAR_15->err_recognition & VAR_0)
                return VAR_18;
            VAR_12->nchannels = VAR_11[VAR_12->audio_mode];
            VAR_12->ch_mask = VAR_10[VAR_12->audio_mode];
            if (VAR_12->lfe_present)
                VAR_12->ch_mask |= VAR_8;
        } else {
            VAR_12->ext_audio_mask |= VAR_19;
        }
    }


    if (VAR_17 & VAR_5) {
        if ((VAR_18 = FUNC_1(&VAR_12->gb, VAR_13 + VAR_14->xbr_offset, VAR_14->xbr_size)) < 0)
            return VAR_18;
        if ((VAR_18 = FUNC_4(VAR_12)) < 0) {
            if (VAR_15->err_recognition & VAR_0)
                return VAR_18;
        } else {
            VAR_12->ext_audio_mask |= VAR_5;
        }
    }


    if (!(VAR_16->packet & VAR_7)) {
        if (VAR_17 & VAR_4) {
            if ((VAR_18 = FUNC_1(&VAR_12->gb, VAR_13 + VAR_14->x96_offset, VAR_14->x96_size)) < 0)
                return VAR_18;
            if ((VAR_18 = FUNC_3(VAR_12)) < 0) {
                if (VAR_18 == FUNC_0(VAR_9) || (VAR_15->err_recognition & VAR_0))
                    return VAR_18;
            } else {
                VAR_12->ext_audio_mask |= VAR_4;
            }
        } else if (VAR_12->x96_pos) {
            VAR_12->gb = VAR_12->gb_in;
            FUNC_7(&VAR_12->gb, VAR_12->x96_pos);
            if ((VAR_18 = FUNC_2(VAR_12)) < 0) {
                if (VAR_18 == FUNC_0(VAR_9) || (VAR_15->err_recognition & VAR_0))
                    return VAR_18;
            } else {
                VAR_12->ext_audio_mask |= VAR_1;
            }
        }
    }

    return 0;
}
