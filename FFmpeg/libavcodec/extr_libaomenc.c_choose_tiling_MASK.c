
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct aom_codec_enc_cfg {int tile_width_count; int tile_height_count; int* tile_widths; int* tile_heights; } ;
struct TYPE_6__ {int tile_cols_log2; int tile_cols; int tile_rows_log2; int tile_rows; int uniform_tiles; void* superblock_size; } ;
struct TYPE_5__ {int width; int height; TYPE_2__* priv_data; } ;
typedef TYPE_1__ AVCodecContext ;
typedef TYPE_2__ AOMContext ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,char*,...) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int,int,int) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_10,
                         struct aom_codec_enc_cfg *VAR_11)
{
    AOMContext *VAR_12 = VAR_10->priv_data;
    int VAR_13, VAR_14, VAR_15, VAR_16;
    int VAR_17, VAR_18;
    int VAR_19, VAR_20;
    int VAR_21, VAR_22, VAR_23;

    if (VAR_12->tile_cols_log2 >= 0)
        VAR_12->tile_cols = 1 << VAR_12->tile_cols_log2;
    if (VAR_12->tile_rows_log2 >= 0)
        VAR_12->tile_rows = 1 << VAR_12->tile_rows_log2;

    if (VAR_12->tile_cols == 0) {
        VAR_12->tile_cols = (VAR_10->width + VAR_6 - 1) /
            VAR_6;
        if (VAR_12->tile_cols > 1) {
            FUNC_3(VAR_10, VAR_7, "Automatically using %d tile "
                   "columns to fill width.\n", VAR_12->tile_cols);
        }
    }
    FUNC_2(VAR_12->tile_cols > 0);
    if (VAR_12->tile_rows == 0) {
        int VAR_24 =
            FUNC_1((FUNC_1(VAR_10->width, 128) +
                     VAR_12->tile_cols - 1) / VAR_12->tile_cols, 128);
        VAR_12->tile_rows =
            (VAR_24 * FUNC_1(VAR_10->height, 128) +
             VAR_3 - 1) / VAR_3;
        if (VAR_12->tile_rows > 1) {
            FUNC_3(VAR_10, VAR_7, "Automatically using %d tile "
                   "rows to fill area.\n", VAR_12->tile_rows);
        }
    }
    FUNC_2(VAR_12->tile_rows > 0);

    if ((VAR_10->width + 63) / 64 < VAR_12->tile_cols ||
        (VAR_10->height + 63) / 64 < VAR_12->tile_rows) {
        FUNC_3(VAR_10, VAR_8, "Invalid tile sizing: frame not "
               "large enough to fit specified tile arrangement.\n");
        return FUNC_0(VAR_9);
    }
    if (VAR_12->tile_cols > VAR_4 ||
        VAR_12->tile_rows > VAR_5) {
        FUNC_3(VAR_10, VAR_8, "Invalid tile sizing: AV1 does "
               "not allow more than %dx%d tiles.\n",
               VAR_4, VAR_5);
        return FUNC_0(VAR_9);
    }
    if (VAR_10->width / VAR_12->tile_cols > VAR_6) {
        FUNC_3(VAR_10, VAR_8, "Invalid tile sizing: AV1 does "
               "not allow tiles of width greater than %d.\n",
               VAR_6);
        return FUNC_0(VAR_9);
    }

    VAR_12->superblock_size = VAR_2;

    if (VAR_12->tile_cols == 1 && VAR_12->tile_rows == 1) {
        FUNC_3(VAR_10, VAR_7, "Using a single tile.\n");
        return 0;
    }

    VAR_13 =
        (VAR_10->width + 127) / 128 >= VAR_12->tile_cols &&
        (VAR_10->height + 127) / 128 >= VAR_12->tile_rows;

    VAR_12->tile_cols_log2 = VAR_12->tile_cols == 1 ? 0 :
        FUNC_4(VAR_12->tile_cols - 1) + 1;
    VAR_12->tile_rows_log2 = VAR_12->tile_rows == 1 ? 0 :
        FUNC_4(VAR_12->tile_rows - 1) + 1;

