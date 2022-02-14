
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Decorr {int* samplesA; int value; scalar_t__ weightA; scalar_t__ sumA; int delta; } ;
typedef void* int32_t ;


 scalar_t__ FUNC_0 (scalar_t__,void*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ,void*,void*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void**,int*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(int32_t *VAR_1, int32_t *VAR_2,
                        int VAR_3, struct Decorr *VAR_4, int VAR_5)
{
    int VAR_6 = 0, VAR_7;

    VAR_4->sumA = 0;

    if (VAR_5 < 0) {
        VAR_2 += (VAR_3 - 1);
        VAR_1 += (VAR_3 - 1);
    }

    VAR_4->weightA = FUNC_4(FUNC_5(VAR_4->weightA));

    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
        VAR_4->samplesA[VAR_7] = FUNC_6(FUNC_2(VAR_4->samplesA[VAR_7]));

    if (VAR_4->value > VAR_0) {
        while (VAR_3--) {
            int32_t VAR_8, VAR_9;

            VAR_9 = ((3 - (VAR_4->value & 1)) * VAR_4->samplesA[0] - VAR_4->samplesA[1]) >> !(VAR_4->value & 1);

            VAR_4->samplesA[1] = VAR_4->samplesA[0];
            VAR_4->samplesA[0] = VAR_8 = VAR_1[0];

            VAR_8 -= FUNC_0(VAR_4->weightA, VAR_9);
            FUNC_1(VAR_4->weightA, VAR_4->delta, VAR_9, VAR_8);
            VAR_4->sumA += VAR_4->weightA;
            VAR_2[0] = VAR_8;
            VAR_1 += VAR_5;
            VAR_2 += VAR_5;
        }
    } else if (VAR_4->value > 0) {
        while (VAR_3--) {
            int VAR_10 = (VAR_6 + VAR_4->value) & (VAR_0 - 1);
            int32_t VAR_11, VAR_12;

            VAR_12 = VAR_4->samplesA[VAR_6];
            VAR_4->samplesA[VAR_10] = VAR_11 = VAR_1[0];
            VAR_6 = (VAR_6 + 1) & (VAR_0 - 1);

            VAR_11 -= FUNC_0(VAR_4->weightA, VAR_12);
            FUNC_1(VAR_4->weightA, VAR_4->delta, VAR_12, VAR_11);
            VAR_4->sumA += VAR_4->weightA;
            VAR_2[0] = VAR_11;
            VAR_1 += VAR_5;
            VAR_2 += VAR_5;
        }
    }

    if (VAR_6 && VAR_4->value > 0 && VAR_4->value <= VAR_0) {
        int32_t VAR_13[VAR_0];

        FUNC_3(VAR_13, VAR_4->samplesA, sizeof(VAR_4->samplesA));

        for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
            VAR_4->samplesA[VAR_7] = VAR_13[VAR_6];
            VAR_6 = (VAR_6 + 1) & (VAR_0 - 1);
        }
    }
}
