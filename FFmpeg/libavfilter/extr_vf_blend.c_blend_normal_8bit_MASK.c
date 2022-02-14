
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef double uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_3__ {double opacity; } ;
typedef TYPE_1__ FilterParams ;



__attribute__((used)) static void FUNC_0(const uint8_t *VAR_0, ptrdiff_t VAR_1,
                              const uint8_t *VAR_2, ptrdiff_t VAR_3,
                              uint8_t *VAR_4, ptrdiff_t VAR_5,
                              ptrdiff_t VAR_6, ptrdiff_t VAR_7,
                              FilterParams *VAR_8, double *VAR_9, int VAR_10)
{
    const double VAR_11 = VAR_8->opacity;
    int VAR_12, VAR_13;

    for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
        for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
            VAR_4[VAR_13] = VAR_0[VAR_13] * VAR_11 + VAR_2[VAR_13] * (1. - VAR_11);
        }
        VAR_4 += VAR_5;
        VAR_0 += VAR_1;
        VAR_2 += VAR_3;
    }
}
