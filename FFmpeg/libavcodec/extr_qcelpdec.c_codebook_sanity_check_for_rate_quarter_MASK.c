
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const uint8_t *VAR_0)
{
    int VAR_1, VAR_2, VAR_3 = 0;

    for (VAR_1 = 1; VAR_1 < 5; VAR_1++) {
        VAR_2 = VAR_0[VAR_1] - VAR_0[VAR_1-1];
        if (FUNC_0(VAR_2) > 10)
            return -1;
        else if (FUNC_0(VAR_2 - VAR_3) > 12)
            return -1;
        VAR_3 = VAR_2;
    }
    return 0;
}
