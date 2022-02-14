
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int** VAR_3 ;

__attribute__((used)) static void FUNC_0(uint8_t *VAR_4, int *VAR_5, int VAR_6)
{
    unsigned int VAR_7, VAR_8;

    for (VAR_7 = 0; VAR_7 < 16; VAR_7++)
        for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
            unsigned int VAR_9 = (VAR_8 + 1) << (VAR_0 - VAR_1);
            unsigned int VAR_10 = 1 << VAR_6;

            while (VAR_3[VAR_7][VAR_10] > VAR_9)
                VAR_10 += 1 << VAR_6;

            *VAR_4++ = VAR_10 >> VAR_6;
        }

    *VAR_5 = VAR_6;
}
