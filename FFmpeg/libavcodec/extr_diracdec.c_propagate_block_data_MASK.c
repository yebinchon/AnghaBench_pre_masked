
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DiracBlock ;



__attribute__((used)) static void FUNC_0(DiracBlock *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;
    DiracBlock *VAR_5 = VAR_0;

    for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++)
        VAR_5[VAR_3] = *VAR_0;

    for (VAR_4 = 1; VAR_4 < VAR_2; VAR_4++) {
        VAR_5 += VAR_1;
        for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
            VAR_5[VAR_3] = *VAR_0;
    }
}
