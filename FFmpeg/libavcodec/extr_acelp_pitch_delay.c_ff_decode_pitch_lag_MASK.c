
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,int ,scalar_t__) ;

void FUNC_1(int *VAR_2, int *VAR_3, int VAR_4,
                         const int VAR_5, const int VAR_6,
                         int VAR_7, int VAR_8)
{

    if (VAR_6 == 0 || (VAR_6 == 2 && VAR_7)) {

        if (VAR_4 < 197)
            VAR_4 += 59;
        else
            VAR_4 = 3 * VAR_4 - 335;

    } else {
        if (VAR_8 == 4) {
            int VAR_9 = FUNC_0(VAR_5 - 5, VAR_1,
                                           VAR_0 - 9);


            if (VAR_4 < 4) {

                VAR_4 = 3 * (VAR_4 + VAR_9) + 1;
            } else if (VAR_4 < 12) {

                VAR_4 += 3 * VAR_9 + 7;
            } else {

                VAR_4 = 3 * (VAR_4 + VAR_9 - 6) + 1;
            }
        } else {

            VAR_4--;

            if (VAR_8 == 5) {
                VAR_4 += 3 * FUNC_0(VAR_5 - 10, VAR_1,
                                           VAR_0 - 19);
            } else
                VAR_4 += 3 * FUNC_0(VAR_5 - 5, VAR_1,
                                           VAR_0 - 9);
        }
    }
    *VAR_2 = VAR_4 * 10923 >> 15;
    *VAR_3 = VAR_4 - 3 * *VAR_2 - 1;
}
