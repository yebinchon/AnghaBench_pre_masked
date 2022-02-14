
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ int16_t ;
struct TYPE_3__ {int step; scalar_t__ predictor; } ;
typedef TYPE_1__ ADPCMChannelStatus ;


 int FUNC_0 (int,int,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static inline int16_t FUNC_2(ADPCMChannelStatus *VAR_2, uint8_t VAR_3)
{
    if(!VAR_2->step) {
        VAR_2->predictor = 0;
        VAR_2->step = 127;
    }

    VAR_2->predictor += (VAR_2->step * VAR_0[VAR_3]) / 8;
    VAR_2->predictor = FUNC_1(VAR_2->predictor);
    VAR_2->step = (VAR_2->step * VAR_1[VAR_3]) >> 8;
    VAR_2->step = FUNC_0(VAR_2->step, 127, 24576);
    return VAR_2->predictor;
}
