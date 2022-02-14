
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_3__ {int step; int predictor; } ;
typedef TYPE_1__ ADPCMChannelStatus ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static inline uint8_t FUNC_4(ADPCMChannelStatus *VAR_2,
                                                   int16_t VAR_3)
{
    int VAR_4, VAR_5;

    if (!VAR_2->step) {
        VAR_2->predictor = 0;
        VAR_2->step = 127;
    }

    VAR_5 = VAR_3 - VAR_2->predictor;

    VAR_4 = FUNC_0(7, FUNC_1(VAR_5) * 4 / VAR_2->step) + (VAR_5 < 0) * 8;

    VAR_2->predictor += ((VAR_2->step * VAR_0[VAR_4]) / 8);
    VAR_2->predictor = FUNC_3(VAR_2->predictor);
    VAR_2->step = (VAR_2->step * VAR_1[VAR_4]) >> 8;
    VAR_2->step = FUNC_2(VAR_2->step, 127, 24576);

    return VAR_4;
}
