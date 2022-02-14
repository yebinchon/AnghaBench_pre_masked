
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double gamma; double gamma_weight; double contrast; double brightness; int* lut; int lut_clean; } ;
typedef TYPE_1__ EQParameters ;


 double FUNC_0 (double,double) ;

__attribute__((used)) static void FUNC_1(EQParameters *VAR_0)
{
    int VAR_1;
    double VAR_2 = 1.0 / VAR_0->gamma;
    double VAR_3 = 1.0 - VAR_0->gamma_weight;

    for (VAR_1 = 0; VAR_1 < 256; VAR_1++) {
        double VAR_4 = VAR_1 / 255.0;
        VAR_4 = VAR_0->contrast * (VAR_4 - 0.5) + 0.5 + VAR_0->brightness;

        if (VAR_4 <= 0.0) {
            VAR_0->lut[VAR_1] = 0;
        } else {
            VAR_4 = VAR_4 * VAR_3 + FUNC_0(VAR_4, VAR_2) * VAR_0->gamma_weight;

            if (VAR_4 >= 1.0)
                VAR_0->lut[VAR_1] = 255;
            else
                VAR_0->lut[VAR_1] = 256.0 * VAR_4;
        }
    }

    VAR_0->lut_clean = 1;
}
