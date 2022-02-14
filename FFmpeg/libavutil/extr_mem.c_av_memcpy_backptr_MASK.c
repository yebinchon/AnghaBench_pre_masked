
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int *,int const,int) ;

void FUNC_7(uint8_t *VAR_0, int VAR_1, int VAR_2)
{
    const uint8_t *VAR_3 = &VAR_0[-VAR_1];
    if (!VAR_1)
        return;

    if (VAR_1 == 1) {
        FUNC_6(VAR_0, *VAR_3, VAR_2);
    } else if (VAR_1 == 2) {
        FUNC_2(VAR_0, VAR_2);
    } else if (VAR_1 == 3) {
        FUNC_3(VAR_0, VAR_2);
    } else if (VAR_1 == 4) {
        FUNC_4(VAR_0, VAR_2);
    } else {
        if (VAR_2 >= 16) {
            int VAR_4 = VAR_1;
            while (VAR_2 > VAR_4) {
                FUNC_5(VAR_0, VAR_3, VAR_4);
                VAR_0 += VAR_4;
                VAR_2 -= VAR_4;
                VAR_4 <<= 1;
            }
            FUNC_5(VAR_0, VAR_3, VAR_2);
            return;
        }
        if (VAR_2 >= 8) {
            FUNC_1(VAR_0, VAR_3);
            FUNC_1(VAR_0 + 4, VAR_3 + 4);
            VAR_3 += 8;
            VAR_0 += 8;
            VAR_2 -= 8;
        }
        if (VAR_2 >= 4) {
            FUNC_1(VAR_0, VAR_3);
            VAR_3 += 4;
            VAR_0 += 4;
            VAR_2 -= 4;
        }
        if (VAR_2 >= 2) {
            FUNC_0(VAR_0, VAR_3);
            VAR_3 += 2;
            VAR_0 += 2;
            VAR_2 -= 2;
        }
        if (VAR_2)
            *VAR_0 = *VAR_3;
    }
}
