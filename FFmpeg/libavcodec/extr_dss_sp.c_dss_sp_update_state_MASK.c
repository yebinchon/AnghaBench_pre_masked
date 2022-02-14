
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int* excitation; } ;
typedef TYPE_1__ DssSpContext ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_2(DssSpContext *VAR_2, int32_t *VAR_3)
{
    int VAR_4, VAR_5 = 6, VAR_6 = 0, VAR_7 = 0;

    for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
        VAR_2->excitation[VAR_4] = VAR_2->excitation[288 + VAR_4];

    for (VAR_4 = 0; VAR_4 < 72 * VAR_0; VAR_4++)
        VAR_2->excitation[6 + VAR_4] = VAR_3[VAR_4];

    do {
        int VAR_8 = 0;

        for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
            VAR_8 += VAR_2->excitation[VAR_5--] * VAR_1[VAR_7 + VAR_4 * 11];

        VAR_5 += 7;

        VAR_8 >>= 15;
        VAR_3[VAR_6] = FUNC_1(VAR_8);

        VAR_6++;

        VAR_7 = (VAR_7 + 1) % 11;
        if (!VAR_7)
            VAR_5++;
    } while (VAR_5 < FUNC_0(VAR_2->excitation));
}
