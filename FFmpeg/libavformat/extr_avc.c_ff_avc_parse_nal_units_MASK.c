
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int const*,int) ;
 int * FUNC_2 (int const*,int const*) ;

int FUNC_3(AVIOContext *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    const uint8_t *VAR_3 = VAR_1;
    const uint8_t *VAR_4 = VAR_3 + VAR_2;
    const uint8_t *VAR_5, *VAR_6;

    VAR_2 = 0;
    VAR_5 = FUNC_2(VAR_3, VAR_4);
    for (;;) {
        while (VAR_5 < VAR_4 && !*(VAR_5++));
        if (VAR_5 == VAR_4)
            break;

        VAR_6 = FUNC_2(VAR_5, VAR_4);
        FUNC_0(VAR_0, VAR_6 - VAR_5);
        FUNC_1(VAR_0, VAR_5, VAR_6 - VAR_5);
        VAR_2 += 4 + VAR_6 - VAR_5;
        VAR_5 = VAR_6;
    }
    return VAR_2;
}
