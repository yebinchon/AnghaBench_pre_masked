
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* col_bd; int num_tile_columns; int* row_bd; int num_tile_rows; int* col_idxX; int* column_width; int* row_height; int* ctb_addr_rs_to_ts; int* ctb_addr_ts_to_rs; int* tile_id; int* min_tb_addr_zs_tab; int* tile_pos_rs; int* min_tb_addr_zs; scalar_t__ uniform_spacing_flag; } ;
struct TYPE_5__ {int ctb_width; int ctb_height; int tb_mask; int log2_ctb_size; int log2_min_tb_size; } ;
typedef TYPE_1__ HEVCSPS ;
typedef TYPE_2__ HEVCPPS ;
typedef int GetBitContext ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static inline int FUNC_2(AVCodecContext *VAR_1, GetBitContext *VAR_2,
                            HEVCPPS *VAR_3, HEVCSPS *VAR_4)
{
    int VAR_5;
    int VAR_6;
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;


    VAR_3->col_bd = FUNC_1(VAR_3->num_tile_columns + 1, sizeof(*VAR_3->col_bd));
    VAR_3->row_bd = FUNC_1(VAR_3->num_tile_rows + 1, sizeof(*VAR_3->row_bd));
    VAR_3->col_idxX = FUNC_1(VAR_4->ctb_width, sizeof(*VAR_3->col_idxX));
    if (!VAR_3->col_bd || !VAR_3->row_bd || !VAR_3->col_idxX)
        return FUNC_0(VAR_0);

    if (VAR_3->uniform_spacing_flag) {
        if (!VAR_3->column_width) {
            VAR_3->column_width = FUNC_1(VAR_3->num_tile_columns, sizeof(*VAR_3->column_width));
            VAR_3->row_height = FUNC_1(VAR_3->num_tile_rows, sizeof(*VAR_3->row_height));
        }
        if (!VAR_3->column_width || !VAR_3->row_height)
            return FUNC_0(VAR_0);

        for (VAR_7 = 0; VAR_7 < VAR_3->num_tile_columns; VAR_7++) {
            VAR_3->column_width[VAR_7] = ((VAR_7 + 1) * VAR_4->ctb_width) / VAR_3->num_tile_columns -
                                   (VAR_7 * VAR_4->ctb_width) / VAR_3->num_tile_columns;
        }

        for (VAR_7 = 0; VAR_7 < VAR_3->num_tile_rows; VAR_7++) {
            VAR_3->row_height[VAR_7] = ((VAR_7 + 1) * VAR_4->ctb_height) / VAR_3->num_tile_rows -
                                 (VAR_7 * VAR_4->ctb_height) / VAR_3->num_tile_rows;
        }
    }

    VAR_3->col_bd[0] = 0;
    for (VAR_7 = 0; VAR_7 < VAR_3->num_tile_columns; VAR_7++)
        VAR_3->col_bd[VAR_7 + 1] = VAR_3->col_bd[VAR_7] + VAR_3->column_width[VAR_7];

    VAR_3->row_bd[0] = 0;
    for (VAR_7 = 0; VAR_7 < VAR_3->num_tile_rows; VAR_7++)
        VAR_3->row_bd[VAR_7 + 1] = VAR_3->row_bd[VAR_7] + VAR_3->row_height[VAR_7];

    for (VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_4->ctb_width; VAR_7++) {
        if (VAR_7 > VAR_3->col_bd[VAR_8])
            VAR_8++;
        VAR_3->col_idxX[VAR_7] = VAR_8;
    }




    VAR_6 = VAR_4->ctb_width * VAR_4->ctb_height;

    VAR_3->ctb_addr_rs_to_ts = FUNC_1(VAR_6, sizeof(*VAR_3->ctb_addr_rs_to_ts));
    VAR_3->ctb_addr_ts_to_rs = FUNC_1(VAR_6, sizeof(*VAR_3->ctb_addr_ts_to_rs));
    VAR_3->tile_id = FUNC_1(VAR_6, sizeof(*VAR_3->tile_id));
    VAR_3->min_tb_addr_zs_tab = FUNC_1((VAR_4->tb_mask+2) * (VAR_4->tb_mask+2), sizeof(*VAR_3->min_tb_addr_zs_tab));
    if (!VAR_3->ctb_addr_rs_to_ts || !VAR_3->ctb_addr_ts_to_rs ||
        !VAR_3->tile_id || !VAR_3->min_tb_addr_zs_tab) {
        return FUNC_0(VAR_0);
    }

    for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
        int VAR_13 = VAR_11 % VAR_4->ctb_width;
        int VAR_14 = VAR_11 / VAR_4->ctb_width;
        int VAR_15 = 0;
        int VAR_16 = 0;
        int VAR_17 = 0;

        for (VAR_7 = 0; VAR_7 < VAR_3->num_tile_columns; VAR_7++) {
            if (VAR_13 < VAR_3->col_bd[VAR_7 + 1]) {
                VAR_15 = VAR_7;
                break;
            }
        }

        for (VAR_7 = 0; VAR_7 < VAR_3->num_tile_rows; VAR_7++) {
            if (VAR_14 < VAR_3->row_bd[VAR_7 + 1]) {
                VAR_16 = VAR_7;
                break;
            }
        }

        for (VAR_7 = 0; VAR_7 < VAR_15; VAR_7++)
            VAR_17 += VAR_3->row_height[VAR_16] * VAR_3->column_width[VAR_7];
        for (VAR_7 = 0; VAR_7 < VAR_16; VAR_7++)
            VAR_17 += VAR_4->ctb_width * VAR_3->row_height[VAR_7];

        VAR_17 += (VAR_14 - VAR_3->row_bd[VAR_16]) * VAR_3->column_width[VAR_15] +
               VAR_13 - VAR_3->col_bd[VAR_15];

        VAR_3->ctb_addr_rs_to_ts[VAR_11] = VAR_17;
        VAR_3->ctb_addr_ts_to_rs[VAR_17] = VAR_11;
    }

    for (VAR_8 = 0, VAR_12 = 0; VAR_8 < VAR_3->num_tile_rows; VAR_8++)
        for (VAR_7 = 0; VAR_7 < VAR_3->num_tile_columns; VAR_7++, VAR_12++)
            for (VAR_10 = VAR_3->row_bd[VAR_8]; VAR_10 < VAR_3->row_bd[VAR_8 + 1]; VAR_10++)
                for (VAR_9 = VAR_3->col_bd[VAR_7]; VAR_9 < VAR_3->col_bd[VAR_7 + 1]; VAR_9++)
                    VAR_3->tile_id[VAR_3->ctb_addr_rs_to_ts[VAR_10 * VAR_4->ctb_width + VAR_9]] = VAR_12;

    VAR_3->tile_pos_rs = FUNC_1(VAR_12, sizeof(*VAR_3->tile_pos_rs));
    if (!VAR_3->tile_pos_rs)
        return FUNC_0(VAR_0);

    for (VAR_8 = 0; VAR_8 < VAR_3->num_tile_rows; VAR_8++)
        for (VAR_7 = 0; VAR_7 < VAR_3->num_tile_columns; VAR_7++)
            VAR_3->tile_pos_rs[VAR_8 * VAR_3->num_tile_columns + VAR_7] =
                VAR_3->row_bd[VAR_8] * VAR_4->ctb_width + VAR_3->col_bd[VAR_7];

    VAR_5 = VAR_4->log2_ctb_size - VAR_4->log2_min_tb_size;
    VAR_3->min_tb_addr_zs = &VAR_3->min_tb_addr_zs_tab[1*(VAR_4->tb_mask+2)+1];
    for (VAR_10 = 0; VAR_10 < VAR_4->tb_mask+2; VAR_10++) {
        VAR_3->min_tb_addr_zs_tab[VAR_10*(VAR_4->tb_mask+2)] = -1;
        VAR_3->min_tb_addr_zs_tab[VAR_10] = -1;
    }
    for (VAR_10 = 0; VAR_10 < VAR_4->tb_mask+1; VAR_10++) {
        for (VAR_9 = 0; VAR_9 < VAR_4->tb_mask+1; VAR_9++) {
            int VAR_18 = VAR_9 >> VAR_5;
            int VAR_19 = VAR_10 >> VAR_5;
            int VAR_20 = VAR_4->ctb_width * VAR_19 + VAR_18;
            int VAR_21 = VAR_3->ctb_addr_rs_to_ts[VAR_20] << (VAR_5 * 2);
            for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
                int VAR_22 = 1 << VAR_7;
                VAR_21 += (VAR_22 & VAR_9 ? VAR_22 * VAR_22 : 0) + (VAR_22 & VAR_10 ? 2 * VAR_22 * VAR_22 : 0);
            }
            VAR_3->min_tb_addr_zs[VAR_10 * (VAR_4->tb_mask+2) + VAR_9] = VAR_21;
        }
    }

    return 0;
}
