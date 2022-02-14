
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;

int FUNC_1(const uint8_t *VAR_1, int VAR_2,
                          int VAR_3, const uint8_t *VAR_4[3],
                          int VAR_5[3])
{
    int VAR_6;

    if (VAR_2 >= 6 && FUNC_0(VAR_1) == VAR_3) {
        int VAR_7 = 6;
        for (VAR_6=0; VAR_6<3; VAR_6++) {
            VAR_5[VAR_6] = FUNC_0(VAR_1);
            VAR_1 += 2;
            VAR_4[VAR_6] = VAR_1;
            VAR_1 += VAR_5[VAR_6];
            if (VAR_7 > VAR_2 - VAR_5[VAR_6])
                return -1;
            VAR_7 += VAR_5[VAR_6];
        }
    } else if (VAR_2 >= 3 && VAR_2 < VAR_0 - 0x1ff && VAR_1[0] == 2) {
        int VAR_8 = 3;
        VAR_1++;
        for (VAR_6=0; VAR_6<2; VAR_6++, VAR_1++) {
            VAR_5[VAR_6] = 0;
            for (; VAR_8 < VAR_2 && *VAR_1==0xff; VAR_1++) {
                VAR_5[VAR_6] += 0xff;
                VAR_8 += 0xff + 1;
            }
            VAR_5[VAR_6] += *VAR_1;
            VAR_8 += *VAR_1;
            if (VAR_8 > VAR_2)
                return -1;
        }
        VAR_5[2] = VAR_2 - VAR_8;
        VAR_4[0] = VAR_1;
        VAR_4[1] = VAR_4[0] + VAR_5[0];
        VAR_4[2] = VAR_4[1] + VAR_5[1];
    } else {
        return -1;
    }
    return 0;
}
