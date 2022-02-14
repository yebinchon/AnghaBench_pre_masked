
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 float const** VAR_0 ;

__attribute__((used)) static inline void FUNC_1(float *VAR_1, const float *VAR_2, const float *VAR_3,
                           int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
        double VAR_8 = VAR_2[VAR_6 * VAR_4] * VAR_0[0][0];
        double VAR_9 = VAR_3[VAR_6 * VAR_4] * VAR_0[1][0];
        for (VAR_7 = 1; VAR_7 <= 4; VAR_7++) {
            const int VAR_10 = FUNC_0(VAR_6 - VAR_7, VAR_5 - 1) * VAR_4;
            const int VAR_11 = FUNC_0(VAR_6 + VAR_7, VAR_5 - 1) * VAR_4;

            VAR_8 += VAR_0[0][VAR_7] * (VAR_2[VAR_10] + VAR_2[VAR_11]);
            VAR_9 += VAR_0[1][VAR_7] * (VAR_3[VAR_10] + VAR_3[VAR_11]);
        }
        VAR_1[VAR_6 * VAR_4] = (VAR_8 + VAR_9) * 0.5;
    }
}
