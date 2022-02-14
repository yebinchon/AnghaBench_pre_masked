
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;
typedef int SoftFloat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static SoftFloat FUNC_1(int (*VAR_2)[2], int VAR_3)
{
    SoftFloat VAR_4;
    uint64_t VAR_5 = 0, VAR_6;
    uint64_t VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
    int VAR_11, VAR_12, VAR_13;
    unsigned VAR_14;

    VAR_12 = 0;
    for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11 += 2) {
        VAR_7 += (int64_t)VAR_2[VAR_11 + 0][0] * VAR_2[VAR_11 + 0][0];
        VAR_8 += (int64_t)VAR_2[VAR_11 + 0][1] * VAR_2[VAR_11 + 0][1];
        VAR_9 += (int64_t)VAR_2[VAR_11 + 1][0] * VAR_2[VAR_11 + 1][0];
        VAR_10 += (int64_t)VAR_2[VAR_11 + 1][1] * VAR_2[VAR_11 + 1][1];
        if ((VAR_7|VAR_8|VAR_9|VAR_10) > VAR_1 - VAR_0*(int64_t)VAR_0 || VAR_11+2>=VAR_3) {
            VAR_7 >>= VAR_12;
            VAR_8 >>= VAR_12;
            VAR_9 >>= VAR_12;
            VAR_10 >>= VAR_12;
            while ((VAR_7|VAR_8|VAR_9|VAR_10) > (VAR_1 - VAR_5) >> 2) {
                VAR_7 >>= 1;
                VAR_8 >>= 1;
                VAR_9 >>= 1;
                VAR_10 >>= 1;
                VAR_5 >>= 1;
                VAR_12 ++;
            }
            VAR_5 += VAR_7 + VAR_8 + VAR_9 + VAR_10;
            VAR_7 = VAR_8 = VAR_9 = VAR_10 = 0;
        }
    }

    VAR_13 = 15 - VAR_12;

    VAR_14 = VAR_5 >> 32;
    if (VAR_14) {
        VAR_12 = 33;
        while (VAR_14 < 0x80000000U) {
            VAR_14 <<= 1;
            VAR_12--;
        }
    } else
        VAR_12 = 1;

    VAR_6 = 1ULL << (VAR_12-1);
    VAR_14 = ((VAR_5 + VAR_6) >> VAR_12);
    VAR_14 >>= 1;
    VAR_4 = FUNC_0(VAR_14, VAR_13 - VAR_12);

    return VAR_4;
}
