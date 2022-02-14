
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_22__ ;
typedef struct TYPE_25__ TYPE_20__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_31__ {int code_word; int bits; int high; scalar_t__ buffer; } ;
struct TYPE_27__ {int value; int bit_count; int range; scalar_t__ input; } ;
struct TYPE_25__ {void* update; void* enabled; scalar_t__ update_map; } ;
struct TYPE_24__ {void* sharpness; void* level; void* simple; } ;
struct TYPE_28__ {int put_vp8_bilinear_pixels_tab; int put_vp8_epel_pixels_tab; } ;
struct TYPE_30__ {int keyframe; int profile; int invisible; int header_partition_size; int mb_width; int mb_height; int update_last; TYPE_6__ c; TYPE_2__ coder_state_at_header_end; TYPE_4__* prob; void* mbskip_enabled; void* update_probabilities; void** sign_bias; TYPE_22__* avctx; int macroblocks_base; TYPE_20__ lf_delta; TYPE_1__ filter; TYPE_20__ segmentation; void* fullrange; void* colorspace; int update_altref; int update_golden; TYPE_3__ vp8dsp; int put_pixels_tab; } ;
typedef TYPE_5__ VP8Context ;
typedef TYPE_6__ VP56RangeCoder ;
struct TYPE_29__ {void* golden; void* last; void* intra; void* mbskip; int mvc; int pred8x8c; int pred16x16; } ;
struct TYPE_26__ {int width; int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_22__*,int ,char*,...) ;
 int FUNC_3 (TYPE_22__*,char*) ;
 int FUNC_4 (TYPE_6__*,int const*,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_20__*,int ,int) ;
 int FUNC_7 (TYPE_5__*) ;
 scalar_t__ FUNC_8 (TYPE_5__*,int const*,int) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*,int ) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_5__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_16 (TYPE_6__*) ;
 void* FUNC_17 (TYPE_6__*,int) ;
 int FUNC_18 (TYPE_5__*,int,int) ;

