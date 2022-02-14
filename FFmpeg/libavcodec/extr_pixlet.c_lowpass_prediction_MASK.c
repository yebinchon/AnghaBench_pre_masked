
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef scalar_t__ int16_t ;


 int FUNC_0 (scalar_t__*,int ,int) ;

__attribute__((used)) static void FUNC_1(int16_t *VAR_0, int16_t *VAR_1,
                               int VAR_2, int VAR_3, ptrdiff_t VAR_4)
{
    int16_t VAR_5;
    int VAR_6, VAR_7;

    FUNC_0(VAR_1, 0, VAR_2 * sizeof(*VAR_1));

    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
        VAR_5 = VAR_1[0] + VAR_0[0];
        VAR_0[0] = VAR_1[0] = VAR_5;
        for (VAR_7 = 1; VAR_7 < VAR_2; VAR_7++) {
            VAR_5 = VAR_1[VAR_7] + VAR_0[VAR_7];
            VAR_0[VAR_7] = VAR_1[VAR_7] = VAR_5;
            VAR_0[VAR_7] += VAR_0[VAR_7-1];
        }
        VAR_0 += VAR_4;
    }
}
