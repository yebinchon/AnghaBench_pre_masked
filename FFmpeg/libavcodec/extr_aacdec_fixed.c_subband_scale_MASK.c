
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ,char*) ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_2(int *VAR_2, int *VAR_3, int VAR_4, int VAR_5, int VAR_6, void *VAR_7)
{
    int VAR_8 = VAR_4 < 0 ? -1 : 1;
    int VAR_9 = FUNC_0(VAR_4);
    unsigned int VAR_10;
    int VAR_11, VAR_12, VAR_13 = VAR_1[VAR_9 & 3];

    VAR_9 = VAR_5 - (VAR_9 >> 2);

    if (VAR_9 > 31) {
        for (VAR_11=0; VAR_11<VAR_6; VAR_11++) {
            VAR_2[VAR_11] = 0;
        }
    } else if (VAR_9 > 0) {
        VAR_10 = 1 << (VAR_9-1);
        for (VAR_11=0; VAR_11<VAR_6; VAR_11++) {
            VAR_12 = (int)(((int64_t)VAR_3[VAR_11] * VAR_13) >> 32);
            VAR_2[VAR_11] = ((int)(VAR_12+VAR_10) >> VAR_9) * VAR_8;
        }
    } else if (VAR_9 > -32) {
        VAR_9 = VAR_9 + 32;
        VAR_10 = 1U << (VAR_9-1);
        for (VAR_11=0; VAR_11<VAR_6; VAR_11++) {
            VAR_12 = (int)((int64_t)((int64_t)VAR_3[VAR_11] * VAR_13 + VAR_10) >> VAR_9);
            VAR_2[VAR_11] = VAR_12 * (unsigned)VAR_8;
        }
    } else {
        FUNC_1(VAR_7, VAR_0, "Overflow in subband_scale()\n");
    }
}
