
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DiracFrame ;



__attribute__((used)) static int FUNC_0(DiracFrame *VAR_0[], int VAR_1, DiracFrame *VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
        if (!VAR_0[VAR_3]) {
            VAR_0[VAR_3] = VAR_2;
            return 0;
        }
    return -1;
}
