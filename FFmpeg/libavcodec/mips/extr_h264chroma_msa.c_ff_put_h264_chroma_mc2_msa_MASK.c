
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int ptrdiff_t ;
typedef int int32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int ,int,int,int,int,int) ;
 int FUNC_2 (int *,int *,int ,int,int,int) ;
 int FUNC_3 (int *,int *,int ,int,int,int) ;

void FUNC_4(uint8_t *VAR_0, uint8_t *VAR_1,
                                ptrdiff_t VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    int32_t VAR_6;

    FUNC_0(VAR_4 < 8 && VAR_5 < 8 && VAR_4 >= 0 && VAR_5 >= 0);

    if (VAR_4 && VAR_5) {
        FUNC_1(VAR_1, VAR_0, VAR_2, VAR_4, (8 - VAR_4), VAR_5, (8 - VAR_5), VAR_3);
    } else if (VAR_4) {
        FUNC_2(VAR_1, VAR_0, VAR_2, VAR_4, (8 - VAR_4), VAR_3);
    } else if (VAR_5) {
        FUNC_3(VAR_1, VAR_0, VAR_2, VAR_5, (8 - VAR_5), VAR_3);
    } else {
        for (VAR_6 = VAR_3; VAR_6--;) {
            *((uint16_t *) VAR_0) = *((uint16_t *) VAR_1);

            VAR_1 += VAR_2;
            VAR_0 += VAR_2;
        }
    }
}
