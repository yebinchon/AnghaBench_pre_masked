
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;


 int FUNC_0 (int *,int *,int ,int ,int,int,int *) ;

void FUNC_1(uint8_t *VAR_0, uint8_t *VAR_1,
                                  ptrdiff_t VAR_2, ptrdiff_t VAR_3,
                                  int16_t *VAR_4, int VAR_5,
                                  int VAR_6, int VAR_7) {
    uint8_t *VAR_8 = VAR_0;
    uint8_t *VAR_9 = VAR_1;
    int16_t VAR_10[32] = {0};
    int VAR_11;

    for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
        VAR_10[(VAR_11 + VAR_5) & 31] = VAR_4[VAR_11 + 1];
    }

    FUNC_0(VAR_8, VAR_9, VAR_2, VAR_3, VAR_6, VAR_7, VAR_10);
}
