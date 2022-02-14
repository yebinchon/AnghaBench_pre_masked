
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int bits; int table; } ;
struct TYPE_11__ {int num_points; int* lev_code; } ;
struct TYPE_10__ {TYPE_3__* gain_data; } ;
struct TYPE_9__ {TYPE_2__* channels; } ;
typedef int GetBitContext ;
typedef TYPE_1__ Atrac3pChanUnitCtx ;
typedef TYPE_2__ Atrac3pChanParams ;


 int VAR_0 ;
 TYPE_7__* VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(GetBitContext *VAR_2, Atrac3pChanUnitCtx *VAR_3,
                               int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    Atrac3pChanParams *VAR_12 = &VAR_3->channels[VAR_4];
    Atrac3pChanParams *VAR_13 = &VAR_3->channels[0];

    switch (FUNC_2(VAR_2, 2)) {
    case 0:
        for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
            for (VAR_7 = 0; VAR_7 < VAR_12->gain_data[VAR_6].num_points; VAR_7++)
                VAR_12->gain_data[VAR_6].lev_code[VAR_7] = FUNC_2(VAR_2, 4);
        break;
    case 1:
        if (VAR_4) {
            for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
                for (VAR_7 = 0; VAR_7 < VAR_12->gain_data[VAR_6].num_points; VAR_7++) {
                    VAR_8 = FUNC_5(VAR_2, VAR_1[5].table,
                                     VAR_1[5].bits, 1);
                    VAR_11 = (VAR_7 >= VAR_13->gain_data[VAR_6].num_points)
                           ? 7 : VAR_13->gain_data[VAR_6].lev_code[VAR_7];
                    VAR_12->gain_data[VAR_6].lev_code[VAR_7] = (VAR_11 + VAR_8) & 0xF;
                }
        } else {
            for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
                FUNC_0(VAR_2, VAR_3, &VAR_12->gain_data[VAR_6]);
        }
        break;
    case 2:
        if (VAR_4) {
            for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
                if (VAR_12->gain_data[VAR_6].num_points > 0) {
                    if (FUNC_3(VAR_2))
                        FUNC_0(VAR_2, VAR_3, &VAR_12->gain_data[VAR_6]);
                    else
                        FUNC_1(&VAR_12->gain_data[VAR_6],
                                           &VAR_13->gain_data[VAR_6]);
                }
        } else {
            if (VAR_12->gain_data[0].num_points > 0)
                FUNC_0(VAR_2, VAR_3, &VAR_12->gain_data[0]);

            for (VAR_6 = 1; VAR_6 < VAR_5; VAR_6++)
                for (VAR_7 = 0; VAR_7 < VAR_12->gain_data[VAR_6].num_points; VAR_7++) {
                    VAR_8 = FUNC_5(VAR_2, VAR_1[4].table,
                                     VAR_1[4].bits, 1);
                    VAR_11 = (VAR_7 >= VAR_12->gain_data[VAR_6 - 1].num_points)
                           ? 7 : VAR_12->gain_data[VAR_6 - 1].lev_code[VAR_7];
                    VAR_12->gain_data[VAR_6].lev_code[VAR_7] = (VAR_11 + VAR_8) & 0xF;
                }
        }
        break;
    case 3:
        if (VAR_4) {
            for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
                FUNC_1(&VAR_12->gain_data[VAR_6],
                                   &VAR_13->gain_data[VAR_6]);
        } else {
            VAR_9 = FUNC_2(VAR_2, 2);
            VAR_10 = FUNC_2(VAR_2, 4);

            for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
                for (VAR_7 = 0; VAR_7 < VAR_12->gain_data[VAR_6].num_points; VAR_7++) {
                    VAR_12->gain_data[VAR_6].lev_code[VAR_7] = VAR_10 + FUNC_4(VAR_2, VAR_9);
                    if (VAR_12->gain_data[VAR_6].lev_code[VAR_7] > 15)
                        return VAR_0;
                }
        }
        break;
    }

    return 0;
}
