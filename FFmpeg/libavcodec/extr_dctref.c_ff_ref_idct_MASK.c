
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 short* VAR_0 ;
 short FUNC_0 (double) ;

void FUNC_1(short *VAR_1)
{


    unsigned int VAR_2, VAR_3, VAR_4;
    double VAR_5[8 * 8];


    for (VAR_2 = 0; VAR_2 < 64; VAR_2 += 8) {
        for (VAR_3 = 0; VAR_3 < 8; ++VAR_3) {
            double VAR_6 = 0;
            for (VAR_4 = 0; VAR_4 < 8; ++VAR_4) {
                VAR_6 += VAR_1[VAR_2 + VAR_4] * VAR_0[VAR_4 * 8 + VAR_3];
            }
            VAR_5[VAR_2 + VAR_3] = VAR_6;
        }
    }


    for (VAR_2 = 0; VAR_2 < 8; ++VAR_2) {
        for (VAR_3 = 0; VAR_3 < 8; ++VAR_3) {
            double VAR_7 = 0;
            for (VAR_4 = 0; VAR_4 < 64; VAR_4 += 8) {
                VAR_7 += VAR_0[VAR_4 + VAR_2] * VAR_5[VAR_4 + VAR_3];
            }
            VAR_1[VAR_2 * 8 + VAR_3] = FUNC_0(VAR_7 + 0.5);
        }
    }
}
