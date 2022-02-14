
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {double re; double im; } ;
struct TYPE_5__ {void* im; void* re; } ;
typedef TYPE_1__ FFTComplex ;


 int FUNC_0 (double,double,double,double,void*,void*) ;
 void* FUNC_1 (double,int) ;
 TYPE_4__* VAR_0 ;

__attribute__((used)) static void FUNC_2(FFTComplex *VAR_1, FFTComplex *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    int VAR_6 = 1 << VAR_3;
    int VAR_7 = VAR_6 >> 1;

    for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
        double VAR_8 = 0, VAR_9 = 0;
        FFTComplex *VAR_10 = VAR_2;
        for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
            double VAR_11, VAR_12;
            int VAR_13 = (VAR_4 * VAR_5) & (VAR_6 - 1);
            if (VAR_13 >= VAR_7) {
                VAR_12 = -VAR_0[VAR_13 - VAR_7].re;
                VAR_11 = -VAR_0[VAR_13 - VAR_7].im;
            } else {
                VAR_12 = VAR_0[VAR_13].re;
                VAR_11 = VAR_0[VAR_13].im;
            }
            FUNC_0(VAR_8, VAR_9, VAR_12, VAR_11, VAR_10->re, VAR_10->im);
            VAR_10++;
        }
        VAR_1[VAR_4].re = FUNC_1(VAR_8, VAR_3);
        VAR_1[VAR_4].im = FUNC_1(VAR_9, VAR_3);
    }
}
