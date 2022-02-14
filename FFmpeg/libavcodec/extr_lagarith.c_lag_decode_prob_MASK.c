
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint32_t ;
typedef int GetBitContext ;


 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(GetBitContext *VAR_0, uint32_t *VAR_1)
{
    static const uint8_t VAR_2[] = { 1, 2, 3, 5, 8, 13, 21 };
    int VAR_3;
    int VAR_4 = 0;
    int VAR_5 = 0;
    int VAR_6 = 0;
    unsigned VAR_7;

    for (VAR_3 = 0; VAR_3 < 7; VAR_3++) {
        if (VAR_6 && VAR_4)
            break;
        VAR_6 = VAR_4;
        VAR_4 = FUNC_0(VAR_0);
        if (VAR_4 && !VAR_6)
            VAR_5 += VAR_2[VAR_3];
    }
    VAR_5--;
    if (VAR_5 < 0 || VAR_5 > 31) {
        *VAR_1 = 0;
        return -1;
    } else if (VAR_5 == 0) {
        *VAR_1 = 0;
        return 0;
    }

    VAR_7 = FUNC_1(VAR_0, VAR_5);
    VAR_7 |= 1U << VAR_5;

    *VAR_1 = VAR_7 - 1;

    return 0;
}
