
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int member_0; int member_1; int member_2; int member_3; } ;
struct TYPE_7__ {int member_0; int member_1; int member_2; int member_3; } ;
struct TYPE_6__ {int member_0; int member_1; int member_2; int member_3; } ;
struct TYPE_5__ {int member_0; int member_1; int member_2; int member_3; } ;


 float FUNC_0 (float,double) ;

void FUNC_1(
    char VAR_0[27], char VAR_1[27], float VAR_2[27],
    float VAR_3[6][4], float VAR_4[6][4])
{
    static const int VAR_5[6][4][3] = {
        {{0, 1, 3}, {2, 1, 5}, {6, 3, 7}, {8, 5, 7}},
        {{18, 19, 21}, {20, 19, 23}, {24, 21, 25}, {26, 23, 25}},
        {{6, 7, 15}, {8, 7, 17}, {24, 15, 25}, {26, 17, 25}},
        {{0, 1, 9}, {2, 1, 11}, {18, 9, 19}, {20, 11, 19}},
        {{0, 3, 9}, {6, 3, 15}, {18, 9, 21}, {24, 15, 21}},
        {{2, 5, 11}, {8, 5, 17}, {20, 11, 23}, {26, 17, 23}}
    };
   static const int VAR_6[6][4][4] = {
        {{0, 1, 3, 4}, {1, 2, 4, 5}, {3, 4, 6, 7}, {4, 5, 7, 8}},
        {{18, 19, 21, 22}, {19, 20, 22, 23}, {21, 22, 24, 25}, {22, 23, 25, 26}},
        {{6, 7, 15, 16}, {7, 8, 16, 17}, {15, 16, 24, 25}, {16, 17, 25, 26}},
        {{0, 1, 9, 10}, {1, 2, 10, 11}, {9, 10, 18, 19}, {10, 11, 19, 20}},
        {{0, 3, 9, 12}, {3, 6, 12, 15}, {9, 12, 18, 21}, {12, 15, 21, 24}},
        {{2, 5, 11, 14}, {5, 8, 14, 17}, {11, 14, 20, 23}, {14, 17, 23, 26}}
    };
    static const float VAR_7[4] = {0.0, 0.25, 0.5, 0.75};
    for (int VAR_8 = 0; VAR_8 < 6; VAR_8++) {
        for (int VAR_9 = 0; VAR_9 < 4; VAR_9++) {
            int VAR_10 = VAR_0[VAR_5[VAR_8][VAR_9][0]];
            int VAR_11 = VAR_0[VAR_5[VAR_8][VAR_9][1]];
            int VAR_12 = VAR_0[VAR_5[VAR_8][VAR_9][2]];
            int VAR_13 = VAR_11 && VAR_12 ? 3 : VAR_10 + VAR_11 + VAR_12;
            float VAR_14 = 0;
            float VAR_15 = 0;
            int VAR_16 = VAR_1[13] == 15;
            for (int VAR_17 = 0; VAR_17 < 4; VAR_17++) {
                VAR_14 += VAR_2[VAR_6[VAR_8][VAR_9][VAR_17]];
                VAR_15 += VAR_1[VAR_6[VAR_8][VAR_9][VAR_17]];
            }
            if (VAR_16) {
                VAR_15 = 15 * 4 * 10;
            }
            float VAR_18 = VAR_7[VAR_13] + VAR_14 / 4.0;
            VAR_3[VAR_8][VAR_9] = FUNC_0(VAR_18, 1.0);
            VAR_4[VAR_8][VAR_9] = VAR_15 / 15.0 / 4.0;
        }
    }
}
