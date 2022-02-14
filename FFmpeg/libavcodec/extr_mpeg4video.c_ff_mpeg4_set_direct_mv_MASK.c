
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int* mb_type; int** ref_index; } ;
struct TYPE_8__ {int mb_x; int mb_y; int mb_stride; int** field_select; int pp_field_time; int pb_field_time; int*** mv; int**** p_field_mv_table; void* mv_type; int quarter_sample; TYPE_1__* avctx; scalar_t__ top_field_first; TYPE_2__ next_picture; } ;
struct TYPE_6__ {int workaround_bugs; } ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_2 (TYPE_3__*,int,int,int) ;

int FUNC_3(MpegEncContext *VAR_10, int VAR_11, int VAR_12)
{
    const int VAR_13 = VAR_10->mb_x + VAR_10->mb_y * VAR_10->mb_stride;
    const int VAR_14 = VAR_10->next_picture.mb_type[VAR_13];
    uint16_t VAR_15;
    uint16_t VAR_16;
    int VAR_17;




    if (FUNC_0(VAR_14)) {
        VAR_10->mv_type = VAR_8;
        for (VAR_17 = 0; VAR_17 < 4; VAR_17++)
            FUNC_2(VAR_10, VAR_11, VAR_12, VAR_17);
        return VAR_4 | VAR_3 | VAR_6;
    } else if (FUNC_1(VAR_14)) {
        VAR_10->mv_type = VAR_9;
        for (VAR_17 = 0; VAR_17 < 2; VAR_17++) {
            int VAR_18 = VAR_10->next_picture.ref_index[0][4 * VAR_13 + 2 * VAR_17];
            VAR_10->field_select[0][VAR_17] = VAR_18;
            VAR_10->field_select[1][VAR_17] = VAR_17;
            if (VAR_10->top_field_first) {
                VAR_15 = VAR_10->pp_field_time - VAR_18 + VAR_17;
                VAR_16 = VAR_10->pb_field_time - VAR_18 + VAR_17;
            } else {
                VAR_15 = VAR_10->pp_field_time + VAR_18 - VAR_17;
                VAR_16 = VAR_10->pb_field_time + VAR_18 - VAR_17;
            }
            VAR_10->mv[0][VAR_17][0] = VAR_10->p_field_mv_table[VAR_17][0][VAR_13][0] *
                             VAR_16 / VAR_15 + VAR_11;
            VAR_10->mv[0][VAR_17][1] = VAR_10->p_field_mv_table[VAR_17][0][VAR_13][1] *
                             VAR_16 / VAR_15 + VAR_12;
            VAR_10->mv[1][VAR_17][0] = VAR_11 ? VAR_10->mv[0][VAR_17][0] -
                                  VAR_10->p_field_mv_table[VAR_17][0][VAR_13][0]
                                : VAR_10->p_field_mv_table[VAR_17][0][VAR_13][0] *
                                  (VAR_16 - VAR_15) / VAR_15;
            VAR_10->mv[1][VAR_17][1] = VAR_12 ? VAR_10->mv[0][VAR_17][1] -
                                  VAR_10->p_field_mv_table[VAR_17][0][VAR_13][1]
                                : VAR_10->p_field_mv_table[VAR_17][0][VAR_13][1] *
                                  (VAR_16 - VAR_15) / VAR_15;
        }
        return VAR_4 | VAR_2 |
               VAR_6 | VAR_5;
    } else {
        FUNC_2(VAR_10, VAR_11, VAR_12, 0);
        VAR_10->mv[0][1][0] =
        VAR_10->mv[0][2][0] =
        VAR_10->mv[0][3][0] = VAR_10->mv[0][0][0];
        VAR_10->mv[0][1][1] =
        VAR_10->mv[0][2][1] =
        VAR_10->mv[0][3][1] = VAR_10->mv[0][0][1];
        VAR_10->mv[1][1][0] =
        VAR_10->mv[1][2][0] =
        VAR_10->mv[1][3][0] = VAR_10->mv[1][0][0];
        VAR_10->mv[1][1][1] =
        VAR_10->mv[1][2][1] =
        VAR_10->mv[1][3][1] = VAR_10->mv[1][0][1];
        if ((VAR_10->avctx->workaround_bugs & VAR_0) ||
            !VAR_10->quarter_sample)
            VAR_10->mv_type = VAR_7;
        else
            VAR_10->mv_type = VAR_8;

        return VAR_4 | VAR_1 | VAR_6;
    }
}
