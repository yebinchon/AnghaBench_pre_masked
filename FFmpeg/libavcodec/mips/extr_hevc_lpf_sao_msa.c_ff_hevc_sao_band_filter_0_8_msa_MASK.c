
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;


 int FUNC_0 (int *,int ,int *,int ,int,int *,int,int) ;
 int FUNC_1 (int *,int ,int *,int ,int,int *,int) ;
 int FUNC_2 (int *,int ,int *,int ,int,int *,int) ;

void FUNC_3(uint8_t *VAR_0, uint8_t *VAR_1,
                                     ptrdiff_t VAR_2, ptrdiff_t VAR_3,
                                     int16_t *VAR_4, int VAR_5,
                                     int VAR_6, int VAR_7)
{
    if (VAR_6 >> 4) {
        FUNC_0(VAR_0, VAR_2, VAR_1, VAR_3,
                                            VAR_5, VAR_4,
                                            VAR_6 - (VAR_6 % 16), VAR_7);
        VAR_0 += VAR_6 - (VAR_6 % 16);
        VAR_1 += VAR_6 - (VAR_6 % 16);
        VAR_6 %= 16;
    }

    if (VAR_6 >> 3) {
        FUNC_2(VAR_0, VAR_2, VAR_1, VAR_3,
                                        VAR_5, VAR_4, VAR_7);
        VAR_0 += 8;
        VAR_1 += 8;
        VAR_6 %= 8;
    }

    if (VAR_6) {
        FUNC_1(VAR_0, VAR_2, VAR_1, VAR_3,
                                        VAR_5, VAR_4, VAR_7);
    }
}
