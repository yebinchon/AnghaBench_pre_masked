
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* table_mv_index; int* table_mv_bits; int* table_mv_code; int n; } ;
struct TYPE_5__ {size_t mv_table_index; int pb; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ MVTable ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,int,int) ;

void FUNC_1(MpegEncContext * VAR_1,
                                  int VAR_2, int VAR_3)
{
    int VAR_4;
    MVTable *VAR_5;




    if (VAR_2 <= -64)
        VAR_2 += 64;
    else if (VAR_2 >= 64)
        VAR_2 -= 64;
    if (VAR_3 <= -64)
        VAR_3 += 64;
    else if (VAR_3 >= 64)
        VAR_3 -= 64;

    VAR_2 += 32;
    VAR_3 += 32;
    VAR_5 = &VAR_0[VAR_1->mv_table_index];

    VAR_4 = VAR_5->table_mv_index[(VAR_2 << 6) | VAR_3];
    FUNC_0(&VAR_1->pb,
             VAR_5->table_mv_bits[VAR_4],
             VAR_5->table_mv_code[VAR_4]);
    if (VAR_4 == VAR_5->n) {

        FUNC_0(&VAR_1->pb, 6, VAR_2);
        FUNC_0(&VAR_1->pb, 6, VAR_3);
    }
}
