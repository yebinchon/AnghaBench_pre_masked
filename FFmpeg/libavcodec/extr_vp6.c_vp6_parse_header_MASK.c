
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int VP56RangeCoder ;
struct TYPE_9__ {int filter_header; int sub_version; int golden_frame; int deblock_filtering; int filter_mode; int sample_variance_threshold; int max_vector_length; int filter_selection; int use_huffman; TYPE_5__* avctx; int c; int * ccp; int cc; int gb; int parse_coeff; int macroblocks; TYPE_1__** frames; } ;
typedef TYPE_2__ VP56Context ;
struct TYPE_10__ {int coded_width; int coded_height; int extradata_size; int width; int height; int* extradata; } ;
struct TYPE_8__ {int key_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int,int) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_5__*,int ,char*,int,int) ;
 int FUNC_3 (TYPE_5__*,char*) ;
 int FUNC_4 (TYPE_5__*,int,int) ;
 int FUNC_5 (TYPE_2__*,int const) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (int *,int const*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(VP56Context *VAR_7, const uint8_t *VAR_8, int VAR_9)
{
    VP56RangeCoder *VAR_10 = &VAR_7->c;
    int VAR_11 = 0;
    int VAR_12 = 0;
    int VAR_13 = 0;
    int VAR_14;
    int VAR_15, VAR_16;
    int VAR_17 = 0;
    int VAR_18;
    int VAR_19 = VAR_8[0] & 1;

    VAR_7->frames[VAR_3]->key_frame = !(VAR_8[0] & 0x80);
    FUNC_5(VAR_7, (VAR_8[0] >> 1) & 0x3F);

    if (VAR_7->frames[VAR_3]->key_frame) {
        VAR_14 = VAR_8[1] >> 3;
        if (VAR_14 > 8)
            return VAR_0;
        VAR_7->filter_header = VAR_8[1] & 0x06;
        if (VAR_8[1] & 1) {
            FUNC_3(VAR_7->avctx, "Interlacing");
            return VAR_1;
        }
        if (VAR_19 || !VAR_7->filter_header) {
            VAR_12 = FUNC_0(VAR_8+2) - 2;
            VAR_8 += 2;
            VAR_9 -= 2;
        }

        VAR_15 = VAR_8[2];
        VAR_16 = VAR_8[3];


        if (!VAR_15 || !VAR_16) {
            FUNC_2(VAR_7->avctx, VAR_2, "Invalid size %dx%d\n", VAR_16 << 4, VAR_15 << 4);
            return VAR_0;
        }

        if (!VAR_7->macroblocks ||
            16*VAR_16 != VAR_7->avctx->coded_width ||
            16*VAR_15 != VAR_7->avctx->coded_height) {
            if (VAR_7->avctx->extradata_size == 0 &&
                FUNC_1(VAR_7->avctx->width, 16) == 16 * VAR_16 &&
                FUNC_1(VAR_7->avctx->height, 16) == 16 * VAR_15) {



                VAR_7->avctx->coded_width = 16 * VAR_16;
                VAR_7->avctx->coded_height = 16 * VAR_15;
            } else {
                VAR_18 = FUNC_4(VAR_7->avctx, 16 * VAR_16, 16 * VAR_15);
                if (VAR_18 < 0)
                    return VAR_18;

                if (VAR_7->avctx->extradata_size == 1) {
                    VAR_7->avctx->width -= VAR_7->avctx->extradata[0] >> 4;
                    VAR_7->avctx->height -= VAR_7->avctx->extradata[0] & 0x0F;
                }
            }
            VAR_17 = VAR_4;
        }

        VAR_18 = FUNC_6(VAR_10, VAR_8+6, VAR_9-6);
        if (VAR_18 < 0)
            goto fail;
        FUNC_9(VAR_10, 2);

        VAR_11 = VAR_7->filter_header;
        if (VAR_14 < 8)
            VAR_13 = 5;
        VAR_7->sub_version = VAR_14;
        VAR_7->golden_frame = 0;
    } else {
        if (!VAR_7->sub_version || !VAR_7->avctx->coded_width || !VAR_7->avctx->coded_height)
            return VAR_0;

        if (VAR_19 || !VAR_7->filter_header) {
            VAR_12 = FUNC_0(VAR_8+1) - 2;
            VAR_8 += 2;
            VAR_9 -= 2;
        }
        VAR_18 = FUNC_6(VAR_10, VAR_8+1, VAR_9-1);
        if (VAR_18 < 0)
            return VAR_18;

        VAR_7->golden_frame = FUNC_8(VAR_10);
        if (VAR_7->filter_header) {
            VAR_7->deblock_filtering = FUNC_8(VAR_10);
            if (VAR_7->deblock_filtering)
                FUNC_8(VAR_10);
            if (VAR_7->sub_version > 7)
                VAR_11 = FUNC_8(VAR_10);
        }
    }

    if (VAR_11) {
        if (FUNC_8(VAR_10)) {
            VAR_7->filter_mode = 2;
            VAR_7->sample_variance_threshold = FUNC_9(VAR_10, 5) << VAR_13;
            VAR_7->max_vector_length = 2 << FUNC_9(VAR_10, 3);
        } else if (FUNC_8(VAR_10)) {
            VAR_7->filter_mode = 1;
        } else {
            VAR_7->filter_mode = 0;
        }
        if (VAR_7->sub_version > 7)
            VAR_7->filter_selection = FUNC_9(VAR_10, 4);
        else
            VAR_7->filter_selection = 16;
    }

    VAR_7->use_huffman = FUNC_8(VAR_10);

    VAR_7->parse_coeff = VAR_5;
    if (VAR_12) {
        VAR_8 += VAR_12;
        VAR_9 -= VAR_12;
        if (VAR_9 < 0) {
            VAR_18 = VAR_0;
            goto fail;
        }
        if (VAR_7->use_huffman) {
            VAR_7->parse_coeff = VAR_6;
            FUNC_7(&VAR_7->gb, VAR_8, VAR_9<<3);
        } else {
            VAR_18 = FUNC_6(&VAR_7->cc, VAR_8, VAR_9);
            if (VAR_18 < 0)
                goto fail;
            VAR_7->ccp = &VAR_7->cc;
        }
    } else {
        VAR_7->ccp = &VAR_7->c;
    }

    return VAR_17;
fail:
    if (VAR_17 == VAR_4)
        FUNC_4(VAR_7->avctx, 0, 0);
    return VAR_18;
}
