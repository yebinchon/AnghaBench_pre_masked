
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float const,float,float) ;
 int FUNC_1 (float*,float const*,float*,float*,int) ;

__attribute__((used)) static void FUNC_2(float *VAR_0, const float *VAR_1, int VAR_2,
                           float VAR_3, float VAR_4)
{
    int VAR_5;

    if (VAR_3 < 0 && VAR_4 > 0) {
        FUNC_1(VAR_0, VAR_1, &VAR_3, &VAR_4, VAR_2);
    } else {
        for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5 += 8) {
            VAR_0[VAR_5] = FUNC_0(VAR_1[VAR_5], VAR_3, VAR_4);
            VAR_0[VAR_5 + 1] = FUNC_0(VAR_1[VAR_5 + 1], VAR_3, VAR_4);
            VAR_0[VAR_5 + 2] = FUNC_0(VAR_1[VAR_5 + 2], VAR_3, VAR_4);
            VAR_0[VAR_5 + 3] = FUNC_0(VAR_1[VAR_5 + 3], VAR_3, VAR_4);
            VAR_0[VAR_5 + 4] = FUNC_0(VAR_1[VAR_5 + 4], VAR_3, VAR_4);
            VAR_0[VAR_5 + 5] = FUNC_0(VAR_1[VAR_5 + 5], VAR_3, VAR_4);
            VAR_0[VAR_5 + 6] = FUNC_0(VAR_1[VAR_5 + 6], VAR_3, VAR_4);
            VAR_0[VAR_5 + 7] = FUNC_0(VAR_1[VAR_5 + 7], VAR_3, VAR_4);
        }
    }
}
