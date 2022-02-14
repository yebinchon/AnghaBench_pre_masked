
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int order; int coeff_bits; int coeff_shift; } ;
typedef int MLPEncodeContext ;
typedef TYPE_1__ FilterParams ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(MLPEncodeContext *VAR_2, FilterParams *VAR_3, int32_t *VAR_4)
{
    int VAR_5 = VAR_0, VAR_6 = VAR_1;
    int VAR_7, VAR_8;
    int VAR_9 = 0;
    int VAR_10;

    for (VAR_10 = 0; VAR_10 < VAR_3->order; VAR_10++) {
        int VAR_11 = VAR_4[VAR_10];

        if (VAR_11 < VAR_5)
            VAR_5 = VAR_11;
        if (VAR_11 > VAR_6)
            VAR_6 = VAR_11;

        VAR_9 |= VAR_11;
    }

    VAR_7 = FUNC_0(FUNC_1(VAR_5), FUNC_1(VAR_6));

    for (VAR_8 = 0; VAR_8 < 7 && VAR_7 + VAR_8 < 16 && !(VAR_9 & (1<<VAR_8)); VAR_8++);

    VAR_3->coeff_bits = VAR_7;
    VAR_3->coeff_shift = VAR_8;
}
