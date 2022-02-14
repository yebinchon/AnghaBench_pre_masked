
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int bits; int table; } ;
struct TYPE_8__ {TYPE_1__* gain_data; } ;
struct TYPE_7__ {TYPE_3__* channels; } ;
struct TYPE_6__ {int num_points; } ;
typedef int GetBitContext ;
typedef TYPE_2__ Atrac3pChanUnitCtx ;
typedef TYPE_3__ Atrac3pChanParams ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(GetBitContext *VAR_2, Atrac3pChanUnitCtx *VAR_3,
                                int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9;
    Atrac3pChanParams *VAR_10 = &VAR_3->channels[VAR_4];
    Atrac3pChanParams *VAR_11 = &VAR_3->channels[0];

    switch (FUNC_0(VAR_2, 2)) {
    case 0:
        for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
            VAR_10->gain_data[VAR_6].num_points = FUNC_0(VAR_2, 3);
        break;
    case 1:
        for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
            VAR_10->gain_data[VAR_6].num_points =
                FUNC_2(VAR_2, VAR_1[0].table,
                         VAR_1[0].bits, 1);
        break;
    case 2:
        if (VAR_4) {
            for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
                VAR_7 = FUNC_2(VAR_2, VAR_1[1].table,
                                 VAR_1[1].bits, 1);
                VAR_10->gain_data[VAR_6].num_points =
                    (VAR_11->gain_data[VAR_6].num_points + VAR_7) & 7;
            }
        } else {
            VAR_10->gain_data[0].num_points =
                FUNC_2(VAR_2, VAR_1[0].table,
                         VAR_1[0].bits, 1);

            for (VAR_6 = 1; VAR_6 < VAR_5; VAR_6++) {
                VAR_7 = FUNC_2(VAR_2, VAR_1[1].table,
                                 VAR_1[1].bits, 1);
                VAR_10->gain_data[VAR_6].num_points =
                    (VAR_10->gain_data[VAR_6 - 1].num_points + VAR_7) & 7;
            }
        }
        break;
    case 3:
        if (VAR_4) {
            for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
                VAR_10->gain_data[VAR_6].num_points =
                    VAR_11->gain_data[VAR_6].num_points;
        } else {
            VAR_8 = FUNC_0(VAR_2, 2);
            VAR_9 = FUNC_0(VAR_2, 3);

            for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
                VAR_10->gain_data[VAR_6].num_points = VAR_9 + FUNC_1(VAR_2, VAR_8);
                if (VAR_10->gain_data[VAR_6].num_points > 7)
                    return VAR_0;
            }
        }
    }

    return 0;
}
