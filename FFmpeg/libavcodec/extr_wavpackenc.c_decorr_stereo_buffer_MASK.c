
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Decorr {int delta; int value; int weightA; int weightB; int sumA; int sumB; int samplesB; int samplesA; int member_0; } ;
typedef int int32_t ;
struct TYPE_3__ {scalar_t__ gt16bit; struct Decorr* dps; } ;
typedef TYPE_1__ WavPackExtraInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int *,int *,int *,int,struct Decorr*,int) ;
 int FUNC_3 (int *,int *,int *,int *,int,struct Decorr*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct Decorr*) ;

__attribute__((used)) static void FUNC_6(WavPackExtraInfo *VAR_0,
                                 int32_t *VAR_1, int32_t *VAR_2,
                                 int32_t *VAR_3, int32_t *VAR_4,
                                 int VAR_5, int VAR_6)
{
    struct Decorr VAR_7 = {0}, *VAR_8 = VAR_0->dps + VAR_6;
    int VAR_9 = VAR_8->delta, VAR_10;
    int VAR_11 = VAR_8->value;

    if (VAR_9 == 7)
        VAR_10 = 7;
    else if (VAR_9 < 2)
        VAR_10 = 3;
    else
        VAR_10 = VAR_9 + 1;

    VAR_7.value = VAR_11;
    VAR_7.delta = VAR_10;
    FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
                  FUNC_1(2048, VAR_5), &VAR_7, -1);
    VAR_7.delta = VAR_9;

    if (VAR_6 == 0) {
        FUNC_5(&VAR_7);
    } else {
        FUNC_0(VAR_7.samplesA);
        FUNC_0(VAR_7.samplesB);
    }

    FUNC_4(VAR_8->samplesA, VAR_7.samplesA, sizeof(VAR_7.samplesA));
    FUNC_4(VAR_8->samplesB, VAR_7.samplesB, sizeof(VAR_7.samplesB));
    VAR_8->weightA = VAR_7.weightA;
    VAR_8->weightB = VAR_7.weightB;

    if (VAR_9 == 0) {
        VAR_7.delta = 1;
        FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7, 1);
        VAR_7.delta = 0;
        FUNC_4(VAR_7.samplesA, VAR_8->samplesA, sizeof(VAR_7.samplesA));
        FUNC_4(VAR_7.samplesB, VAR_8->samplesB, sizeof(VAR_7.samplesB));
        VAR_8->weightA = VAR_7.weightA = VAR_7.sumA / VAR_5;
        VAR_8->weightB = VAR_7.weightB = VAR_7.sumB / VAR_5;
    }

    if (VAR_0->gt16bit)
        FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
                           VAR_5, &VAR_7, 1);
    else
        FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4,
                            VAR_5, &VAR_7);
}
