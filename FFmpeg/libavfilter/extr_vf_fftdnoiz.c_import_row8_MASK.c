
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ im; int re; } ;
typedef TYPE_1__ FFTComplex ;



__attribute__((used)) static void FUNC_0(FFTComplex *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        VAR_0[VAR_3].re = VAR_1[VAR_3];
        VAR_0[VAR_3].im = 0;
    }
}
