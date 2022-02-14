
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int int32_t ;


 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int*,int ,int) ;

__attribute__((used)) static void FUNC_2(int32_t *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    int32_t VAR_6, VAR_7;
    int32_t VAR_8[256], VAR_9[256];

    if (VAR_1 >= VAR_3)
        return;

    FUNC_1(VAR_8, 0, VAR_1 * sizeof(*VAR_8));
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
        VAR_9[VAR_4] = VAR_0[VAR_4];
    for (VAR_4 = VAR_1; VAR_4 < VAR_3; VAR_4++) {
        VAR_6 = 0;
        VAR_7 = FUNC_0(VAR_0[VAR_4]);
        for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
            VAR_6 += VAR_9[VAR_5] * (unsigned)VAR_8[VAR_5];
            VAR_8[VAR_5] += ((VAR_9[VAR_5] >> 31) | 1) * VAR_7;
        }
        VAR_0[VAR_4] -= VAR_6 >> VAR_2;
        for (VAR_5 = 0; VAR_5 < VAR_1 - 1; VAR_5++)
            VAR_9[VAR_5] = VAR_9[VAR_5 + 1];
        VAR_9[VAR_1 - 1] = VAR_0[VAR_4];
    }
}
