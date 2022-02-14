
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef double uint16_t ;
typedef int ptrdiff_t ;
struct TYPE_3__ {double opacity; } ;
typedef TYPE_1__ FilterParams ;



__attribute__((used)) static void FUNC_0(const uint8_t *VAR_0, ptrdiff_t VAR_1,
                                  const uint8_t *VAR_2, ptrdiff_t VAR_3,
                                  uint8_t *VAR_4, ptrdiff_t VAR_5,
                                  ptrdiff_t VAR_6, ptrdiff_t VAR_7,
                                  FilterParams *VAR_8, double *VAR_9, int VAR_10)
{
    const uint16_t *VAR_11 = (uint16_t*)VAR_0;
    const uint16_t *VAR_12 = (uint16_t*)VAR_2;
    uint16_t *VAR_13 = (uint16_t*)VAR_4;
    const double VAR_14 = VAR_8->opacity;
    int VAR_15, VAR_16;
    VAR_5 /= 2;
    VAR_1 /= 2;
    VAR_3 /= 2;

    for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
        for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
            VAR_13[VAR_16] = VAR_11[VAR_16] * VAR_14 + VAR_12[VAR_16] * (1. - VAR_14);
        }
        VAR_13 += VAR_5;
        VAR_11 += VAR_1;
        VAR_12 += VAR_3;
    }
}
