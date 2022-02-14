
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int int16_t ;
struct TYPE_3__ {size_t step; int predictor; } ;
typedef TYPE_1__ ADPCMChannelStatus ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (size_t,int) ;
 scalar_t__* VAR_0 ;
 scalar_t__** VAR_1 ;

__attribute__((used)) static inline int16_t FUNC_2(ADPCMChannelStatus *VAR_2, uint8_t VAR_3)
{
    VAR_2->predictor += VAR_1[VAR_2->step][VAR_3];
    VAR_2->predictor = FUNC_0(VAR_2->predictor);
    VAR_2->step += VAR_0[VAR_3];
    VAR_2->step = FUNC_1(VAR_2->step, 5);
    return VAR_2->predictor;
}
