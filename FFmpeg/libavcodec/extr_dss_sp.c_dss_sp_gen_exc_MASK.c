
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int32_t *VAR_0, int32_t *VAR_1,
                           int VAR_2, int VAR_3)
{
    int VAR_4;



    if (VAR_2 < 72)
        for (VAR_4 = 0; VAR_4 < 72; VAR_4++)
            VAR_0[VAR_4] = VAR_1[VAR_2 - VAR_4 % VAR_2];
    else
        for (VAR_4 = 0; VAR_4 < 72; VAR_4++)
            VAR_0[VAR_4] = VAR_1[VAR_2 - VAR_4];

    for (VAR_4 = 0; VAR_4 < 72; VAR_4++) {
        int VAR_5 = VAR_3 * VAR_0[VAR_4] >> 11;
        VAR_0[VAR_4] = FUNC_0(VAR_5);
    }
}
