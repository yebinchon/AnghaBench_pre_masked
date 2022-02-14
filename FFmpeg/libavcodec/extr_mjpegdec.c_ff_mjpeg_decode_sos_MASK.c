
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_22__ {scalar_t__ codec_tag; scalar_t__ pix_fmt; int debug; TYPE_2__* hwaccel; } ;
struct TYPE_21__ {scalar_t__ width; scalar_t__ height; scalar_t__ format; } ;
struct TYPE_20__ {int nb_components; int* component_id; int* nb_blocks; int* h_count; int* v_count; int* h_scount; int* v_scount; int* comp_index; int* dc_index; int* ac_index; int mb_width; int const width; int const h_max; int mb_height; int const height; int const v_max; int bits; int mjpb_skiptosod; int* last_dc; int raw_scan_buffer_size; int bottom_field; TYPE_6__* avctx; int gb; scalar_t__ interlaced; TYPE_3__* picture; TYPE_3__* picture_ptr; scalar_t__ progressive; scalar_t__ bayer; scalar_t__ rgb; scalar_t__ ls; scalar_t__ lossless; scalar_t__ raw_scan_buffer; scalar_t__ rct; scalar_t__ pegasus_rct; TYPE_1__** vlcs; int * quant_index; int * quant_sindex; int got_picture; } ;
struct TYPE_19__ {scalar_t__ width; scalar_t__ height; scalar_t__ format; } ;
struct TYPE_18__ {int (* decode_slice ) (TYPE_6__*,scalar_t__,int) ;} ;
struct TYPE_17__ {int table; } ;
typedef TYPE_4__ MJpegDecodeContext ;
typedef int GetBitContext ;
typedef TYPE_5__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (char,char,char,char) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_6__*,int ,char*,...) ;
 int FUNC_5 (TYPE_6__*,char*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_4__*,int,int,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_4__*,int,int,int) ;
 int FUNC_12 (TYPE_4__*,int,int,int) ;
 int FUNC_13 (TYPE_4__*,int,int,int,int const*,int,TYPE_5__ const*) ;
 int FUNC_14 (TYPE_4__*,int,int,int,int) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (TYPE_6__*,scalar_t__,int) ;

int FUNC_18(MJpegDecodeContext *VAR_9, const uint8_t *VAR_10,
                        int VAR_11, const AVFrame *VAR_12)
{
    int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    int VAR_20, VAR_21, VAR_22;
    const int VAR_23 = VAR_9->lossless ? 1 : 8;
    int VAR_24, VAR_25;

    if (!VAR_9->got_picture) {
        FUNC_4(VAR_9->avctx, VAR_4,
                "Can not process SOS before SOF, skipping\n");
        return -1;
    }

    if (VAR_12) {
        if (VAR_12->width != VAR_9->picture_ptr->width ||
            VAR_12->height != VAR_9->picture_ptr->height ||
            VAR_12->format != VAR_9->picture_ptr->format) {
            FUNC_4(VAR_9->avctx, VAR_3, "Reference mismatching\n");
            return VAR_0;
        }
    }


    VAR_13 = FUNC_8(&VAR_9->gb, 16);
    VAR_14 = FUNC_8(&VAR_9->gb, 8);
    if (VAR_14 == 0 || VAR_14 > VAR_8) {
        FUNC_5(VAR_9->avctx,
                                      "decode_sos: nb_components (%d)",
                                      VAR_14);
        return VAR_1;
    }
    if (VAR_13 != 6 + 2 * VAR_14) {
        FUNC_4(VAR_9->avctx, VAR_3, "decode_sos: invalid len (%d)\n", VAR_13);
        return VAR_0;
    }
    for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
        VAR_21 = FUNC_8(&VAR_9->gb, 8) - 1;
        FUNC_4(VAR_9->avctx, VAR_2, "component: %d\n", VAR_21);

        for (VAR_20 = 0; VAR_20 < VAR_9->nb_components; VAR_20++)
            if (VAR_21 == VAR_9->component_id[VAR_20])
                break;
        if (VAR_20 == VAR_9->nb_components) {
            FUNC_4(VAR_9->avctx, VAR_3,
                   "decode_sos: index(%d) out of components\n", VAR_20);
            return VAR_0;
        }

        if (VAR_9->avctx->codec_tag == FUNC_1('M', 'T', 'S', 'J')
            && VAR_14 == 3 && VAR_9->nb_components == 3 && VAR_15)
            VAR_20 = 3 - VAR_15;

        VAR_9->quant_sindex[VAR_15] = VAR_9->quant_index[VAR_20];
        VAR_9->nb_blocks[VAR_15] = VAR_9->h_count[VAR_20] * VAR_9->v_count[VAR_20];
        VAR_9->h_scount[VAR_15] = VAR_9->h_count[VAR_20];
        VAR_9->v_scount[VAR_15] = VAR_9->v_count[VAR_20];

        if((VAR_14 == 1 || VAR_14 == 3) && VAR_9->nb_components == 3 && VAR_9->avctx->pix_fmt == VAR_5)
            VAR_20 = (VAR_20+2)%3;

        VAR_9->comp_index[VAR_15] = VAR_20;

        VAR_9->dc_index[VAR_15] = FUNC_8(&VAR_9->gb, 4);
        VAR_9->ac_index[VAR_15] = FUNC_8(&VAR_9->gb, 4);

        if (VAR_9->dc_index[VAR_15] < 0 || VAR_9->ac_index[VAR_15] < 0 ||
            VAR_9->dc_index[VAR_15] >= 4 || VAR_9->ac_index[VAR_15] >= 4)
            goto out_of_range;
        if (!VAR_9->vlcs[0][VAR_9->dc_index[VAR_15]].table || !(VAR_9->progressive ? VAR_9->vlcs[2][VAR_9->ac_index[0]].table : VAR_9->vlcs[1][VAR_9->ac_index[VAR_15]].table))
            goto out_of_range;
    }

    VAR_18 = FUNC_8(&VAR_9->gb, 8);
    VAR_24 = FUNC_8(&VAR_9->gb, 8);
    if(VAR_9->avctx->codec_tag != FUNC_0("CJPG")){
        VAR_25 = FUNC_8(&VAR_9->gb, 4);
        VAR_19 = FUNC_8(&VAR_9->gb, 4);
    }else
        VAR_25 = VAR_19 = 0;

    if (VAR_14 > 1) {

        VAR_9->mb_width = (VAR_9->width + VAR_9->h_max * VAR_23 - 1) / (VAR_9->h_max * VAR_23);
        VAR_9->mb_height = (VAR_9->height + VAR_9->v_max * VAR_23 - 1) / (VAR_9->v_max * VAR_23);
    } else if (!VAR_9->ls) {
        VAR_16 = VAR_9->h_max / VAR_9->h_scount[0];
        VAR_17 = VAR_9->v_max / VAR_9->v_scount[0];
        VAR_9->mb_width = (VAR_9->width + VAR_16 * VAR_23 - 1) / (VAR_16 * VAR_23);
        VAR_9->mb_height = (VAR_9->height + VAR_17 * VAR_23 - 1) / (VAR_17 * VAR_23);
        VAR_9->nb_blocks[0] = 1;
        VAR_9->h_scount[0] = 1;
        VAR_9->v_scount[0] = 1;
    }

    if (VAR_9->avctx->debug & VAR_7)
        FUNC_4(VAR_9->avctx, VAR_2, "%s %s p:%d >>:%d ilv:%d bits:%d skip:%d %s comp:%d\n",
               VAR_9->lossless ? "lossless" : "sequential DCT", VAR_9->rgb ? "RGB" : "",
               VAR_18, VAR_19, VAR_24, VAR_9->bits, VAR_9->mjpb_skiptosod,
               VAR_9->pegasus_rct ? "PRCT" : (VAR_9->rct ? "RCT" : ""), VAR_14);



    for (VAR_15 = VAR_9->mjpb_skiptosod; VAR_15 > 0; VAR_15--)
        FUNC_16(&VAR_9->gb, 8);

