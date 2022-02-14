
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int member_0; int member_1; int member_2; } ;
struct TYPE_5__ {int member_0; int member_1; int member_2; } ;
struct TYPE_4__ {int member_0; int member_1; int member_2; } ;



void FUNC_0(
    float *VAR_0, float VAR_1, float VAR_2, float VAR_3, float VAR_4, int VAR_5, char VAR_6)
{
    static const float VAR_7[8][6][3] = {
        {{0, -2, -1}, {0, +2, +1}, {0, +2, -1},
         {0, -2, -1}, {0, -2, +1}, {0, +2, +1}},
        {{0, -2, -1}, {0, +2, +1}, {0, -2, +1},
         {0, -2, -1}, {0, +2, -1}, {0, +2, +1}},
        {{-1, -2, 0}, {+1, +2, 0}, {+1, -2, 0},
         {-1, -2, 0}, {-1, +2, 0}, {+1, +2, 0}},
        {{-1, -2, 0}, {+1, -2, 0}, {+1, +2, 0},
         {-1, -2, 0}, {+1, +2, 0}, {-1, +2, 0}},
        {{-1, 0, +2}, {+1, 0, +2}, {+1, 0, -2},
         {-1, 0, +2}, {+1, 0, -2}, {-1, 0, -2}},
        {{-2, 0, +1}, {+2, 0, -1}, {-2, 0, -1},
         {-2, 0, +1}, {+2, 0, +1}, {+2, 0, -1}},
        {{+1, 0, +2}, {-1, 0, -2}, {-1, 0, +2},
         {+1, 0, +2}, {+1, 0, -2}, {-1, 0, -2}},
        {{+2, 0, -1}, {-2, 0, +1}, {+2, 0, +1},
         {+2, 0, -1}, {-2, 0, -1}, {-2, 0, +1}}
    };
    static const float VAR_8[8][6][2] = {
        {{0, 0}, {1, 1}, {0, 1}, {0, 0}, {1, 0}, {1, 1}},
        {{1, 0}, {0, 1}, {0, 0}, {1, 0}, {1, 1}, {0, 1}},
        {{1, 0}, {0, 1}, {0, 0}, {1, 0}, {1, 1}, {0, 1}},
        {{0, 0}, {1, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 1}},
        {{0, 0}, {1, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 1}},
        {{0, 1}, {1, 0}, {1, 1}, {0, 1}, {0, 0}, {1, 0}},
        {{0, 1}, {1, 0}, {1, 1}, {0, 1}, {0, 0}, {1, 0}},
        {{0, 1}, {1, 0}, {1, 1}, {0, 1}, {0, 0}, {1, 0}}
    };
    static const float VAR_9[8][3] = {
        {-1, 0, 0}, {+1, 0, 0}, {0, 0, -1}, {0, 0, +1},
        {0, +1, 0}, {0, +1, 0}, {0, +1, 0}, {0, +1, 0},
    };
    float *VAR_10 = VAR_0;
    float VAR_11 = 0.0625;
    float VAR_12 = VAR_11 / 5;
    float VAR_13 = VAR_11 / 2.5;
    float VAR_14 = VAR_12;
    float VAR_15 = VAR_13;
    float VAR_16 = VAR_11 - VAR_12;
    float VAR_17 = VAR_11 * 2 - VAR_13;
    float VAR_18 = 0.5;
    int VAR_19 = VAR_6 - 32;
    float VAR_20 = (VAR_19 % 16) * VAR_11;
    float VAR_21 = 1 - (VAR_19 / 16 + 1) * VAR_11 * 2;
    VAR_1 += VAR_18 * VAR_9[VAR_5][0];
    VAR_2 += VAR_18 * VAR_9[VAR_5][1];
    VAR_3 += VAR_18 * VAR_9[VAR_5][2];
    for (int VAR_22 = 0; VAR_22 < 6; VAR_22++) {
        *(VAR_10++) = VAR_1 + VAR_4 * VAR_7[VAR_5][VAR_22][0];
        *(VAR_10++) = VAR_2 + VAR_4 * VAR_7[VAR_5][VAR_22][1];
        *(VAR_10++) = VAR_3 + VAR_4 * VAR_7[VAR_5][VAR_22][2];
        *(VAR_10++) = VAR_20 + (VAR_8[VAR_5][VAR_22][0] ? VAR_16 : VAR_14);
        *(VAR_10++) = VAR_21 + (VAR_8[VAR_5][VAR_22][1] ? VAR_17 : VAR_15);
    }
}
