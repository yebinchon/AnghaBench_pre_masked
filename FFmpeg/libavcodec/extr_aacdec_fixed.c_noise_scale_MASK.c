
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int FUNC_0 (int) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_1(int *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = -VAR_2;
    unsigned int VAR_6;
    int VAR_7, VAR_8, VAR_9 = VAR_0[VAR_5 & 3];
    int VAR_10 = 0;

    FUNC_0(VAR_5 >= 0);
    while (VAR_3 > 0x7fff) {
        VAR_3 >>= 1;
        VAR_10++;
    }
    VAR_9 /= VAR_3;
    VAR_5 = 21 + VAR_10 - (VAR_5 >> 2);

    if (VAR_5 > 31) {
        for (VAR_7=0; VAR_7<VAR_4; VAR_7++) {
            VAR_1[VAR_7] = 0;
        }
    } else if (VAR_5 >= 0) {
        VAR_6 = VAR_5 ? 1 << (VAR_5-1) : 0;
        for (VAR_7=0; VAR_7<VAR_4; VAR_7++) {
            VAR_8 = (int)(((int64_t)VAR_1[VAR_7] * VAR_9) >> 32);
            VAR_1[VAR_7] = -((int)(VAR_8+VAR_6) >> VAR_5);
        }
    }
    else {
        VAR_5 = VAR_5 + 32;
        if (VAR_5 > 0) {
            VAR_6 = 1 << (VAR_5-1);
            for (VAR_7=0; VAR_7<VAR_4; VAR_7++) {
                VAR_8 = (int)((int64_t)((int64_t)VAR_1[VAR_7] * VAR_9 + VAR_6) >> VAR_5);
                VAR_1[VAR_7] = -VAR_8;
            }
        } else {
            for (VAR_7=0; VAR_7<VAR_4; VAR_7++)
                VAR_1[VAR_7] = -(int64_t)VAR_1[VAR_7] * VAR_9 * (1 << -VAR_5);
        }
    }
}
