
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int member_0; int member_1; int member_2; } ;


 int FUNC_0 (float) ;
 int FUNC_1 (float*,float*,int,int,int) ;
 int FUNC_2 (float*) ;
 int FUNC_3 (float*,float*,float*) ;
 int FUNC_4 (float*,int ,int,int ,int ) ;
 int FUNC_5 (float*,float,float,float) ;
 int* VAR_0 ;

void FUNC_6(
    float *VAR_1, float VAR_2, float VAR_3,
    float VAR_4, float VAR_5, float VAR_6, float VAR_7, int VAR_8, float VAR_9)
{
    static const float VAR_10[4][4][3] = {
        {{ 0, -1, -1}, { 0, -1, +1}, { 0, +1, -1}, { 0, +1, +1}},
        {{ 0, -1, -1}, { 0, -1, +1}, { 0, +1, -1}, { 0, +1, +1}},
        {{-1, -1, 0}, {-1, +1, 0}, {+1, -1, 0}, {+1, +1, 0}},
        {{-1, -1, 0}, {-1, +1, 0}, {+1, -1, 0}, {+1, +1, 0}}
    };
    static const float VAR_11[4][3] = {
        {-1, 0, 0},
        {+1, 0, 0},
        {0, 0, -1},
        {0, 0, +1}
    };
    static const float VAR_12[4][4][2] = {
        {{0, 0}, {1, 0}, {0, 1}, {1, 1}},
        {{1, 0}, {0, 0}, {1, 1}, {0, 1}},
        {{0, 0}, {0, 1}, {1, 0}, {1, 1}},
        {{1, 0}, {1, 1}, {0, 0}, {0, 1}}
    };
    static const float VAR_13[4][6] = {
        {0, 3, 2, 0, 1, 3},
        {0, 3, 1, 0, 2, 3},
        {0, 3, 2, 0, 1, 3},
        {0, 3, 1, 0, 2, 3}
    };
    float *VAR_14 = VAR_1;
    float VAR_15 = 0.0625;
    float VAR_16 = 0;
    float VAR_17 = VAR_15;
    float VAR_18 = (VAR_0[VAR_8] % 16) * VAR_15;
    float VAR_19 = (VAR_0[VAR_8] / 16) * VAR_15;
    for (int VAR_20 = 0; VAR_20 < 4; VAR_20++) {
        for (int VAR_21 = 0; VAR_21 < 6; VAR_21++) {
            int VAR_22 = VAR_13[VAR_20][VAR_21];
            *(VAR_14++) = VAR_7 * VAR_10[VAR_20][VAR_22][0];
            *(VAR_14++) = VAR_7 * VAR_10[VAR_20][VAR_22][1];
            *(VAR_14++) = VAR_7 * VAR_10[VAR_20][VAR_22][2];
            *(VAR_14++) = VAR_11[VAR_20][0];
            *(VAR_14++) = VAR_11[VAR_20][1];
            *(VAR_14++) = VAR_11[VAR_20][2];
            *(VAR_14++) = VAR_18 + (VAR_12[VAR_20][VAR_22][0] ? VAR_17 : VAR_16);
            *(VAR_14++) = VAR_19 + (VAR_12[VAR_20][VAR_22][1] ? VAR_17 : VAR_16);
            *(VAR_14++) = VAR_2;
            *(VAR_14++) = VAR_3;
        }
    }
    float VAR_23[16];
    float VAR_24[16];
    FUNC_2(VAR_23);
    FUNC_4(VAR_24, 0, 1, 0, FUNC_0(VAR_9));
    FUNC_3(VAR_23, VAR_24, VAR_23);
    FUNC_1(VAR_1, VAR_23, 24, 3, 10);
    FUNC_5(VAR_24, VAR_4, VAR_5, VAR_6);
    FUNC_3(VAR_23, VAR_24, VAR_23);
    FUNC_1(VAR_1, VAR_23, 24, 0, 10);
}
