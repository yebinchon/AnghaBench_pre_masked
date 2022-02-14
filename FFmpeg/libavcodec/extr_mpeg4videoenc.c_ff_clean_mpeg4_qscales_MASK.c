
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_5__ {int* qscale_table; } ;
struct TYPE_6__ {scalar_t__ pict_type; int mb_num; int* mb_index2xy; int* mb_type; TYPE_1__ current_picture; } ;
typedef TYPE_2__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(MpegEncContext *VAR_3)
{
    int VAR_4;
    int8_t *const VAR_5 = VAR_3->current_picture.qscale_table;

    FUNC_0(VAR_3);

    if (VAR_3->pict_type == VAR_0) {
        int VAR_6 = 0;



        for (VAR_4 = 0; VAR_4 < VAR_3->mb_num; VAR_4++) {
            int VAR_7 = VAR_3->mb_index2xy[VAR_4];
            VAR_6 += VAR_5[VAR_7] & 1;
        }

        if (2 * VAR_6 > VAR_3->mb_num)
            VAR_6 = 1;
        else
            VAR_6 = 0;

        for (VAR_4 = 0; VAR_4 < VAR_3->mb_num; VAR_4++) {
            int VAR_8 = VAR_3->mb_index2xy[VAR_4];
            if ((VAR_5[VAR_8] & 1) != VAR_6)
                VAR_5[VAR_8]++;
            if (VAR_5[VAR_8] > 31)
                VAR_5[VAR_8] = 31;
        }

        for (VAR_4 = 1; VAR_4 < VAR_3->mb_num; VAR_4++) {
            int VAR_9 = VAR_3->mb_index2xy[VAR_4];
            if (VAR_5[VAR_9] != VAR_5[VAR_3->mb_index2xy[VAR_4 - 1]] &&
                (VAR_3->mb_type[VAR_9] & VAR_2)) {
                VAR_3->mb_type[VAR_9] |= VAR_1;
            }
        }
    }
}
