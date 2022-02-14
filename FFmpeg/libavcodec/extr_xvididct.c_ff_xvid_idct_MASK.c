
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int * const) ;
 int FUNC_1 (int * const) ;
 int FUNC_2 (int * const) ;
 scalar_t__ FUNC_3 (int * const,int ,int ) ;

void FUNC_4(int16_t *const VAR_12)
{
    int VAR_13, VAR_14 = 0x07;

    FUNC_3(VAR_12 + 0 * 8, VAR_8, VAR_0);
    FUNC_3(VAR_12 + 1 * 8, VAR_9, VAR_1);
    FUNC_3(VAR_12 + 2 * 8, VAR_10, VAR_2);
    if (FUNC_3(VAR_12 + 3 * 8, VAR_11, VAR_3))
        VAR_14 |= 0x08;
    if (FUNC_3(VAR_12 + 4 * 8, VAR_8, VAR_4))
        VAR_14 |= 0x10;
    if (FUNC_3(VAR_12 + 5 * 8, VAR_11, VAR_5))
        VAR_14 |= 0x20;
    if (FUNC_3(VAR_12 + 6 * 8, VAR_10, VAR_6))
        VAR_14 |= 0x40;
    if (FUNC_3(VAR_12 + 7 * 8, VAR_9, VAR_7))
        VAR_14 |= 0x80;

    if (VAR_14 & 0xF0) {
        for (VAR_13 = 0; VAR_13 < 8; VAR_13++)
            FUNC_2(VAR_12 + VAR_13);
    } else if (VAR_14 & 0x08) {
        for (VAR_13 = 0; VAR_13 < 8; VAR_13++)
            FUNC_1(VAR_12 + VAR_13);
    } else {
        for (VAR_13 = 0; VAR_13 < 8; VAR_13++)
            FUNC_0(VAR_12 + VAR_13);
    }
}
