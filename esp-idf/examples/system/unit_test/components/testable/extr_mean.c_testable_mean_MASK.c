
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const int* VAR_0, int VAR_1)
{
    if (VAR_1 == 0) {
        return 0;
    }
    int VAR_2 = 0;
    for (int VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
        VAR_2 += VAR_0[VAR_3];
    }
    return VAR_2 / VAR_1;
}
