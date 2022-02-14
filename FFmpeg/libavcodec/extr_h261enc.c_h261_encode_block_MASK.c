
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_8__ {int* permutated; } ;
struct TYPE_10__ {int* block_last_index; int pb; TYPE_1__ intra_scantable; scalar_t__ mb_intra; } ;
struct TYPE_11__ {TYPE_3__ s; } ;
struct TYPE_9__ {int** table_vlc; int n; } ;
typedef TYPE_2__ RLTable ;
typedef TYPE_3__ MpegEncContext ;
typedef TYPE_4__ H261Context ;


 int FUNC_0 (int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ,int,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static void FUNC_4(H261Context *VAR_1, int16_t *VAR_2, int VAR_3)
{
    MpegEncContext *const VAR_4 = &VAR_1->s;
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    RLTable *VAR_14;

    VAR_14 = &VAR_0;
    if (VAR_4->mb_intra) {

        VAR_5 = VAR_2[0];

        if (VAR_5 > 254) {
            VAR_5 = 254;
            VAR_2[0] = 254;
        }

        else if (VAR_5 < 1) {
            VAR_5 = 1;
            VAR_2[0] = 1;
        }
        if (VAR_5 == 128)
            FUNC_2(&VAR_4->pb, 8, 0xff);
        else
            FUNC_2(&VAR_4->pb, 8, VAR_5);
        VAR_7 = 1;
    } else if ((VAR_2[0] == 1 || VAR_2[0] == -1) &&
               (VAR_4->block_last_index[VAR_3] > -1)) {

        FUNC_2(&VAR_4->pb, 2, VAR_2[0] > 0 ? 2 : 3);
        VAR_7 = 1;
    } else {
        VAR_7 = 0;
    }


    VAR_9 = VAR_4->block_last_index[VAR_3];
    VAR_10 = VAR_7 - 1;
    for (; VAR_7 <= VAR_9; VAR_7++) {
        VAR_8 = VAR_4->intra_scantable.permutated[VAR_7];
        VAR_5 = VAR_2[VAR_8];
        if (VAR_5) {
            VAR_6 = VAR_7 - VAR_10 - 1;
            VAR_11 = 0;
            VAR_12 = VAR_5;
            if (VAR_5 < 0) {
                VAR_11 = 1;
                VAR_5 = -VAR_5;
            }
            VAR_13 = FUNC_1(VAR_14, 0 ,
                                VAR_6, VAR_5);
            if (VAR_6 == 0 && VAR_5 < 16)
                VAR_13 += 1;
            FUNC_2(&VAR_4->pb, VAR_14->table_vlc[VAR_13][1], VAR_14->table_vlc[VAR_13][0]);
            if (VAR_13 == VAR_14->n) {
                FUNC_2(&VAR_4->pb, 6, VAR_6);
                FUNC_0(VAR_12 != 0);
                FUNC_0(VAR_5 <= 127);
                FUNC_3(&VAR_4->pb, 8, VAR_12);
            } else {
                FUNC_2(&VAR_4->pb, 1, VAR_11);
            }
            VAR_10 = VAR_7;
        }
    }
    if (VAR_9 > -1)
        FUNC_2(&VAR_4->pb, VAR_14->table_vlc[0][1], VAR_14->table_vlc[0][0]);
}
