
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mdct_bits; } ;
typedef int FFTSample ;
typedef TYPE_1__ FFTContext ;


 int FUNC_0 (TYPE_1__*,int *,int const*) ;

void FUNC_1(FFTContext *VAR_0, FFTSample *VAR_1, const FFTSample *VAR_2)
{
    int VAR_3;
    int VAR_4 = 1 << VAR_0->mdct_bits;
    int VAR_5 = VAR_4 >> 1;
    int VAR_6 = VAR_4 >> 2;

    FUNC_0(VAR_0, VAR_1+VAR_6, VAR_2);

    for(VAR_3 = 0; VAR_3 < VAR_6; VAR_3++) {
        VAR_1[VAR_3] = -VAR_1[VAR_5-VAR_3-1];
        VAR_1[VAR_4-VAR_3-1] = VAR_1[VAR_5+VAR_3];
    }
}
