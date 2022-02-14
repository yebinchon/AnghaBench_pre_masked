
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int8_t ;
typedef int int16_t ;
struct TYPE_3__ {int predictor; int step; } ;
typedef TYPE_1__ ADPCMChannelStatus ;


 void* FUNC_0 (int,int,int) ;

__attribute__((used)) static inline int16_t FUNC_1(ADPCMChannelStatus *VAR_0, int8_t VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5;

    VAR_3 = VAR_0->predictor;
    VAR_2 = VAR_1 & 7;
    VAR_4 = VAR_0->step;
    VAR_5 = (VAR_2 * 2 + 1) * VAR_4;
    if (VAR_5 < 0)
        VAR_5 = VAR_5 + 7;

    if ((VAR_1 & 8) == 0)
        VAR_3 = FUNC_0(VAR_3 + (VAR_5 >> 3), -32767, 32767);
    else
        VAR_3 = FUNC_0(VAR_3 - (VAR_5 >> 3), -32767, 32767);

    switch (VAR_2) {
    case 7:
        VAR_4 *= 0x99;
        break;
    case 6:
        VAR_0->step = FUNC_0(VAR_0->step * 2, 127, 24576);
        VAR_0->predictor = VAR_3;
        return VAR_3;
    case 5:
        VAR_4 *= 0x66;
        break;
    case 4:
        VAR_4 *= 0x4d;
        break;
    default:
        VAR_4 *= 0x39;
        break;
    }

    if (VAR_4 < 0)
        VAR_4 += 0x3f;

    VAR_0->step = VAR_4 >> 6;
    VAR_0->step = FUNC_0(VAR_0->step, 127, 24576);
    VAR_0->predictor = VAR_3;
    return VAR_3;
}
