
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Decorr {int value; int* samplesA; int* samplesB; } ;
typedef void* int32_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct Decorr *VAR_1)
{
    if (VAR_1->value > VAR_0) {
        int32_t VAR_2, VAR_3;

        if (VAR_1->value & 1) {
            VAR_2 = 2 * VAR_1->samplesA[0] - VAR_1->samplesA[1];
            VAR_3 = 2 * VAR_1->samplesB[0] - VAR_1->samplesB[1];
        } else {
            VAR_2 = (3 * VAR_1->samplesA[0] - VAR_1->samplesA[1]) >> 1;
            VAR_3 = (3 * VAR_1->samplesB[0] - VAR_1->samplesB[1]) >> 1;
        }

        VAR_1->samplesA[1] = VAR_1->samplesA[0];
        VAR_1->samplesB[1] = VAR_1->samplesB[0];
        VAR_1->samplesA[0] = VAR_2;
        VAR_1->samplesB[0] = VAR_3;

        if (VAR_1->value & 1) {
            VAR_2 = 2 * VAR_1->samplesA[0] - VAR_1->samplesA[1];
            VAR_3 = 2 * VAR_1->samplesB[0] - VAR_1->samplesB[1];
        } else {
            VAR_2 = (3 * VAR_1->samplesA[0] - VAR_1->samplesA[1]) >> 1;
            VAR_3 = (3 * VAR_1->samplesB[0] - VAR_1->samplesB[1]) >> 1;
        }

        VAR_1->samplesA[1] = VAR_2;
        VAR_1->samplesB[1] = VAR_3;
    } else if (VAR_1->value > 1) {
        int VAR_4, VAR_5, VAR_6;

        for (VAR_4 = 0, VAR_5 = VAR_1->value - 1, VAR_6 = 0; VAR_6 < VAR_1->value / 2; VAR_4++, VAR_5--, VAR_6++) {
            VAR_4 &= (VAR_0 - 1);
            VAR_5 &= (VAR_0 - 1);
            VAR_1->samplesA[VAR_4] ^= VAR_1->samplesA[VAR_5];
            VAR_1->samplesA[VAR_5] ^= VAR_1->samplesA[VAR_4];
            VAR_1->samplesA[VAR_4] ^= VAR_1->samplesA[VAR_5];
            VAR_1->samplesB[VAR_4] ^= VAR_1->samplesB[VAR_5];
            VAR_1->samplesB[VAR_5] ^= VAR_1->samplesB[VAR_4];
            VAR_1->samplesB[VAR_4] ^= VAR_1->samplesB[VAR_5];
        }
    }
}
