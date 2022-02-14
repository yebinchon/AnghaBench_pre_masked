
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32_t ;
typedef int int16_t ;
struct TYPE_9__ {int const h_edge_pos; int const v_edge_pos; int mb_x; int mb_y; int b_stride; int frame_num_offset; int prev_frame_num_offset; TYPE_1__* cur_pic; int ** mv_cache; int avctx; int gb_slice; TYPE_2__* next_pic; } ;
struct TYPE_8__ {int*** motion_val; } ;
struct TYPE_7__ {int ** motion_val; } ;
typedef TYPE_3__ SVQ3Context ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int const,int const) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,int const,int const,int,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int) ;
 int* VAR_4 ;
 int FUNC_6 (TYPE_3__*,int,int,int const,int const,int,int,int,int,int,int) ;
 int FUNC_7 (TYPE_3__*,int,int const,int,int,int*,int*) ;

__attribute__((used)) static inline int FUNC_8(SVQ3Context *VAR_5, int VAR_6, int VAR_7,
                              int VAR_8, int VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    const int VAR_19 = ((VAR_6 & 5) == 4) ? 4 : 16 >> (VAR_6 & 1);
    const int VAR_20 = 16 >> ((unsigned)(VAR_6 + 1) / 3);
    const int VAR_21 = (VAR_7 == VAR_2) ? -16 * 6 : 0;
    const int VAR_22 = 6 * (VAR_5->h_edge_pos - VAR_19) - VAR_21;
    const int VAR_23 = 6 * (VAR_5->v_edge_pos - VAR_20) - VAR_21;

    for (VAR_10 = 0; VAR_10 < 16; VAR_10 += VAR_20)
        for (VAR_11 = 0; VAR_11 < 16; VAR_11 += VAR_19) {
            const int VAR_24 = (4 * VAR_5->mb_x + (VAR_11 >> 2)) +
                             (4 * VAR_5->mb_y + (VAR_10 >> 2)) * VAR_5->b_stride;
            int VAR_25;
            VAR_17 = 16 * VAR_5->mb_x + VAR_11;
            VAR_18 = 16 * VAR_5->mb_y + VAR_10;
            VAR_12 = (VAR_11 >> 2 & 1) + (VAR_10 >> 1 & 2) +
                (VAR_11 >> 1 & 4) + (VAR_10 & 8);

            if (VAR_7 != VAR_2) {
                FUNC_7(VAR_5, VAR_12, VAR_19 >> 2, VAR_8, 1, &VAR_13, &VAR_14);
            } else {
                VAR_13 = VAR_5->next_pic->motion_val[0][VAR_24][0] * 2;
                VAR_14 = VAR_5->next_pic->motion_val[0][VAR_24][1] * 2;

                if (VAR_8 == 0) {
                    VAR_13 = (VAR_13 * VAR_5->frame_num_offset /
                         VAR_5->prev_frame_num_offset + 1) >> 1;
                    VAR_14 = (VAR_14 * VAR_5->frame_num_offset /
                         VAR_5->prev_frame_num_offset + 1) >> 1;
                } else {
                    VAR_13 = (VAR_13 * (VAR_5->frame_num_offset - VAR_5->prev_frame_num_offset) /
                         VAR_5->prev_frame_num_offset + 1) >> 1;
                    VAR_14 = (VAR_14 * (VAR_5->frame_num_offset - VAR_5->prev_frame_num_offset) /
                         VAR_5->prev_frame_num_offset + 1) >> 1;
                }
            }


            VAR_13 = FUNC_1(VAR_13, VAR_21 - 6 * VAR_17, VAR_22 - 6 * VAR_17);
            VAR_14 = FUNC_1(VAR_14, VAR_21 - 6 * VAR_18, VAR_23 - 6 * VAR_18);


            if (VAR_7 == VAR_2) {
                VAR_15 = VAR_16 = 0;
            } else {
                VAR_16 = FUNC_4(&VAR_5->gb_slice);
                VAR_15 = FUNC_4(&VAR_5->gb_slice);

                if (VAR_15 != (int16_t)VAR_15 || VAR_16 != (int16_t)VAR_16) {
                    FUNC_2(VAR_5->avctx, VAR_0, "invalid MV vlc\n");
                    return -1;
                }
            }


            if (VAR_7 == VAR_3) {
                int VAR_26, VAR_27;
                VAR_13 = ((VAR_13 + 1) >> 1) + VAR_15;
                VAR_14 = ((VAR_14 + 1) >> 1) + VAR_16;
                VAR_26 = (unsigned)(VAR_13 + 0x30000) / 3 - 0x10000;
                VAR_27 = (unsigned)(VAR_14 + 0x30000) / 3 - 0x10000;
                VAR_25 = (VAR_13 - 3 * VAR_26) + 4 * (VAR_14 - 3 * VAR_27);

                FUNC_6(VAR_5, VAR_17, VAR_18, VAR_19, VAR_20,
                                 VAR_26, VAR_27, VAR_25, 1, VAR_8, VAR_9);
                VAR_13 += VAR_13;
                VAR_14 += VAR_14;
            } else if (VAR_7 == VAR_1 || VAR_7 == VAR_2) {
                VAR_13 = (unsigned)(VAR_13 + 1 + 0x30000) / 3 + VAR_15 - 0x10000;
                VAR_14 = (unsigned)(VAR_14 + 1 + 0x30000) / 3 + VAR_16 - 0x10000;
                VAR_25 = (VAR_13 & 1) + 2 * (VAR_14 & 1);

                FUNC_6(VAR_5, VAR_17, VAR_18, VAR_19, VAR_20,
                                 VAR_13 >> 1, VAR_14 >> 1, VAR_25, 0, VAR_8, VAR_9);
                VAR_13 *= 3;
                VAR_14 *= 3;
            } else {
                VAR_13 = (unsigned)(VAR_13 + 3 + 0x60000) / 6 + VAR_15 - 0x10000;
                VAR_14 = (unsigned)(VAR_14 + 3 + 0x60000) / 6 + VAR_16 - 0x10000;

                FUNC_6(VAR_5, VAR_17, VAR_18, VAR_19, VAR_20,
                                 VAR_13, VAR_14, 0, 0, VAR_8, VAR_9);
                VAR_13 *= 6;
                VAR_14 *= 6;
            }


            if (VAR_7 != VAR_2) {
                int32_t VAR_28 = FUNC_5(VAR_13, VAR_14);

                if (VAR_20 == 8 && VAR_10 < 8) {
                    FUNC_0(VAR_5->mv_cache[VAR_8][VAR_4[VAR_12] + 1 * 8], VAR_28);

                    if (VAR_19 == 8 && VAR_11 < 8)
                        FUNC_0(VAR_5->mv_cache[VAR_8][VAR_4[VAR_12] + 1 + 1 * 8], VAR_28);
                }
                if (VAR_19 == 8 && VAR_11 < 8)
                    FUNC_0(VAR_5->mv_cache[VAR_8][VAR_4[VAR_12] + 1], VAR_28);
                if (VAR_19 == 4 || VAR_20 == 4)
                    FUNC_0(VAR_5->mv_cache[VAR_8][VAR_4[VAR_12]], VAR_28);
            }


            FUNC_3(VAR_5->cur_pic->motion_val[VAR_8][VAR_24],
                           VAR_19 >> 2, VAR_20 >> 2, VAR_5->b_stride,
                           FUNC_5(VAR_13, VAR_14), 4);
        }

    return 0;
}
