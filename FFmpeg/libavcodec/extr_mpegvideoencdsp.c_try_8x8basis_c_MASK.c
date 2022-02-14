
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int16_t VAR_2[64], int16_t VAR_3[64],
                          int16_t VAR_4[64], int VAR_5)
{
    int VAR_6;
    unsigned int VAR_7 = 0;

    for (VAR_6 = 0; VAR_6 < 8 * 8; VAR_6++) {
        int VAR_8 = VAR_2[VAR_6] + ((VAR_4[VAR_6] * VAR_5 +
                           (1 << (VAR_0 - VAR_1 - 1))) >>
                          (VAR_0 - VAR_1));
        int VAR_9 = VAR_3[VAR_6];
        VAR_8 >>= VAR_1;
        FUNC_0(-512 < VAR_8 && VAR_8 < 512);

        VAR_7 += (VAR_9 * VAR_8) * (VAR_9 * VAR_8) >> 4;
    }
    return VAR_7 >> 2;
}
