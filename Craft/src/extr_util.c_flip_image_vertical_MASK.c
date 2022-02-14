
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,unsigned char*,unsigned int) ;

void FUNC_3(
    unsigned char *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
    unsigned int VAR_3 = VAR_1 * VAR_2 * 4;
    unsigned int VAR_4 = sizeof(char) * VAR_1 * 4;
    unsigned char *VAR_5 = FUNC_1(sizeof(unsigned char) * VAR_3);
    for (unsigned int VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
        unsigned int VAR_7 = VAR_2 - VAR_6 - 1;
        FUNC_2(VAR_5 + VAR_7 * VAR_4, VAR_0 + VAR_6 * VAR_4, VAR_4);
    }
    FUNC_2(VAR_0, VAR_5, VAR_3);
    FUNC_0(VAR_5);
}
