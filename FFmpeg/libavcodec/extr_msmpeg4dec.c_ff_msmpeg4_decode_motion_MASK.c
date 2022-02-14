
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int table; } ;
struct TYPE_8__ {int n; int* table_mvx; int* table_mvy; TYPE_1__ vlc; } ;
struct TYPE_7__ {size_t mv_table_index; int gb; int mb_y; int mb_x; int avctx; } ;
typedef TYPE_2__ MpegEncContext ;
typedef TYPE_3__ MVTable ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int ,int ) ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ,int) ;

int FUNC_3(MpegEncContext * VAR_3,
                                 int *VAR_4, int *VAR_5)
{
    MVTable *VAR_6;
    int VAR_7, VAR_8, VAR_9;

    VAR_6 = &VAR_2[VAR_3->mv_table_index];

    VAR_7 = FUNC_2(&VAR_3->gb, VAR_6->vlc.table, VAR_1, 2);
    if (VAR_7 < 0){
        FUNC_0(VAR_3->avctx, VAR_0, "illegal MV code at %d %d\n", VAR_3->mb_x, VAR_3->mb_y);
        return -1;
    }
    if (VAR_7 == VAR_6->n) {
        VAR_8 = FUNC_1(&VAR_3->gb, 6);
        VAR_9 = FUNC_1(&VAR_3->gb, 6);
    } else {
        VAR_8 = VAR_6->table_mvx[VAR_7];
        VAR_9 = VAR_6->table_mvy[VAR_7];
    }

    VAR_8 += *VAR_4 - 32;
    VAR_9 += *VAR_5 - 32;

    if (VAR_8 <= -64)
        VAR_8 += 64;
    else if (VAR_8 >= 64)
        VAR_8 -= 64;

    if (VAR_9 <= -64)
        VAR_9 += 64;
    else if (VAR_9 >= 64)
        VAR_9 -= 64;
    *VAR_4 = VAR_8;
    *VAR_5 = VAR_9;
    return 0;
}