__attribute__((used)) static int FUNC_19(VP8Context *VAR_10, const uint8_t *VAR_11, int VAR_12)
{
    VP56RangeCoder *VAR_13 = &VAR_10->c;
    int VAR_14, VAR_15, VAR_16, VAR_17;
    int VAR_18 = VAR_10->avctx->width;
    int VAR_19 = VAR_10->avctx->height;

    if (VAR_12 < 3) {
        FUNC_2(VAR_10->avctx, VAR_1, "Insufficent data (%d) for header\n", VAR_12);
        return VAR_0;
    }

    VAR_10->keyframe = !(VAR_11[0] & 1);
    VAR_10->profile = (VAR_11[0]>>1) & 7;
    VAR_10->invisible = !(VAR_11[0] & 0x10);
    VAR_14 = FUNC_1(VAR_11) >> 5;
    VAR_11 += 3;
    VAR_12 -= 3;

    VAR_10->header_partition_size = VAR_14;

    if (VAR_10->profile > 3)
        FUNC_2(VAR_10->avctx, VAR_2, "Unknown profile %d\n", VAR_10->profile);

    if (!VAR_10->profile)
        FUNC_5(VAR_10->put_pixels_tab, VAR_10->vp8dsp.put_vp8_epel_pixels_tab,
               sizeof(VAR_10->put_pixels_tab));
    else
        FUNC_5(VAR_10->put_pixels_tab, VAR_10->vp8dsp.put_vp8_bilinear_pixels_tab,
               sizeof(VAR_10->put_pixels_tab));

    if (VAR_14 > VAR_12 - 7 * VAR_10->keyframe) {
        FUNC_2(VAR_10->avctx, VAR_1, "Header size larger than data provided\n");
        return VAR_0;
    }

    if (VAR_10->keyframe) {
        if (FUNC_1(VAR_11) != 0x2a019d) {
            FUNC_2(VAR_10->avctx, VAR_1,
                   "Invalid start code 0x%x\n", FUNC_1(VAR_11));
            return VAR_0;
        }
        VAR_18 = FUNC_0(VAR_11 + 3) & 0x3fff;
        VAR_19 = FUNC_0(VAR_11 + 5) & 0x3fff;
        VAR_15 = VAR_11[4] >> 6;
        VAR_16 = VAR_11[6] >> 6;
        VAR_11 += 7;
        VAR_12 -= 7;

        if (VAR_15 || VAR_16)
            FUNC_3(VAR_10->avctx, "Upscaling");

        VAR_10->update_golden = VAR_10->update_altref = VAR_3;
        FUNC_12(VAR_10);
        FUNC_5(VAR_10->prob->pred16x16, VAR_8,
               sizeof(VAR_10->prob->pred16x16));
        FUNC_5(VAR_10->prob->pred8x8c, VAR_9,
               sizeof(VAR_10->prob->pred8x8c));
        FUNC_5(VAR_10->prob->mvc, VAR_7,
               sizeof(VAR_10->prob->mvc));
        FUNC_6(&VAR_10->segmentation, 0, sizeof(VAR_10->segmentation));
        FUNC_6(&VAR_10->lf_delta, 0, sizeof(VAR_10->lf_delta));
    }

    VAR_17 = FUNC_4(VAR_13, VAR_11, VAR_14);
    if (VAR_17 < 0)
        return VAR_17;
    VAR_11 += VAR_14;
    VAR_12 -= VAR_14;

    if (VAR_10->keyframe) {
        VAR_10->colorspace = FUNC_16(VAR_13);
        if (VAR_10->colorspace)
            FUNC_2(VAR_10->avctx, VAR_2, "Unspecified colorspace\n");
        VAR_10->fullrange = FUNC_16(VAR_13);
    }

    if ((VAR_10->segmentation.enabled = FUNC_16(VAR_13)))
        FUNC_7(VAR_10);
    else
        VAR_10->segmentation.update_map = 0;

    VAR_10->filter.simple = FUNC_16(VAR_13);
    VAR_10->filter.level = FUNC_17(VAR_13, 6);
    VAR_10->filter.sharpness = FUNC_17(VAR_13, 3);

    if ((VAR_10->lf_delta.enabled = FUNC_16(VAR_13))) {
        VAR_10->lf_delta.update = FUNC_16(VAR_13);
        if (VAR_10->lf_delta.update)
            FUNC_9(VAR_10);
    }

    if (FUNC_8(VAR_10, VAR_11, VAR_12)) {
        FUNC_2(VAR_10->avctx, VAR_1, "Invalid partitions\n");
        return VAR_0;
    }

    if (!VAR_10->macroblocks_base ||
        VAR_18 != VAR_10->avctx->width || VAR_19 != VAR_10->avctx->height ||
        (VAR_18+15)/16 != VAR_10->mb_width || (VAR_19+15)/16 != VAR_10->mb_height)
        if ((VAR_17 = FUNC_18(VAR_10, VAR_18, VAR_19)) < 0)
            return VAR_17;

    FUNC_15(VAR_10);

    if (!VAR_10->keyframe) {
        FUNC_10(VAR_10);
        VAR_10->sign_bias[VAR_4] = FUNC_16(VAR_13);
        VAR_10->sign_bias[VAR_5 ] = FUNC_16(VAR_13);
    }



    if (!(VAR_10->update_probabilities = FUNC_16(VAR_13)))
        VAR_10->prob[1] = VAR_10->prob[0];

    VAR_10->update_last = VAR_10->keyframe || FUNC_16(VAR_13);

    FUNC_14(VAR_10);

    if ((VAR_10->mbskip_enabled = FUNC_16(VAR_13)))
        VAR_10->prob->mbskip = FUNC_17(VAR_13, 8);

    if (!VAR_10->keyframe) {
        VAR_10->prob->intra = FUNC_17(VAR_13, 8);
        VAR_10->prob->last = FUNC_17(VAR_13, 8);
        VAR_10->prob->golden = FUNC_17(VAR_13, 8);
        FUNC_13(VAR_10, VAR_6);
    }


    VAR_10->c.code_word = FUNC_11(&VAR_10->c);
    VAR_10->coder_state_at_header_end.input = VAR_10->c.buffer - (-VAR_10->c.bits / 8);
    VAR_10->coder_state_at_header_end.range = VAR_10->c.high;
    VAR_10->coder_state_at_header_end.value = VAR_10->c.code_word >> 16;
    VAR_10->coder_state_at_header_end.bit_count = -VAR_10->c.bits % 8;

    return 0;
}
