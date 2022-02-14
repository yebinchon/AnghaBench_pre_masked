
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_0, int VAR_1,
                              unsigned char *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5 = 0;
    unsigned char VAR_6[15];
    unsigned char *VAR_7 = VAR_2;
    unsigned char *VAR_8 = VAR_2 + VAR_3;
    const unsigned char *VAR_9 = VAR_0 + VAR_1;

    FUNC_0(VAR_6, VAR_0, 15);
    VAR_0 += 15;

    while (VAR_0 < VAR_9) {
        VAR_5 = *VAR_0++;
        if ((VAR_5 >> 4) == 15) {
            VAR_4 = VAR_5 << 4;
            VAR_5 = *VAR_0++;
            *VAR_7++ = VAR_4 | (VAR_5 >> 4);
        } else
            *VAR_7++ = VAR_6[VAR_5 >> 4];
        if (VAR_7 >= VAR_8)
            break;

        VAR_5 &= 15;
        if (VAR_5 == 15) {
            *VAR_7++ = *VAR_0++;
        } else
            *VAR_7++ = VAR_6[VAR_5];
        if (VAR_7 >= VAR_8)
            break;
    }

    return VAR_7 - VAR_2;
}
