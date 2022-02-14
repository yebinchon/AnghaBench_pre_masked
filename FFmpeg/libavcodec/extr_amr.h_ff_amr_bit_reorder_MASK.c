
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int R_TABLE_TYPE ;


 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(uint16_t *VAR_0, int VAR_1,
                                      const uint8_t *VAR_2,
                                      const R_TABLE_TYPE *VAR_3)
{
    int VAR_4;

    FUNC_0(VAR_0, 0, VAR_1);
    while ((VAR_4 = *VAR_3++)) {
        int VAR_5 = 0;
        int VAR_6 = *VAR_3++;
        while (VAR_4--) {
           int VAR_7 = *VAR_3++;
           VAR_5 <<= 1;
           VAR_5 |= VAR_2[VAR_7 >> 3] >> (VAR_7 & 7) & 1;
        }
        VAR_0[VAR_6 >> 1] = VAR_5;
    }
}
