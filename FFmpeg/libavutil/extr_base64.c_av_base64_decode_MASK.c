
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (unsigned int) ;

int FUNC_3(uint8_t *VAR_1, const char *VAR_2, int VAR_3)
{
    uint8_t *VAR_4 = VAR_1;
    uint8_t *VAR_5 = VAR_1 + VAR_3;

    const uint8_t *VAR_6 = VAR_2;
    unsigned VAR_7 = 0xff;
    unsigned VAR_8;

    while (VAR_5 - VAR_4 > 3) {
        FUNC_1(0);
        FUNC_1(1);
        FUNC_1(2);
        FUNC_1(3);

        VAR_8 = FUNC_2(VAR_8 << 8);
        FUNC_0(VAR_4, VAR_8);
        VAR_4 += 3;
        VAR_6 += 4;
    }
    if (VAR_5 - VAR_4) {
        FUNC_1(0);
        FUNC_1(1);
        FUNC_1(2);
        FUNC_1(3);
        *VAR_4++ = VAR_8 >> 16;
        if (VAR_5 - VAR_4)
            *VAR_4++ = VAR_8 >> 8;
        if (VAR_5 - VAR_4)
            *VAR_4++ = VAR_8;
        VAR_6 += 4;
    }
    while (1) {
        FUNC_1(0);
        VAR_6++;
        FUNC_1(0);
        VAR_6++;
        FUNC_1(0);
        VAR_6++;
        FUNC_1(0);
        VAR_6++;
    }

out3:
    *VAR_4++ = VAR_8 >> 10;
    VAR_8 <<= 2;
out2:
    *VAR_4++ = VAR_8 >> 4;
out1:
out0:
    return VAR_7 & 1 ? VAR_0 : VAR_4 - VAR_1;
}
