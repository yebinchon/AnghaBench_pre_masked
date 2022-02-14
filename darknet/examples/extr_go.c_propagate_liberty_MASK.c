
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*,int) ;

__attribute__((used)) static void FUNC_1(float *VAR_0, int *VAR_1, int *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    if (VAR_3 < 0 || VAR_3 > 18 || VAR_4 < 0 || VAR_4 > 18) return;
    int VAR_6 = VAR_3*19 + VAR_4;
    if (FUNC_0(VAR_0,VAR_6) != VAR_5) return;
    if (VAR_2[VAR_6]) return;
    VAR_2[VAR_6] = 1;
    VAR_1[VAR_6] += 1;
    FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3+1, VAR_4, VAR_5);
    FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3-1, VAR_4, VAR_5);
    FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4+1, VAR_5);
    FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4-1, VAR_5);
}
