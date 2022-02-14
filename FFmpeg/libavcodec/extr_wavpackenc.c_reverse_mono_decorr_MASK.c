
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Decorr {int value; int* samplesA; } ;
typedef void* int32_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct Decorr *VAR_1)
{
    if (VAR_1->value > VAR_0) {
        int32_t VAR_2;

        if (VAR_1->value & 1)
            VAR_2 = 2 * VAR_1->samplesA[0] - VAR_1->samplesA[1];
        else
            VAR_2 = (3 * VAR_1->samplesA[0] - VAR_1->samplesA[1]) >> 1;

        VAR_1->samplesA[1] = VAR_1->samplesA[0];
        VAR_1->samplesA[0] = VAR_2;

        if (VAR_1->value & 1)
            VAR_2 = 2 * VAR_1->samplesA[0] - VAR_1->samplesA[1];
        else
            VAR_2 = (3 * VAR_1->samplesA[0] - VAR_1->samplesA[1]) >> 1;

        VAR_1->samplesA[1] = VAR_2;
    } else if (VAR_1->value > 1) {
        int VAR_3, VAR_4, VAR_5;

        for (VAR_3 = 0, VAR_4 = VAR_1->value - 1, VAR_5 = 0; VAR_5 < VAR_1->value / 2; VAR_3++, VAR_4--, VAR_5++) {
            VAR_3 &= (VAR_0 - 1);
            VAR_4 &= (VAR_0 - 1);
            VAR_1->samplesA[VAR_3] ^= VAR_1->samplesA[VAR_4];
            VAR_1->samplesA[VAR_4] ^= VAR_1->samplesA[VAR_3];
            VAR_1->samplesA[VAR_3] ^= VAR_1->samplesA[VAR_4];
        }
    }
}
