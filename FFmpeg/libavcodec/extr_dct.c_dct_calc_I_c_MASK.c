
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* rdft_calc ) (TYPE_2__*,float*) ;} ;
struct TYPE_6__ {int nbits; TYPE_2__ rdft; } ;
typedef float FFTSample ;
typedef TYPE_1__ DCTContext ;


 float FUNC_0 (TYPE_1__*,int,int) ;
 float FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_2__*,float*) ;

__attribute__((used)) static void FUNC_3(DCTContext *VAR_0, FFTSample *VAR_1)
{
    int VAR_2 = 1 << VAR_0->nbits;
    int VAR_3;
    float VAR_4 = -0.5f * (VAR_1[0] - VAR_1[VAR_2]);

    for (VAR_3 = 0; VAR_3 < VAR_2 / 2; VAR_3++) {
        float VAR_5 = VAR_1[VAR_3];
        float VAR_6 = VAR_1[VAR_2 - VAR_3];
        float VAR_7 = FUNC_1(VAR_0, VAR_2, 2 * VAR_3);
        float VAR_8 = FUNC_0(VAR_0, VAR_2, 2 * VAR_3);

        VAR_8 *= VAR_5 - VAR_6;
        VAR_7 *= VAR_5 - VAR_6;

        VAR_4 += VAR_8;

        VAR_5 = (VAR_5 + VAR_6) * 0.5f;
        VAR_1[VAR_3] = VAR_5 - VAR_7;
        VAR_1[VAR_2 - VAR_3] = VAR_5 + VAR_7;
    }

    VAR_0->rdft.rdft_calc(&VAR_0->rdft, VAR_1);
    VAR_1[VAR_2] = VAR_1[1];
    VAR_1[1] = VAR_4;

    for (VAR_3 = 3; VAR_3 <= VAR_2; VAR_3 += 2)
        VAR_1[VAR_3] = VAR_1[VAR_3 - 2] - VAR_1[VAR_3];
}
