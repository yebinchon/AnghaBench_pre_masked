
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float const*,float const*,int) ;
 int FUNC_1 (float const*,float const*,float*,int) ;

__attribute__((used)) static void FUNC_2(const float *VAR_0, const float *VAR_1,
                             float *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_4 - 3; VAR_5 += 4) {
        float VAR_6[4] = { 0, 0, 0, 0};

        FUNC_1(VAR_0, VAR_1 + VAR_5, VAR_6, VAR_3);

        VAR_2[VAR_5] = VAR_6[0];
        VAR_2[VAR_5 + 1] = VAR_6[1];
        VAR_2[VAR_5 + 2] = VAR_6[2];
        VAR_2[VAR_5 + 3] = VAR_6[3];
    }

    for (; VAR_5 < VAR_4; VAR_5++) {
        VAR_2[VAR_5] = FUNC_0(VAR_0, VAR_1 + VAR_5, VAR_3);
    }
}
