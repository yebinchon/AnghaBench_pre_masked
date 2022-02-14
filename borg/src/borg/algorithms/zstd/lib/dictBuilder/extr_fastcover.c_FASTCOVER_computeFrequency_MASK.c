
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_4__ {unsigned int skip; } ;
struct TYPE_5__ {unsigned int f; unsigned int d; int nbTrainSamples; int nbSamples; size_t* offsets; scalar_t__ samples; TYPE_1__ accelParams; } ;
typedef TYPE_2__ FASTCOVER_ctx_t ;


 size_t FUNC_0 (scalar_t__,unsigned int const,unsigned int const) ;
 unsigned int FUNC_1 (unsigned int const,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(U32* VAR_0, const FASTCOVER_ctx_t* VAR_1)
{
    const unsigned VAR_2 = VAR_1->f;
    const unsigned VAR_3 = VAR_1->d;
    const unsigned VAR_4 = VAR_1->accelParams.skip;
    const unsigned VAR_5 = FUNC_1(VAR_3, 8);
    size_t VAR_6;
    FUNC_2(VAR_1->nbTrainSamples >= 5);
    FUNC_2(VAR_1->nbTrainSamples <= VAR_1->nbSamples);
    for (VAR_6 = 0; VAR_6 < VAR_1->nbTrainSamples; VAR_6++) {
        size_t VAR_7 = VAR_1->offsets[VAR_6];
        size_t const VAR_8 = VAR_1->offsets[VAR_6+1];
        while (VAR_7 + VAR_5 <= VAR_8) {
            const size_t VAR_9 = FUNC_0(VAR_1->samples + VAR_7, VAR_2, VAR_3);
            VAR_0[VAR_9]++;
            VAR_7 = VAR_7 + VAR_4 + 1;
        }
    }
}