next_field:
    for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
        VAR_9->last_dc[VAR_15] = (4 << VAR_9->bits);

    if (VAR_9->avctx->hwaccel) {
        int VAR_26 = FUNC_9(&VAR_9->gb) / 8;
        FUNC_3(VAR_26 >= 0 &&
                   VAR_9->raw_scan_buffer_size >= VAR_26);

        VAR_22 = VAR_9->avctx->hwaccel->decode_slice(VAR_9->avctx,
                                              VAR_9->raw_scan_buffer + VAR_26,
                                              VAR_9->raw_scan_buffer_size - VAR_26);
        if (VAR_22 < 0)
            return VAR_22;

    } else if (VAR_9->lossless) {
        FUNC_3(VAR_9->picture_ptr == VAR_9->picture);
        if (VAR_6 && VAR_9->ls) {



            if ((VAR_22 = FUNC_7(VAR_9, VAR_18,
                                                VAR_19, VAR_24)) < 0)
                return VAR_22;
        } else {
            if (VAR_9->rgb || VAR_9->bayer) {
                if ((VAR_22 = FUNC_11(VAR_9, VAR_14, VAR_18, VAR_19)) < 0)
                    return VAR_22;
            } else {
                if ((VAR_22 = FUNC_12(VAR_9, VAR_18,
                                                 VAR_19,
                                                 VAR_14)) < 0)
                    return VAR_22;
            }
        }
    } else {
        if (VAR_9->progressive && VAR_18) {
            FUNC_3(VAR_9->picture_ptr == VAR_9->picture);
            if ((VAR_22 = FUNC_14(VAR_9, VAR_18,
                                                        VAR_24, VAR_25,
                                                        VAR_19)) < 0)
                return VAR_22;
        } else {
            if ((VAR_22 = FUNC_13(VAR_9, VAR_14,
                                         VAR_25, VAR_19,
                                         VAR_10, VAR_11, VAR_12)) < 0)
                return VAR_22;
        }
    }

    if (VAR_9->interlaced &&
        FUNC_10(&VAR_9->gb) > 32 &&
        FUNC_15(&VAR_9->gb, 8) == 0xFF) {
        GetBitContext VAR_27 = VAR_9->gb;
        FUNC_2(&VAR_27);
        if (FUNC_15(&VAR_27, 16) == 0xFFD1) {
            FUNC_4(VAR_9->avctx, VAR_2, "AVRn interlaced picture marker found\n");
            VAR_9->gb = VAR_27;
            FUNC_16(&VAR_9->gb, 16);
            VAR_9->bottom_field ^= 1;

            goto next_field;
        }
    }

    FUNC_6();
    return 0;
 out_of_range:
    FUNC_4(VAR_9->avctx, VAR_3, "decode_sos: ac/dc index out of range\n");
    return VAR_0;
}
