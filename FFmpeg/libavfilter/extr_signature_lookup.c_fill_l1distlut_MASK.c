
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint8_t VAR_0[])
{
    int VAR_1, VAR_2, VAR_3, VAR_4,VAR_5;
    uint8_t VAR_6;

    for (VAR_1 = 0, VAR_5 = 0; VAR_1 < 242; VAR_1++) {
        for (VAR_2 = VAR_1 + 1; VAR_2 < 243; VAR_2++, VAR_5++) {

            VAR_6 = 0;
            VAR_3 = VAR_1; VAR_4 = VAR_2;
            do {
                VAR_6 += FUNC_0((VAR_4 % 3) - (VAR_3 % 3));
                VAR_4 /= 3;
                VAR_3 /= 3;
            } while (VAR_3 > 0 || VAR_4 > 0);
            VAR_0[VAR_5] = VAR_6;
        }
    }
}
