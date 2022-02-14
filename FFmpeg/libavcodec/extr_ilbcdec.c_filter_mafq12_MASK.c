
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int FUNC_0 (int,int,int) ;

__attribute__((used)) static void FUNC_1(int16_t *VAR_0, int16_t *VAR_1,
                          int16_t *VAR_2, int16_t VAR_3,
                          int16_t VAR_4)
{
    int VAR_5, VAR_6, VAR_7;

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        const int16_t *VAR_8 = &VAR_2[0];
        const int16_t *VAR_9 = &VAR_0[VAR_6];

        VAR_5 = 0;
        for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
            VAR_5 += VAR_8[VAR_7] * *VAR_9--;

        VAR_5 = FUNC_0(VAR_5, -134217728, 134215679);

        VAR_1[VAR_6] = ((VAR_5 + 2048) >> 12);
    }
}
