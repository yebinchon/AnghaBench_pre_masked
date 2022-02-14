
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int8_t ;
typedef int int16_t ;
struct TYPE_3__ {int step; int predictor; } ;
typedef TYPE_1__ ADPCMChannelStatus ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int) ;
 int* VAR_0 ;

__attribute__((used)) static inline int16_t FUNC_2(ADPCMChannelStatus *VAR_1, int8_t VAR_2)
{
    int VAR_3, VAR_4, VAR_5;
    int VAR_6;

    VAR_3 = VAR_2 & 8;
    VAR_4 = VAR_2 & 7;



    VAR_5 = ((2 * VAR_4 + 1) * VAR_1->step) >> 3;

    VAR_1->predictor = ((VAR_1->predictor * 254) >> 8) + (VAR_3 ? -VAR_5 : VAR_5);
    VAR_1->predictor = FUNC_1(VAR_1->predictor);

    VAR_6 = (VAR_0[VAR_2 & 7] * VAR_1->step) >> 8;
    VAR_1->step = FUNC_0(VAR_6, 511, 32767);

    return (int16_t)VAR_1->predictor;
}
