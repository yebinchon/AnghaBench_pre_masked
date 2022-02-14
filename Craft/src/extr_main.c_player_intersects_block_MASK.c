
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float) ;

int FUNC_1(
    int VAR_0,
    float VAR_1, float VAR_2, float VAR_3,
    int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7 = FUNC_0(VAR_1);
    int VAR_8 = FUNC_0(VAR_2);
    int VAR_9 = FUNC_0(VAR_3);
    for (int VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
        if (VAR_7 == VAR_4 && VAR_8 - VAR_10 == VAR_5 && VAR_9 == VAR_6) {
            return 1;
        }
    }
    return 0;
}
