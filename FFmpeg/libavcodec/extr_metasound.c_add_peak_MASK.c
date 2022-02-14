
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(float VAR_0, int VAR_1, const float *VAR_2,
                     float VAR_3, float *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    const float *VAR_9 = VAR_2 + VAR_5;


    for (VAR_6 = 0; VAR_6 < VAR_1 / 2; VAR_6++)
        VAR_4[VAR_6] += VAR_3 * *VAR_2++;

    for (VAR_6 = 1; VAR_6 < FUNC_0(VAR_5, VAR_1); VAR_6++) {
        VAR_8 = (int)(VAR_6 * VAR_0 + 0.5);
        for (VAR_7 = -VAR_1 / 2; VAR_7 < (VAR_1 + 1) / 2; VAR_7++)
            VAR_4[VAR_7 + VAR_8] += VAR_3 * *VAR_2++;
    }


    VAR_8 = (int)(VAR_6 * VAR_0 + 0.5);
    for (VAR_7 = -VAR_1 / 2; VAR_7 < (VAR_1 + 1) / 2 && VAR_2 < VAR_9; VAR_7++)
        VAR_4[VAR_7 + VAR_8] += VAR_3 * *VAR_2++;
}
