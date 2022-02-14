
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int* zero_state; int* one_state; } ;
typedef TYPE_1__ RangeCoder ;


 int FUNC_0 (int*,int ,int) ;

void FUNC_1(RangeCoder *VAR_0, int VAR_1, int VAR_2)
{
    const int64_t VAR_3 = 1LL << 32;
    int64_t VAR_4;
    int VAR_5, VAR_6, VAR_7;

    FUNC_0(VAR_0->zero_state, 0, sizeof(VAR_0->zero_state));
    FUNC_0(VAR_0->one_state, 0, sizeof(VAR_0->one_state));

    VAR_5 = 0;
    VAR_4 = VAR_3 / 2;
    for (VAR_7 = 0; VAR_7 < 128; VAR_7++) {
        VAR_6 = (256 * VAR_4 + VAR_3 / 2) >> 32;
        if (VAR_6 <= VAR_5)
            VAR_6 = VAR_5 + 1;
        if (VAR_5 && VAR_5 < 256 && VAR_6 <= VAR_2)
            VAR_0->one_state[VAR_5] = VAR_6;

        VAR_4 += ((VAR_3 - VAR_4) * VAR_1 + VAR_3 / 2) >> 32;
        VAR_5 = VAR_6;
    }

    for (VAR_7 = 256 - VAR_2; VAR_7 <= VAR_2; VAR_7++) {
        if (VAR_0->one_state[VAR_7])
            continue;

        VAR_4 = (VAR_7 * VAR_3 + 128) >> 8;
        VAR_4 += ((VAR_3 - VAR_4) * VAR_1 + VAR_3 / 2) >> 32;
        VAR_6 = (256 * VAR_4 + VAR_3 / 2) >> 32;
        if (VAR_6 <= VAR_7)
            VAR_6 = VAR_7 + 1;
        if (VAR_6 > VAR_2)
            VAR_6 = VAR_2;
        VAR_0->one_state[VAR_7] = VAR_6;
    }

    for (VAR_7 = 1; VAR_7 < 255; VAR_7++)
        VAR_0->zero_state[VAR_7] = 256 - VAR_0->one_state[256 - VAR_7];
}
