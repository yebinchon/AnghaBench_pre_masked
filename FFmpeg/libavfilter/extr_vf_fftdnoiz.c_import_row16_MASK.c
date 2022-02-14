
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ im; int re; } ;
typedef TYPE_1__ FFTComplex ;



__attribute__((used)) static void FUNC_0(FFTComplex *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    uint16_t *VAR_3 = (uint16_t *)VAR_1;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        VAR_0[VAR_4].re = VAR_3[VAR_4];
        VAR_0[VAR_4].im = 0;
    }
}
