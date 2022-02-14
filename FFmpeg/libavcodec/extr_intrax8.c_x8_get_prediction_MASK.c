
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int edges; int mb_x; int mb_y; int mb_width; int est_run; int* prediction_table; int orient; int quant; } ;
typedef TYPE_1__ IntraX8Context ;


 void* FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(IntraX8Context *const VAR_0)
{
    int VAR_1, VAR_2, VAR_3, VAR_4;

    VAR_0->edges = 1 * !VAR_0->mb_x;
    VAR_0->edges |= 2 * !VAR_0->mb_y;
    VAR_0->edges |= 4 * (VAR_0->mb_x >= (2 * VAR_0->mb_width - 1));

    switch (VAR_0->edges & 3) {
    case 0:
        break;
    case 1:

        VAR_0->est_run = VAR_0->prediction_table[!(VAR_0->mb_y & 1)] >> 2;
        VAR_0->orient = 1;
        return;
    case 2:

        VAR_0->est_run = VAR_0->prediction_table[2 * VAR_0->mb_x - 2] >> 2;
        VAR_0->orient = 2;
        return;
    case 3:
        VAR_0->est_run = 16;
        VAR_0->orient = 0;
        return;
    }

    VAR_2 = VAR_0->prediction_table[2 * VAR_0->mb_x + !(VAR_0->mb_y & 1)];
    VAR_1 = VAR_0->prediction_table[2 * VAR_0->mb_x - 2 + (VAR_0->mb_y & 1)];
    VAR_3 = VAR_0->prediction_table[2 * VAR_0->mb_x - 2 + !(VAR_0->mb_y & 1)];

    VAR_0->est_run = FUNC_0(VAR_2, VAR_1);



    if ((VAR_0->mb_x & VAR_0->mb_y) != 0)
        VAR_0->est_run = FUNC_0(VAR_3, VAR_0->est_run);
    VAR_0->est_run >>= 2;

    VAR_1 &= 3;
    VAR_2 &= 3;
    VAR_3 &= 3;

    VAR_4 = (0xFFEAF4C4 >> (2 * VAR_2 + 8 * VAR_1)) & 3;
    if (VAR_4 != 3)
        VAR_0->orient = VAR_4;
    else
        VAR_0->orient = (0xFFEAD8 >> (2 * VAR_3 + 8 * (VAR_0->quant > 12))) & 3;
}
