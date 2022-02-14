
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (float*,int ,int) ;

__attribute__((used)) static void FUNC_1(float *VAR_4, const float *VAR_5)
{
    FUNC_0(VAR_4, 0, sizeof(*VAR_4) * VAR_1);

    for (int VAR_6 = 0; VAR_6 < VAR_2 - 1; VAR_6++) {
        const int VAR_7 = (VAR_3[VAR_6 + 1] - VAR_3[VAR_6]) << VAR_0;

        for (int VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
            float VAR_9 = (float)VAR_8 / VAR_7;

            VAR_4[(VAR_3[VAR_6] << VAR_0) + VAR_8] = (1.f - VAR_9) * VAR_5[VAR_6] + VAR_9 * VAR_5[VAR_6 + 1];
        }
    }
}
