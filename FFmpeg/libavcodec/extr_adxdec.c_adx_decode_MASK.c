
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_5__ {int s1; int s2; } ;
struct TYPE_4__ {int* coeff; TYPE_2__* prev; } ;
typedef int GetBitContext ;
typedef TYPE_1__ ADXContext ;
typedef TYPE_2__ ADXChannelState ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_4(ADXContext *VAR_3, int16_t *VAR_4, int VAR_5,
                      const uint8_t *VAR_6, int VAR_7)
{
    ADXChannelState *VAR_8 = &VAR_3->prev[VAR_7];
    GetBitContext VAR_9;
    int VAR_10 = FUNC_0(VAR_6);
    int VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15;


    if (VAR_10 & 0x8000)
        return -1;

    FUNC_3(&VAR_9, VAR_6 + 2, (VAR_1 - 2) * 8);
    VAR_4 += VAR_5;
    VAR_13 = VAR_8->s1;
    VAR_14 = VAR_8->s2;
    for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
        VAR_15 = FUNC_2(&VAR_9, 4);
        VAR_12 = ((VAR_15 * (1 << VAR_2)) * VAR_10 + VAR_3->coeff[0] * VAR_13 + VAR_3->coeff[1] * VAR_14) >> VAR_2;
        VAR_14 = VAR_13;
        VAR_13 = FUNC_1(VAR_12);
        *VAR_4++ = VAR_13;
    }
    VAR_8->s1 = VAR_13;
    VAR_8->s2 = VAR_14;

    return 0;
}
