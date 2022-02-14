
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_16__ {scalar_t__ codec_id; TYPE_2__* priv_data; } ;
struct TYPE_15__ {int* data; int size; } ;
struct TYPE_14__ {int is_major_sync_unit; unsigned int num_substreams; unsigned int max_decoded_substream; scalar_t__ params_valid; TYPE_4__* avctx; int filter_changed; scalar_t__ matrix_changed; TYPE_1__* substream; scalar_t__ major_sync_header_size; } ;
struct TYPE_13__ {int restart_seen; scalar_t__ blockpos; } ;
typedef TYPE_1__ SubStream ;
typedef TYPE_2__ MLPDecodeContext ;
typedef int GetBitContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_4__*,int ,char*,...) ;
 int FUNC_3 (int const*,int) ;
 int FUNC_4 (int const*,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int const*,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (TYPE_2__*,unsigned int,void*,int*) ;
 int FUNC_11 (TYPE_2__*,int *,unsigned int) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int *,unsigned int) ;
 scalar_t__ FUNC_13 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_14 (TYPE_2__*,int *,int const*,unsigned int) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(AVCodecContext *VAR_7, void* VAR_8,
                            int *VAR_9, AVPacket *VAR_10)
{
    const uint8_t *VAR_11 = VAR_10->data;
    int VAR_12 = VAR_10->size;
    MLPDecodeContext *VAR_13 = VAR_7->priv_data;
    GetBitContext VAR_14;
    unsigned int VAR_15, VAR_16;
    unsigned int VAR_17;
    unsigned int VAR_18 = 4;
    unsigned int VAR_19 = 0;
    uint8_t VAR_20[VAR_6];
    uint16_t VAR_21[VAR_6];
    uint8_t VAR_22;
    int VAR_23;

    if (VAR_12 < 4)
        return VAR_0;

    VAR_15 = (FUNC_0(VAR_11) & 0xfff) * 2;

    if (VAR_15 < 4 || VAR_15 > VAR_12)
        return VAR_0;

    FUNC_8(&VAR_14, (VAR_11 + 4), (VAR_15 - 4) * 8);

    VAR_13->is_major_sync_unit = 0;
    if (FUNC_15(&VAR_14, 31) == (0xf8726fba >> 1)) {
        if (FUNC_13(VAR_13, &VAR_14) < 0)
            goto error;
        VAR_13->is_major_sync_unit = 1;
        VAR_18 += VAR_13->major_sync_header_size;
    }

    if (!VAR_13->params_valid) {
        FUNC_2(VAR_13->avctx, VAR_5,
               "Stream parameters not seen; skipping frame.\n");
        *VAR_9 = 0;
        return VAR_15;
    }

    VAR_17 = 0;

    for (VAR_16 = 0; VAR_16 < VAR_13->num_substreams; VAR_16++) {
        int VAR_24, VAR_25, VAR_26, VAR_27;

        VAR_24 = FUNC_6(&VAR_14);
        VAR_27 = FUNC_6(&VAR_14);
        VAR_25 = FUNC_6(&VAR_14);
        FUNC_17(&VAR_14);

        VAR_26 = FUNC_5(&VAR_14, 12) * 2;

        VAR_19 += 2;

        if (VAR_24) {
            if (VAR_13->avctx->codec_id == VAR_1) {
                FUNC_2(VAR_13->avctx, VAR_3, "There must be no extraword for MLP.\n");
                goto error;
            }
            FUNC_16(&VAR_14, 16);
            VAR_19 += 2;
        }

        if (VAR_15 < VAR_18 + VAR_19) {
            FUNC_2(VAR_13->avctx, VAR_3, "Insufficient data for headers\n");
            goto error;
        }

        if (!(VAR_27 ^ VAR_13->is_major_sync_unit)) {
            FUNC_2(VAR_13->avctx, VAR_3, "Invalid nonrestart_substr.\n");
            goto error;
        }

        if (VAR_26 + VAR_18 + VAR_19 > VAR_15) {
            FUNC_2(VAR_13->avctx, VAR_3,
                   "Indicated length of substream %d data goes off end of "
                   "packet.\n", VAR_16);
            VAR_26 = VAR_15 - VAR_18 - VAR_19;
        }

        if (VAR_26 < VAR_17) {
            FUNC_2(VAR_7, VAR_3,
                   "Indicated end offset of substream %d data "
                   "is smaller than calculated start offset.\n",
                   VAR_16);
            goto error;
        }

        if (VAR_16 > VAR_13->max_decoded_substream)
            continue;

        VAR_20[VAR_16] = VAR_25;
        VAR_21[VAR_16] = VAR_26 - VAR_17;
        VAR_17 = VAR_26;
    }

    VAR_22 = FUNC_3(VAR_11, 4);
    VAR_22 ^= FUNC_3(VAR_11 + VAR_18, VAR_19);

    if ((((VAR_22 >> 4) ^ VAR_22) & 0xF) != 0xF) {
        FUNC_2(VAR_7, VAR_3, "Parity check failed.\n");
        goto error;
    }

    VAR_11 += VAR_18 + VAR_19;

    for (VAR_16 = 0; VAR_16 <= VAR_13->max_decoded_substream; VAR_16++) {
        SubStream *VAR_28 = &VAR_13->substream[VAR_16];
        FUNC_8(&VAR_14, VAR_11, VAR_21[VAR_16] * 8);

        VAR_13->matrix_changed = 0;
        FUNC_9(VAR_13->filter_changed, 0, sizeof(VAR_13->filter_changed));

        VAR_28->blockpos = 0;
        do {
            if (FUNC_6(&VAR_14)) {
                if (FUNC_6(&VAR_14)) {

                    if (FUNC_14(VAR_13, &VAR_14, VAR_11, VAR_16) < 0)
                        goto next_substr;
                    VAR_28->restart_seen = 1;
                }

                if (!VAR_28->restart_seen)
                    goto next_substr;
                if (FUNC_12(VAR_13, &VAR_14, VAR_16) < 0)
                    goto next_substr;
            }

            if (!VAR_28->restart_seen)
                goto next_substr;

            if ((VAR_23 = FUNC_11(VAR_13, &VAR_14, VAR_16)) < 0)
                return VAR_23;

            if (FUNC_7(&VAR_14) >= VAR_21[VAR_16] * 8)
                goto substream_length_mismatch;

        } while (!FUNC_6(&VAR_14));

        FUNC_16(&VAR_14, (-FUNC_7(&VAR_14)) & 15);

        if (VAR_21[VAR_16] * 8 - FUNC_7(&VAR_14) >= 32) {
            int VAR_29;

            if (FUNC_5(&VAR_14, 16) != 0xD234)
                return VAR_0;

            VAR_29 = FUNC_5(&VAR_14, 16);
            if (VAR_13->avctx->codec_id == VAR_2 && VAR_29 & 0x2000)
                VAR_28->blockpos -= FUNC_1(VAR_29 & 0x1FFF, VAR_28->blockpos);
            else if (VAR_13->avctx->codec_id == VAR_1 && VAR_29 != 0xD234)
                return VAR_0;

            if (VAR_16 == VAR_13->max_decoded_substream)
                FUNC_2(VAR_13->avctx, VAR_4, "End of stream indicated.\n");
        }

        if (VAR_20[VAR_16]) {
            uint8_t VAR_30, VAR_31;

            if (VAR_21[VAR_16] * 8 - FUNC_7(&VAR_14) != 16)
                goto substream_length_mismatch;

            VAR_30 = FUNC_3(VAR_11, VAR_21[VAR_16] - 2);
            VAR_31 = FUNC_4 (VAR_11, VAR_21[VAR_16] - 2);

            if ((FUNC_5(&VAR_14, 8) ^ VAR_30) != 0xa9 )
                FUNC_2(VAR_13->avctx, VAR_3, "Substream %d parity check failed.\n", VAR_16);
            if ( FUNC_5(&VAR_14, 8) != VAR_31)
                FUNC_2(VAR_13->avctx, VAR_3, "Substream %d checksum failed.\n" , VAR_16);
        }

        if (VAR_21[VAR_16] * 8 != FUNC_7(&VAR_14))
            goto substream_length_mismatch;

next_substr:
        if (!VAR_28->restart_seen)
            FUNC_2(VAR_13->avctx, VAR_3,
                   "No restart header present in substream %d.\n", VAR_16);

        VAR_11 += VAR_21[VAR_16];
    }

    if ((VAR_23 = FUNC_10(VAR_13, VAR_13->max_decoded_substream, VAR_8, VAR_9)) < 0)
        return VAR_23;

    return VAR_15;

substream_length_mismatch:
    FUNC_2(VAR_13->avctx, VAR_3, "substream %d length mismatch\n", VAR_16);
    return VAR_0;

error:
    VAR_13->params_valid = 0;
    return VAR_0;
}
