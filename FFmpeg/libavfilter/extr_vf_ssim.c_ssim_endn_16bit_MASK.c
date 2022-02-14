
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (scalar_t__ const,scalar_t__ const,scalar_t__ const,scalar_t__ const,int) ;

__attribute__((used)) static float FUNC_1(const int64_t (*VAR_0)[4], const int64_t (*VAR_1)[4], int VAR_2, int VAR_3)
{
    float VAR_4 = 0.0;
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
        VAR_4 += FUNC_0(VAR_0[VAR_5][0] + VAR_0[VAR_5 + 1][0] + VAR_1[VAR_5][0] + VAR_1[VAR_5 + 1][0],
                           VAR_0[VAR_5][1] + VAR_0[VAR_5 + 1][1] + VAR_1[VAR_5][1] + VAR_1[VAR_5 + 1][1],
                           VAR_0[VAR_5][2] + VAR_0[VAR_5 + 1][2] + VAR_1[VAR_5][2] + VAR_1[VAR_5 + 1][2],
                           VAR_0[VAR_5][3] + VAR_0[VAR_5 + 1][3] + VAR_1[VAR_5][3] + VAR_1[VAR_5 + 1][3],
                           VAR_3);
    return VAR_4;
}
