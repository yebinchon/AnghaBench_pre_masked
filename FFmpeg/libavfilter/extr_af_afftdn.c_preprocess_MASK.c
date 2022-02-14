
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double re; double im; } ;
typedef TYPE_1__ FFTComplex ;


 double VAR_0 ;
 double FUNC_0 (double) ;

__attribute__((used)) static void FUNC_1(FFTComplex *VAR_1, int VAR_2)
{
    double VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    int VAR_13, VAR_14, VAR_15;

    VAR_7 = 2.0 * VAR_0 / VAR_2;
    VAR_10 = FUNC_0(0.5 * VAR_7);
    VAR_10 = -2.0 * VAR_10 * VAR_10;
    VAR_9 = FUNC_0(VAR_7);
    VAR_11 = 1.0 + VAR_10;
    VAR_8 = VAR_9;
    VAR_13 = VAR_2 / 2;

    for (VAR_14 = 1; VAR_14 < VAR_2 / 4; VAR_14++) {
        VAR_15 = VAR_13 - VAR_14;
        VAR_4 = 0.5 * (VAR_1[VAR_14].re + VAR_1[VAR_15].re);
        VAR_3 = 0.5 * (VAR_1[VAR_14].im - VAR_1[VAR_15].im);
        VAR_6 = 0.5 * (VAR_1[VAR_14].im + VAR_1[VAR_15].im);
        VAR_5 = 0.5 * (VAR_1[VAR_15].re - VAR_1[VAR_14].re);
        VAR_1[VAR_14].re = VAR_4 + VAR_11 * VAR_6 + VAR_8 * VAR_5;
        VAR_1[VAR_14].im = VAR_3 + VAR_11 * VAR_5 - VAR_8 * VAR_6;
        VAR_1[VAR_15].re = VAR_4 - VAR_11 * VAR_6 - VAR_8 * VAR_5;
        VAR_1[VAR_15].im = -VAR_3 + VAR_11 * VAR_5 - VAR_8 * VAR_6;
        VAR_12 = VAR_11;
        VAR_11 += VAR_11 * VAR_10 - VAR_8 * VAR_9;
        VAR_8 += VAR_8 * VAR_10 + VAR_12 * VAR_9;
    }

    VAR_4 = VAR_1[0].re;
    VAR_1[0].re = VAR_4 + VAR_1[0].im;
    VAR_1[0].im = VAR_4 - VAR_1[0].im;
}