    VAR_18 = FUNC_5(VAR_10->width,
                                        64, VAR_12->tile_cols_log2);
    VAR_17 = FUNC_5(VAR_10->height,
                                        64, VAR_12->tile_rows_log2);
    FUNC_3(VAR_10, VAR_7, "Uniform with 64x64 superblocks "
           "-> %dx%d tiles.\n", VAR_18, VAR_17);
    VAR_19 = VAR_18 == VAR_12->tile_cols &&
                             VAR_17 == VAR_12->tile_rows;

    if (VAR_13) {
        VAR_18 = FUNC_5(VAR_10->width,
                                            128, VAR_12->tile_cols_log2);
        VAR_17 = FUNC_5(VAR_10->height,
                                            128, VAR_12->tile_rows_log2);
        FUNC_3(VAR_10, VAR_7, "Uniform with 128x128 superblocks "
               "-> %dx%d tiles.\n", VAR_18, VAR_17);
        VAR_20 = VAR_18 == VAR_12->tile_cols &&
                                   VAR_17 == VAR_12->tile_rows;
    } else {
        FUNC_3(VAR_10, VAR_7, "128x128 superblocks not possible.\n");
        VAR_20 = 0;
    }

    VAR_12->uniform_tiles = 1;
    if (VAR_19 && VAR_20) {
        FUNC_3(VAR_10, VAR_7, "Using uniform tiling with dynamic "
               "superblocks (tile_cols_log2 = %d, tile_rows_log2 = %d).\n",
               VAR_12->tile_cols_log2, VAR_12->tile_rows_log2);
        return 0;
    }
    if (VAR_19 && !VAR_13) {
        FUNC_3(VAR_10, VAR_7, "Using uniform tiling with 64x64 "
               "superblocks (tile_cols_log2 = %d, tile_rows_log2 = %d).\n",
               VAR_12->tile_cols_log2, VAR_12->tile_rows_log2);
        VAR_12->superblock_size = VAR_1;
        return 0;
    }
    if (VAR_20) {
        FUNC_3(VAR_10, VAR_7, "Using uniform tiling with 128x128 "
               "superblocks (tile_cols_log2 = %d, tile_rows_log2 = %d).\n",
               VAR_12->tile_cols_log2, VAR_12->tile_rows_log2);
        VAR_12->superblock_size = VAR_0;
        return 0;
    }
    VAR_12->uniform_tiles = 0;

    if (VAR_13) {
        VAR_14 = 128;
        VAR_12->superblock_size = VAR_0;
    } else {
        VAR_14 = 64;
        VAR_12->superblock_size = VAR_1;
    }
    FUNC_3(VAR_10, VAR_7, "Using fixed tiling with %dx%d "
           "superblocks (tile_cols = %d, tile_rows = %d).\n",
           VAR_14, VAR_14, VAR_12->tile_cols, VAR_12->tile_rows);

    VAR_11->tile_width_count = VAR_12->tile_cols;
    VAR_11->tile_height_count = VAR_12->tile_rows;

    VAR_15 = (VAR_10->width + VAR_14 - 1) / VAR_14;
    VAR_16 = (VAR_10->height + VAR_14 - 1) / VAR_14;

    VAR_21 = VAR_15 / VAR_12->tile_cols;
    VAR_22 = VAR_15 % VAR_12->tile_cols;
    for (VAR_23 = 0; VAR_23 < VAR_12->tile_cols; VAR_23++) {
        VAR_11->tile_widths[VAR_23] = VAR_21 +
            (VAR_23 < VAR_22 / 2 ||
             VAR_23 > VAR_12->tile_cols - 1 - (VAR_22 + 1) / 2);
    }

    VAR_21 = VAR_16 / VAR_12->tile_rows;
    VAR_22 = VAR_16 % VAR_12->tile_rows;
    for (VAR_23 = 0; VAR_23 < VAR_12->tile_rows; VAR_23++) {
        VAR_11->tile_heights[VAR_23] = VAR_21 +
            (VAR_23 < VAR_22 / 2 ||
             VAR_23 > VAR_12->tile_rows - 1 - (VAR_22 + 1) / 2);
    }

    return 0;
}
