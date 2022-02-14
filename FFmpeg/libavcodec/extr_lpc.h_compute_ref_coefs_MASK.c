
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPC_TYPE ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(const LPC_TYPE *VAR_1, int VAR_2,
                                     LPC_TYPE *VAR_3, LPC_TYPE *VAR_4)
{
    int VAR_5, VAR_6;
    LPC_TYPE VAR_7;
    LPC_TYPE VAR_8[VAR_0], VAR_9[VAR_0];

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
        VAR_8[VAR_5] = VAR_9[VAR_5] = VAR_1[VAR_5 + 1];

    VAR_7 = VAR_1[0];
    VAR_3[0] = -VAR_9[0] / VAR_7;
    VAR_7 += VAR_9[0] * VAR_3[0];
    if (VAR_4)
        VAR_4[0] = VAR_7;
    for (VAR_5 = 1; VAR_5 < VAR_2; VAR_5++) {
        for (VAR_6 = 0; VAR_6 < VAR_2 - VAR_5; VAR_6++) {
            VAR_9[VAR_6] = VAR_9[VAR_6 + 1] + VAR_3[VAR_5 - 1] * VAR_8[VAR_6];
            VAR_8[VAR_6] = VAR_9[VAR_6 + 1] * VAR_3[VAR_5 - 1] + VAR_8[VAR_6];
        }
        VAR_3[VAR_5] = -VAR_9[0] / VAR_7;
        VAR_7 += VAR_9[0] * VAR_3[VAR_5];
        if (VAR_4)
            VAR_4[VAR_5] = VAR_7;
    }
}
