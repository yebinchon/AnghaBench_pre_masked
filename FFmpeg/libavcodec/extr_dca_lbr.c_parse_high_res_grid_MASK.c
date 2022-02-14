
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int nsubbands; int limited_rate; int** quant_levels; int ** grid_1_scf; int gb; } ;
struct TYPE_8__ {int len; int data; } ;
typedef TYPE_1__ LBRChunk ;
typedef TYPE_2__ DCALbrDecoder ;


 int VAR_0 ;
 size_t** VAR_1 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,int,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int,int,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(DCALbrDecoder *VAR_2, LBRChunk *VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6[VAR_0];
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

    if (!VAR_3->len)
        return 0;

    if (FUNC_1(&VAR_2->gb, VAR_3->data, VAR_3->len) < 0)
        return -1;


    VAR_12 = FUNC_0(&VAR_2->gb, 8);

    VAR_9 = (VAR_12 >> 3) & 7;

    VAR_10 = VAR_12 >> 6;

    VAR_11 = VAR_12 & 7;


    for (VAR_7 = 0; VAR_7 < VAR_2->nsubbands; VAR_7++) {
        int VAR_13 = VAR_7 * VAR_2->limited_rate / VAR_2->nsubbands;
        int VAR_14 = 18000 / (12 * VAR_13 / 1000 + 100 + 40 * VAR_10) + 20 * VAR_9;
        if (VAR_14 <= 95)
            VAR_6[VAR_7] = 1;
        else if (VAR_14 <= 140)
            VAR_6[VAR_7] = 2;
        else if (VAR_14 <= 180)
            VAR_6[VAR_7] = 3;
        else if (VAR_14 <= 230)
            VAR_6[VAR_7] = 4;
        else
            VAR_6[VAR_7] = 5;
    }


    for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
        VAR_2->quant_levels[VAR_4 / 2][VAR_7] = VAR_6[VAR_1[VAR_11][VAR_7]];
    for (; VAR_7 < VAR_2->nsubbands; VAR_7++)
        VAR_2->quant_levels[VAR_4 / 2][VAR_7] = VAR_6[VAR_7];


    if (FUNC_2(VAR_2, VAR_4, VAR_5, 0, 2) < 0)
        return -1;


    if (FUNC_4(VAR_2, VAR_4, VAR_5, 0, 2, 0) < 0)
        return -1;


    for (VAR_7 = 0; VAR_7 < 2; VAR_7++)
        for (VAR_8 = VAR_4; VAR_8 <= VAR_5; VAR_8++)
            if (FUNC_3(VAR_2, VAR_2->grid_1_scf[VAR_8][VAR_7]) < 0)
                return -1;

    return 0;
}
