
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int AVCodecContext ;


 int * FUNC_0 (int const*,int const*,int*) ;

int FUNC_1(AVCodecContext *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    uint32_t VAR_3 = -1;
    const uint8_t *VAR_4 = VAR_1, *VAR_5 = VAR_1 + VAR_2;

    while (VAR_4 < VAR_5) {
        VAR_4 = FUNC_0(VAR_4, VAR_5, &VAR_3);
        if (VAR_3 == 0x1B3 || VAR_3 == 0x1B6)
            return VAR_4 - 4 - VAR_1;
    }

    return 0;
}
