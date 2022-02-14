
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float,float,int) ;
 int FUNC_1 (int,int,float*) ;

__attribute__((used)) static void FUNC_2(float *VAR_0, float *VAR_1, int *VAR_2)
{
    int VAR_3, VAR_4;

    float VAR_5[2][2];

    if (VAR_2[1] != 7 || VAR_2[3] != 7) {
        FUNC_1(VAR_2[1], VAR_2[0], VAR_5[0]);
        FUNC_1(VAR_2[3], VAR_2[2], VAR_5[1]);

        for (VAR_3 = 256; VAR_3 < 4 * 256; VAR_3 += 256) {
            for (VAR_4 = VAR_3; VAR_4 < VAR_3 + 8; VAR_4++) {
                VAR_0[VAR_4] *= FUNC_0(VAR_5[0][0], VAR_5[0][1], VAR_4 - VAR_3);
                VAR_1[VAR_4] *= FUNC_0(VAR_5[1][0], VAR_5[1][1], VAR_4 - VAR_3);
            }
            for(; VAR_4 < VAR_3 + 256; VAR_4++) {
                VAR_0[VAR_4] *= VAR_5[1][0];
                VAR_1[VAR_4] *= VAR_5[1][1];
            }
        }
    }
}
