
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,unsigned char*) ;
 int FUNC_5 (int*,unsigned char const*) ;

void FUNC_6(uint32_t VAR_0[12], unsigned char VAR_1[32], const unsigned char *VAR_2, size_t VAR_3)
{
    unsigned char VAR_4[16 + 1];
    size_t VAR_5 = 0;
    size_t VAR_6;

    if (VAR_3 > 16) {
        for (; VAR_5 < VAR_3 - 16; VAR_5 += 16) {
            FUNC_0(VAR_0);
            FUNC_5(VAR_0, &VAR_2[VAR_5]);
            FUNC_0(VAR_0);
            FUNC_3(VAR_0);
        }
    }
    VAR_6 = VAR_3 - VAR_5;
    FUNC_2(VAR_4, 0, 16);
    FUNC_1(VAR_4, &VAR_2[VAR_5], VAR_6);
    VAR_4[VAR_6] = 0x80;
    FUNC_0(VAR_0);
    FUNC_5(VAR_0, VAR_4);
    FUNC_0(VAR_0);
    VAR_0[11] ^= (1UL << 24 | (uint32_t) VAR_6 >> 4 << 25);
    FUNC_3(VAR_0);
    FUNC_4(VAR_0, &VAR_1[0]);
    FUNC_4(VAR_0, &VAR_1[16]);
}
